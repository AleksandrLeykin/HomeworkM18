#pragma once

#include <iostream>
#include <string>
#include <vector>
//���� � �����
constexpr auto   PathToFile = " ";

class User {
public:
    User(const std::string& name, const std::string& login, const std::string pass);
    ~User();

    void getUserName();

private:
    //������ �� �����
    void readFromFile();
    //������ � ����
    void writeToFile();

    std::string _name;
    std::string _login;
    std::string _pass;
  //  std::vector<User> userDate;
};