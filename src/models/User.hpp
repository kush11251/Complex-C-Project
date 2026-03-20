# src/models/User.hpp
#ifndef USER_HPP
#define USER_HPP
#include <string>
class User {
public:
    std::string GetName();
private:
    std::string name;
};
#endif