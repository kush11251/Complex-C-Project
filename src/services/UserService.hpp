# src/services/UserService.hpp
#ifndef USERSERVICE_HPP
#define USERSERVICE_HPP
#include "models/User.hpp"
#include "utils/StringUtils.hpp"
class UserService {
public:
    User GetUser();
private:
    User user;
};
#endif