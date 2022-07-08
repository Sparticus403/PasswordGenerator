#include "PasswordGenerator.h"
#include <fstream>
#include <random>

std::vector<char> CreateCharacterList(std::vector<char> s){
    std::ifstream ifs("passwordcharacters.txt");
    char tempchar;
    while (ifs >> tempchar){
        s.push_back(tempchar);
    }
    return s;
}

std::string GenerateRandomString(std::vector<char> s){
    std::string pword;
    const int PWORD_LENGTH = 16;
    int index;
    std::default_random_engine generator;
    std::uniform_int_distribution<int> distribution(1, 70);
    for ( int i = 0 ; i < PWORD_LENGTH; i++){
        index = distribution(generator);
        pword.push_back(s.at(index));
    }

    return pword;
}