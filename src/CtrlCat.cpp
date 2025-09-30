#include "../include/ChatRoom.h"
#include "../include/Users.h"
#include "../include/Command.h"
#include "../include/Iterator.h"
#include "../include/CtrlCat.h"
#include <iostream>
#include <queue>

CtrlCat::CtrlCat(std::queue<Users*> users,string* chatHistory):ChatRoom(users,chatHistory)
{
    name = "CtrlCat";
}

void CtrlCat::registerUser(Users* user)
{   
    bool isRegistered = false;
    std::queue<Users*> tempQueue1 = addUser;  // make a copy for searching
    
    while (!tempQueue1.empty()) {
        if (tempQueue1.front() == user) {
            isRegistered = true;
            break;
        }
        tempQueue1.pop();
    }

    if (isRegistered) {
        std::cout << user->getName() << " is already registered!" << std::endl;
        return;
    }

    addUser.push(user);
    user->addChatRoom(this);
    std::cout << "You have successfully been added  the chatRoom!" << std::endl;
}

void CtrlCat::sendMessage(std::string message,Users* user)
{   
    std::queue<Users*> tempQueue = addUser;
    
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
        std::string all = message + " :sent by  " + user->getName();
        (returnChat())->append(all).append("\n");
    }
}

void CtrlCat::removeUser(Users* user)
{
    bool isRegistered = false;
    std::queue<Users*> tempQueue1 = addUser;  // make a copy for searching
    
    while (!tempQueue1.empty()) {
        if (tempQueue1.front() == user) {
            isRegistered = true;
            break;
        }
        tempQueue1.pop();
    }

    if (!isRegistered) {
        std::cout << user->getName() << " is not part of this chat room and cannot send messages!" << std::endl;
        return;
    }

    std::queue<Users*> tempQueue;
    
    while(!addUser.empty())
    {
        Users* us = addUser.front();
        addUser.pop();
        
        if(us != user)  // Keep users that are NOT the one to remove
        {
            tempQueue.push(us);
        }
    }
    
    // Restore the queue without the removed user
    while(!tempQueue.empty())
    {
        addUser.push(tempQueue.front());
        tempQueue.pop();
    }
    std::cout << "You have successfully left the chat!" << std::endl;
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

Iterator CtrlCat::begin() {
    return Iterator(returnChat(), 0);
}

Iterator CtrlCat::end() {
    return Iterator(returnChat(), returnChat()->length());
}

void CtrlCat::getChatLog(){
    std::cout << "The entire Chat Log for the " << name << " chatRoom" << std::endl;
    for (Iterator it = begin(); it != end(); ++it) {
        std::cout << *it << std::endl;
    }
}



