#include "Users.h"
#include "ChatRoom.h"
#include "Command.h"
#include <iostream>

Users::Users(std::string& name, ChatRoom* chatRoom, Command* commandQueue)
    {
        this->name=name;
        this->chatRoom=chatRoom;
        this->commandQueue=commandQueue;
    }
