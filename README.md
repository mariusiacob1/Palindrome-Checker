# Palindrome-Checker
 Checks whether a given string is a palindrome (reads the same forwards and backwards) or not.

# Approach
1. **Input**: 
   - Prompt the user to enter a string.
   - Read the string input from the user.

2. **Preprocessing**:
   - Remove any non-alphanumeric characters from the string (e.g., spaces, punctuation).
   - Convert the string to lowercase or uppercase (to make the comparison case-insensitive if desired).

3. **Palindrome Check Algorithm**:
   - Initialize two pointers, one pointing to the beginning of the string (let's call it `left`) and the other pointing to the end of the string (let's call it `right`).
   - Iterate until `left` pointer is less than `right` pointer:
     - Compare characters at `left` and `right` positions.
     - If they are not equal, the string is not a palindrome; break out of the loop.
     - Move `left` pointer to the right and `right` pointer to the left.
   - If the loop completes without breaking, the string is a palindrome.

4. **Output**:
   - If the string is a palindrome, display a message indicating that it is a palindrome.
   - If the string is not a palindrome, display a message indicating that it is not a palindrome.

5. **End of Program**:
   - Exit the program.