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

    public:
        void send(string message, ChatRoom room);
        void receive(string message,Users fromUser,ChatRoom room);
        void addCommand(Command command);
        void executeAll();
};





#endif