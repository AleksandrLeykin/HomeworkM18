#pragma once
#include <string>

constexpr auto PathToText = "textOut.config";

class Message {
public:
    Message(const std::string& receiver, const std::string sender, const std::string& text);
    ~Message() = default;
    std::string _text;
    std::string _sender;
    std::string _receiver;
private:
    //запись в файл
    void writeToFile(const std::string& receiver, const std::string sender, const std::string& text);
       
};