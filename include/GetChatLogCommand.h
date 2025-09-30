#ifndef GETMESSAFECOMMAND_H
#define GETMESSAFECOMMAND_H
#include "Command.h"
using namespace std;


/**
 * @class GetChatLogCommand
 * @brief Child class of Command
 * @ingroup GetChatLogCommand
 */
class GetChatLogCommand: public Command
{
    /**
    * @brief Get Chat Log 
    */
    public:

        /**
         * @brief execute the command sent by the invoker
         * @virtual
         */
        void execute();
        /**
         * @brief Command constructor
         * @param room which room is the command coming from
         * @param message The message being sent by the user
         * @param fromUser which user is sending the message
         */
        GetChatLogCommand(ChatRoom* room, Users* fromUser, std::string message = "");
};
#endif