#ifndef SENDMESSAFECOMMAND_H
#define SENDMESSAFECOMMAND_H
#include "Command.h"
using namespace std;

class SendMessageCommand: public Command
{
    public:
        void execute();
};
#endif;