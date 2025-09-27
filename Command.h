#ifndef CHANTROOM_H
#define CHATROOM_H
#include "Users.h"
#include "ChatRoom.h"
#include <string>
using namespace std;

class Command
{
    protected:
        ChatRoom *room; //SHOULD NOT BE POINTER BUT IDK HOW TO FIX FOR NOW .
        string message;
        Users fromUser;
    public:
        virtual void execute()=0;
};
#endif