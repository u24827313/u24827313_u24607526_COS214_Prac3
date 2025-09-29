#include "../include/ChatRoom.h"
#include "Users.h"
#include "Command.h"
#include "Iterator.h"
#include "CtrlCat.h"
#include <iostream>
#include <queue>

CtrlCat::CtrlCat(std::queue<Users*> users,string* chatHistory):ChatRoom(users,chatHistory)
{
    name = "CtrlCat";
}

void CtrlCat::registerUser(Users* user)
{
    returnUsers().push(user);
}

void CtrlCat::sendMessage(std::string message,Users* user)
{
    std::cout<<"message sent from" << user->getName() << std::endl;
    std::queue<Users*> tempQueue = returnUsers();
    
    // Loop through all users in the queue
    while (!tempQueue.empty()) 
    {
        Users* currentUser = tempQueue.front();
        tempQueue.pop();
        
        // Skip the user who sent the message
        if (currentUser == user) 
        {
            continue;
        }
        
        // Send message to all other users
        currentUser->receive(message, user, this);
    }

}

void CtrlCat::saveMessage(std::string message,Users* user)
{
    if(returnChat()!=nullptr)

    {   
        std::string all = message + " sent by  " + user->getName();
        (returnChat())->append(message).append("\n");
    }
}

void CtrlCat::removeUser(Users* user)
{
    std::queue<Users*> tempQueue;
    
    while(!returnUsers().empty())
    {
        Users* us = returnUsers().front();
        returnUsers().pop();
        
        if(us != user)  // Keep users that are NOT the one to remove
        {
            tempQueue.push(us);
        }
    }
    
    // Restore the queue without the removed user
    while(!tempQueue.empty())
    {
        returnUsers().push(tempQueue.front());
        tempQueue.pop();
    }
}

ChatRoom* CtrlCat::clone()
{   
    std::queue<Users*> emptyUsers;
    std::string* newChatHistory = new std::string();
    
    return new CtrlCat(emptyUsers, newChatHistory);

}

std::string CtrlCat::getName(){
    return name;
}



