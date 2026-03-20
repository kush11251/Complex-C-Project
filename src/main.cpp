# src/main.cpp
#include <iostream>
#include "controllers/UserController.hpp"
int main() {
    UserController userController;
    userController.run();
    return 0;
}