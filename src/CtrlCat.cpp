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
    
}

void CtrlCat::sendMessage(std::string message,Users user)
{

}

void CtrlCat::saveMesssage(std::string message,Users user)
{

}

void CtrlCat::removeUser(Users user)
{

}

void CtrlCat::clone()
{

}

