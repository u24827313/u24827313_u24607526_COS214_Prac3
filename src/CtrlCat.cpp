#include "../include/ChatRoom.h"
#include "Users.h"
#include "Command.h"
#include "Iterator.h"
#include "CtrlCat.h"
#include <iostream>

CtrlCat::CtrlCat(Users* user,string** chatHistory):ChatRoom(user,chatHistory)
{
}

void CtrlCat::registerUser(Users* user)
{
    //user->chatRoom=this; what do you want form meeee
}

void CtrlCat::sendMessage(std::string message,Users user)
{
    user.send(message,this);
}

void CtrlCat::saveMesssage(std::string message,Users user)
{
    user.send(message,this);
}

void CtrlCat::removeUser(Users user)
{
    //idk im so tired
}

void CtrlCat::clone()
{

}

