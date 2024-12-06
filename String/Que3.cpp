// Question:
// Write a C++ program to capitalize the first letter of each word in a given string.
// Example:
// Sample Input: cybrom pvt ltd
// Sample Output: Cybrom Pvt Ltd

#include <iostream>
#include <string>
using namespace std;

string capitalword(string input) {
    bool capitalize = true; // Flag to determine if the next letter should be capitalized

    for (int i = 0; i < input.length(); i++) {
        if (isspace(input[i])) {
            // If the character is a space, set the flag to true
            capitalize = true;
        } else if (capitalize && isalpha(input[i])) {
            // Capitalize the letter if the flag is true
            input[i] = toupper(input[i]);
            capitalize = false; // Reset the flag
        } else {
            // Convert the rest of the characters to lowercase
            input[i] = tolower(input[i]);
        }
    }

    return input;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input); // Read the entire line of input

    string output = capitalword(input);
    cout << "Output: " << output << endl;

    return 0;
}

// Enter a string: ankita bobde
// Output: Ankita Bobde