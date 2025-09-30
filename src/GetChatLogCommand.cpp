#include "../include/GetChatLogCommand.h"

GetChatLogCommand::GetChatLogCommand(ChatRoom* room, Users* fromUser, std::string message):Command(room, message, fromUser){}


void GetChatLogCommand::execute(){
    room->getChatLog();
}