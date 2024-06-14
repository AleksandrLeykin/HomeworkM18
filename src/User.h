#pragma once

#include <iostream>
#include <string>
#include <vector>
//путь к файлу
constexpr auto   PathToFile = "userTest.config";

class User {
public:
    User(const std::string& name, const std::string& login, const std::string pass);
    ~User();

    void getUserName();

private:
    struct DateName {
        std::string m_name;
        std::string m_login;
        std::string m_pass;
        DateName() {}
        DateName(const std::string& name, const std::string& login, const std::string& pass) :
            m_name(name)
            , m_login(login)
            , m_pass(pass) {}
    };
    //чтение из файла
    void readFromFile();
    //запись в файл
    void writeToFile(DateName user);

    std::string _name;
    std::string _login;
    std::string _pass;

    std::vector<DateName> userDate;
};