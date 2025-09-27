#ifndef USER_H
#define USER_H
#include "ChatRoom.h"
#include "Command.h"
#include <string>
using namespace std;

class Users
{
    protected:
        ChatRoom* chatRoom;
        string name;
        Command* commandQueue;
};





#endif