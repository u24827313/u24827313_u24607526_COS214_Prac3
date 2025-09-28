#include "Command.h"

Command::Command(ChatRoom* room, string message, Users* fromUser){
    this->room = room;
    this->message = message;
    this->fromUser = fromUser;
}



