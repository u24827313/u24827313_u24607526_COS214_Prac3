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
        LogMessageCommand(ChatRoom* room, string message, Users* fromUser);
};

#endif