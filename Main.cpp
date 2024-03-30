#include "Palindrome.h"
#include <iostream>
#include <string>
#include <cctype> // For std::tolower

using namespace std;

int main() {
    Palindrome palindrome;
    
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    // Filter non-alphabetical characters
    string filteredString = palindrome.filterNonAlphabetical(input);

    // Convert string to lowercase
    string lowercaseString = palindrome.toLowercase(filteredString);

    // Check if it is a palindrome or not
    if (palindrome.isPalindrome(lowercaseString)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}
