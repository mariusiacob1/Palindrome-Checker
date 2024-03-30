#ifndef PALINDROME_H
#define PALINDROME_H

#include <string>

using namespace std;

class Palindrome {
public:
    string filterNonAlphabetical(const string& str); // Removes all non-alphanumeric characters from a string like numbers, spaces, and punctuation.
    string toLowercase(const string& str); // Converts all uppercase characters to lowercase.
    bool isPalindrome(const string& str); // Returns true if the string is a palindrome, otherwise false.
};

#endif // PALINDROME_H