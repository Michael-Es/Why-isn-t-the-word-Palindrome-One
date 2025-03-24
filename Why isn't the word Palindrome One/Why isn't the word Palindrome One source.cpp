#include <iostream>
#include <cctype>
#include "Why isn't the word Palindrome One.h"

bool is_palindrome(const std::string& str) {
    int left = 0, right = str.size() - 1;

    while (left < right) {
        // Convert characters to lowercase for comparison
        if (std::tolower(str[left]) != std::tolower(str[right])) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}