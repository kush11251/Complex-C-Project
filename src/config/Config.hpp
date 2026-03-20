# src/config/Config.hpp
#ifndef CONFIG_HPP
#define CONFIG_HPP
#include <string>
class Config {
public:
    std::string GetDatabaseUrl();
private:
    std::string databaseUrl;
};
#endif