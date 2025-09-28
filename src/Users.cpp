#include "Users.h"
#include "ChatRoom.h"
#include "Command.h"
#include "LogMessageCommand.h"
#include "SendMessageCommand.h"
#include <iostream>

Users::Users(std::string& name, ChatRoom* chatRoom)
{
    this->name=name;
    this->chatRoom=chatRoom;
}

 void Users::send(std::string message, ChatRoom* room)
{
    addCommand(new SendMessageCommand(room, message, this));
    addCommand(new LogMessageCommand(room, message, this));

    executeAll();

}

void Users::addCommand(Command* command){
    commandQueue.push(command);
}

void Users::executeAll(){
    if (commandQueue.empty()) {
        std::cout << name << "'s command queue is empty." << std::endl;
        return;
    }

    while (!commandQueue.empty()) {
        Command* currentCommand = commandQueue.front();  // Get front command
        
        currentCommand->execute();  // Execute the command
        
        commandQueue.pop();  // Remove from queue
        
        // Optional: Delete the command object if you're managing memory
        // delete currentCommand;
    }
    
    std::cout << "All commands executed successfully." << std::endl;
}