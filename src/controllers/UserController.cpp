# src/controllers/UserController.cpp
#include "UserController.hpp"
#include <iostream>
void UserController::run() {
    userService.GetUser();
    userAdapter.SaveUser();
}