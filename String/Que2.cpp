//quetion:-2. Write a C++ program to change every letter in a given string to the letter that follows it in the alphabet 
//(e.g., a becomes b, p becomes q, and z wraps around to a).
// Example:
// Sample Input: cybrom
// Sample Output: dzcspn


#include <iostream>
#include <string>
using namespace std;

string changeLetters(string input) {
    for (int i = 0; i < input.length(); i++) {
        // Change only every letter
        if (isalpha(input[i]))
         {
            if (input[i] == 'z')
             {
                input[i] = 'a'; // Special case for 'z'
            } else if (input[i] == 'Z') 
            {
                input[i] = 'A'; // Special case for 'Z'
            } else 
            {
                input[i] = input[i]+1; // Increment the letter
            }
        }
    }
    return input;
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;
    
    string output = changeLetters(input);
    cout << "Output: " << output << endl;
    
}
