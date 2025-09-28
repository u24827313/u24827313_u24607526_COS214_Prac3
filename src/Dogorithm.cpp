#include "../include/ChatRoom.h"
#include "Users.h"
#include "Command.h"
#include "Iterator.h"
#include "Dogorithm.h"
#include <iostream>

Dogorithm::Dogorithm(Users* user,string** chatHistory):ChatRoom(user,chatHistory)
{
}

void Dogorithm::registerUser(Users* user)
{

}

void Dogorithm::sendMessage(std::string message,Users user)
{

}

void Dogorithm::saveMesssage(std::string message,Users user)
{

}

void Dogorithm::removeUser(Users user)
{

}

void Dogorithm::clone()
{
    
}