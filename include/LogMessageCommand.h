#ifndef LOGMESSAFECOMMAND_H
#define LOGMESSAFECOMMAND_H
#include "Command.h"
using namespace std;

class LogMessageCommand: public Command
{
    public:
        void execute();
};

#endif