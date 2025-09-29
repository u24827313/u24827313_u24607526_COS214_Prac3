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
        void execute();
        GetChatLogCommand(ChatRoom* room, Users* fromUser, std::string message = "");
};
#endif