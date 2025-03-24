#include <iostream>
#include <string>
#include "Why isn't the word Palindrome One.h"

int main()
{
    std::string user_input;

    std::cout << "Welcome to the palindrome checker!\n\n";
    std::cout << "Enter a word!\n";
    std::getline(std::cin, user_input);  

    if (is_palindrome(user_input)) {
        std::cout << "The word \"" << user_input << "\" is a palindrome.\n";
    }
    else {
        std::cout << "The word \"" << user_input << "\" is not a palindrome.\n";
    }

    std::cout << "Thank you for using the palindrome checker!";
}

