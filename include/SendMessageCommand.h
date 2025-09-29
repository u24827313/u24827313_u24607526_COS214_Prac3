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
        void execute();
        SendMessageCommand(ChatRoom* room, string message, Users* fromUser);
};
#endif