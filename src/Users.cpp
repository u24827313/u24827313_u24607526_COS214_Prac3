#include "../include/Users.h"
#include "../include/ChatRoom.h"
#include "../include/Command.h"
#include "../include/LogMessageCommand.h"
#include "../include/SendMessageCommand.h"
#include "../include/GetChatLogCommand.h"
#include <iostream>

Users::Users(std::string& name)
{
    this->name=name;
    this->chatRoom=chatRoom;
}

 void Users::send(std::string message, ChatRoom* room)
{   
    bool isRegistered = false;
    std::queue<ChatRoom*> tempQueue1 = chatRoom;  // make a copy for searching
    
    while (!tempQueue1.empty()) {
        if (tempQueue1.front() == room) {
            isRegistered = true;
            break;
        }
        tempQueue1.pop();
    }

    if (!isRegistered) {
        std::cout << getName() << " is not part of this chat room and cannot send messages!" << std::endl;
        return;
    }
    
    addCommand(new SendMessageCommand(room, message, this));
    addCommand(new LogMessageCommand(room, message, this));

    executeAll();

}

void Users::addCommand(Command* command)
{
    commandQueue.push(command);
}

void Users::executeAll()
{
    if (commandQueue.empty()) 
    {
        std::cout << name << "'s command queue is empty." << std::endl;
        return;
    }

    while (!commandQueue.empty()) 
    {
        Command* currentCommand = commandQueue.front();  // Get front command
        
        currentCommand->execute();  // Execute the command
        
        commandQueue.pop();  // Remove from queue
        
        delete currentCommand;
    }
    
    std::cout << "All commands executed successfully." << std::endl;
}

void Users::receive(std::string message, Users* fromUser, ChatRoom* room)
{
    
    std::cout<< name << " has received a new message from "<< fromUser->getName() << " from the " << room->getName() << " chatRoom!" << std::endl;
}

void Users::getChatLog(ChatRoom* room){
    addCommand(new GetChatLogCommand(room, this));
    executeAll();
}
Users::~Users(){
   
}