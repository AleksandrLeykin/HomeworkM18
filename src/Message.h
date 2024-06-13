#pragma once
#include <string>

constexpr auto PathToText = " ";

class Message {
public:
    Message();
    ~Message();

private:
    //������ �� �����
    void readFromFile();
    //������ � ����
    void writeToFile();

    std::string _text;
    std::string _sender;
    std::string _receiver;
};