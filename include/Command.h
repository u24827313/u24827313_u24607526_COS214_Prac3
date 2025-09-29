/**
 * @file Command.h
 * @brief Header file for the Command abstract base class
 * @defgroup Command Command Module
 * @brief Module for handling command pattern implementation
 */

#ifndef COMMAND_H
#define COMMAND_H
class Users;
#include "ChatRoom.h"
#include <string>
using namespace std;

/**
 * @class Command
 * @brief Abstract base class representing the commands to be executed
 * 
 * This class defines the interface for commands to execute 
 * the commands sent out by User(Invoker)
 * 
 * @ingroup Command
 */

class Command
{
    protected:
        ChatRoom *room; //SHOULD NOT BE POINTER BUT IDK HOW TO FIX FOR NOW . ///< Pointer to the chatroom the command will be executed in
        string message; ///< string representing the message being sent/saved
        Users* fromUser; ///< User sending the message
    public:
        /**
         * @brief execute the command sent by the invoker
         * @virtual
         */
        virtual void execute()=0;
        Command(ChatRoom* room, string message, Users* fromUser):room(room),message(message),fromUser(fromUser){};
};
#endif
