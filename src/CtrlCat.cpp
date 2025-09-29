#include "../include/ChatRoom.h"
#include "Users.h"
#include "Command.h"
#include "Iterator.h"
#include "CtrlCat.h"
#include <iostream>
#include <queue>

CtrlCat::CtrlCat(Users* user,string** chatHistory):ChatRoom(user,chatHistory)
{
    addUser.push(user);
}

void CtrlCat::registerUser(Users* user)
{
    std::queue<Users*> addUser;
    addUser.push(user);
}

void CtrlCat::sendMessage(std::string message,Users* user)
{
    std::cout<<"message sent from a user"<<std::endl;
    saveMesssage(message,user);
}

void CtrlCat::saveMesssage(std::string message,Users* user)
{
    if(chatHistory!=nullptr)
    {
        (*chatHistory)->append(message).append("\n");
    }

    while(user)//cant figure out how to find length of the uesr list/ queue i dont get it 
    {
        //user.receive(message); idk why its mad
    }
}

void CtrlCat::removeUser(Users user)
{
    while(!addUser.empty())//idk what to put here 
    {
        Users* us = addUser.front();
        //if(user == user)// idk
        {
            addUser.pop();
        }
    }
}

void CtrlCat::clone()
{

}

