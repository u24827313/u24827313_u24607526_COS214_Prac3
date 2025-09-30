/**
 * @file LogMessageCommand.h
 * @brief Header file for the LogMessage class
 * @defgroup LogMessage LogMessage Module
 * @brief Module for handling Command pattern implementation
 */

#ifndef LOGMESSAGECOMMAND_H
#define LOGMESSAGECOMMAND_H
#include "Command.h"
using namespace std;

/**
 * @class LogMessageCommand
 * @brief Child class of Command
 * @ingroup LogMessageCommand
 */
class LogMessageCommand: public Command
{
    public:
        /**
         * @brief Log the message ent by the User(Invoker)
         */
        void execute();
        /**
         * @brief LogMessageCommand constructor
         * @param room which room is the command coming from
         * @param message The message being sent by the user
         * @param fromUser which user is sending the message
         */
        LogMessageCommand(ChatRoom* room, string message, Users* fromUser);
        /**
         * @brief Deconstructor
         * @virtual
         */
        ~LogMessageCommand();
};

#endif