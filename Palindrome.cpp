#include "Palindrome.h"
#include <iostream>
#include <string>
#include <cctype> // For tolower

using namespace std;

// Function to filter non-alphabetical characters
string Palindrome::filterNonAlphabetical(const string& str) {
    string result;
    for (int i = 0; i < str.length(); i++) {
        char c = str[i]; // Get the character at the index
        if (isalpha(c)) { // Check if the character is alphabetical
            result += c;
        }
    }
    return result;
}

// Function to convert string to lowercase
string Palindrome::toLowercase(const string& str) {
    string result;
    for (char c : str) {
        result += tolower(c); // Convert character to lowercase
    }
    return result;
}

// Function to check if the string is a palindrome
bool Palindrome::isPalindrome(const string& str) {
    int left = 0;
    int right = str.length() - 1; // Get the last index of the string
    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}