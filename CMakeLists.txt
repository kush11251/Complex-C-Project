# CMakeLists.txt
project(ComplexProject)
set(SOURCE_FILES src/main.cpp src/services/UserService.cpp src/models/User.cpp src/utils/StringUtils.cpp src/adapters/UserAdapter.cpp src/controllers/UserController.cpp src/config/Config.cpp)
add_executable(${PROJECT_NAME} ${SOURCE_FILES})