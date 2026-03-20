# src/controllers/UserController.hpp
#ifndef USERCONTROLLER_HPP
#define USERCONTROLLER_HPP
#include "services/UserService.hpp"
#include "adapters/UserAdapter.hpp"
class UserController {
public:
    void run();
private:
    UserService userService;
    UserAdapter userAdapter;
};
#endif