#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


//Returns the largest sub palindrome from a given string of length n
int palindromeFinder(string s, int n){

    int longestEven = 1;
    int longestOdd = 1;
    int currentPalindrome = 2;

    for(int i = 0; i < n; i++){
        
        int j = i;
        int k = 1;

        //Odd sized palindrome finder
        while(s[j-k] == s[j+k]){

            currentPalindrome++;
            k++;

            if(currentPalindrome > longestOdd){
                longestOdd = currentPalindrome;
            }

        }

        currentPalindrome = 2;
        k = 1;

        //Even length
        while(s[j+1-k] == s[j+k]){

            currentPalindrome++;
            k++;

            if(currentPalindrome > longestEven){
                longestEven = currentPalindrome;
            }

        }

    }

    if(longestEven >= longestOdd){
        return longestEven;
    }
    else{
        return longestOdd;  
    }

}

typedef string::iterator sit;

void palindromeScanner(int inc, string chars, int n, int * array, int arrayPlace){

//  1.) Find the largest current palindrome
    
//  2.) At MOST 26*(n+1) additions to make so brute force is to check all those

// 3.) for each possible addition use palendrome finder to get its largest sub palindrome

    int initialLongest = palindromeFinder(chars, n);

    int atLeastKount = 0;

    char currChar = 97;
    //Scan all 26*(n+1) options with the palendrom finder and find the the number that increase the count by at lease inc

    string temp = chars;
    int tempInt = 0;

    for(int i = 0; i < n+1; i++){


        for(int j = 0; j < 26; j++){

            temp.insert(temp.begin()+i, currChar);

            tempInt = palindromeFinder(temp, n+1);

            //cout << "TEMPINT" << tempInt << endl;

            if((tempInt-initialLongest) >= inc){
                atLeastKount++;
            }
            else if(inc == 0){
                atLeastKount++;
            }

            temp = chars;
            currChar = currChar+j;
            tempInt = 0;

        }


    }


    array[arrayPlace] = atLeastKount;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  

    int queries;

    cin >> queries;

    int * ansArray = new int[queries];

    int n, k;

    string s;

    for(int i = 0; i < queries; i++){

        cin >> n;
        cin >> k;

        cin >> s;

        palindromeScanner(k, s, n, ansArray, i);

    }

    for(int j = 0; j < queries; j++){
        cout << ansArray[j] << endl;
    }

    return 0;
}
