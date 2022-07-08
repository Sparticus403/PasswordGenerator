#ifndef PASSWORDGENERATOR_H
#define PASSWORDGENERATOR_H

#include <vector>
#include <string>

std::vector<char> CreateCharacterList(std::vector<char> s);
std::string GenerateRandomString(std::vector<char> s);

#endif