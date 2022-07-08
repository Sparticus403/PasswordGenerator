#include <iostream>
#include "PasswordGenerator.h"
#include <vector>
#include <string>

/**
 * @brief Generate passords that are 16 characters long with special characters
 * Passwords will have 70^16 possible combinations
 * 
 * @return int 
 */

int main(){
    std::vector<char> charlist;
    std::string password;

    charlist = CreateCharacterList(charlist);
    password = GenerateRandomString(charlist);

    std::cout << password << std::endl;

    // for ( char c : charlist){
    //     std::cout << c << std::endl;
    // }

    return 0;
}