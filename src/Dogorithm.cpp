#include "../include/ChatRoom.h"
#include "Users.h"
#include "Command.h"
#include "Iterator.h"
#include "Dogorithm.h"
#include <iostream>
#include <queue>

Dogorithm::Dogorithm(std::queue<Users*> users,string* chatHistory):ChatRoom(users,chatHistory)
{
    name = "Dogorithm";   
}

void Dogorithm::registerUser(Users* user)
{
    returnUsers().push(user);
}

void Dogorithm::sendMessage(std::string message,Users* user)
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

void Dogorithm::saveMessage(std::string message,Users* user)
{
    if(returnChat()!=nullptr)

    {   
        std::string all = message + " sent by  " + user->getName();
        (returnChat())->append(message).append("\n");
    }
}

void Dogorithm::removeUser(Users* user)
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

ChatRoom* Dogorithm::clone()
{   
    std::queue<Users*> emptyUsers;
    std::string* chatHistoryPtr = new std::string();  // Create pointer
    
    
    return new Dogorithm(emptyUsers, chatHistoryPtr);

}

std::string Dogorithm::getName(){
    return name;
}



