#ifndef SENDMESSAFECOMMAND_H
#define SENDMESSAFECOMMAND_H
#include "Command.h"
using namespace std;


/**
 * @class SendMessageCommand
 * @brief Child class of Command
 * @ingroup SendMessageCommand
 */
class SendMessageCommand: public Command
{
    /**
    * @brief Log the message ent by the User(Invoker)
    */
    public:

        /**
         * @brief Receives a message from another user in a chat room and executes the command.
        */
        void execute();
        /**
         * @brief SendMessageCommand constructor
         * @param room which room is the command coming from
         * @param message The message being sent by the user
         * @param fromUser which user is sending the message
         */
        SendMessageCommand(ChatRoom* room, string message, Users* fromUser);
};
#endif