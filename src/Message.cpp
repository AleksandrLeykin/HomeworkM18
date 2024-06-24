#include "Message.h"
#include <fstream>
#include <filesystem>

Message::Message(const std::string& receiver, const std::string sender,const std::string& text) :
	_receiver(receiver)
	, _text(text)
	, _sender(sender)
{
	writeToFile(receiver, sender, text);

}

void Message::writeToFile(const std::string& receiver, const std::string sender, const std::string& text)
{
	std::ofstream out(PathToText);

    //permission - разрешение spied on Denis Zlobin
    auto permission = std::filesystem::perms::group_all | 
                      std::filesystem::perms::others_all;
    std::filesystem::permissions(PathToText, permission,
	                             std::filesystem::perm_options::remove);

	if (out.is_open()) {
		out << receiver << " " << sender << " " << text << "\n";
	}
	out.close();
}