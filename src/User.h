#pragma once

#include <iostream>
#include <string>
#include <vector>
//путь к файлу
constexpr auto   PathToFile = " ";

class User {
public:
    User(const std::string& name, const std::string& login, const std::string pass);
    ~User();

    void getUserName();

private:
    //чтение из файла
    void readFromFile();
    //запись в файл
    void writeToFile();

    std::string _name;
    std::string _login;
    std::string _pass;
  //  std::vector<User> userDate;
};