#ifndef CHANTROOM_H
#define CHATROOM_H
#include "Users.h"
#include <string>
using namespace std;


class ChatRoom
{
    private:    
        Users* users;
        string* chatHistory;

    public:
        virtual void registerUser(Users*) = 0;
        virtual void sendMessage(string,Users) = 0;
        virtual void saveMesssage(string,Users) = 0;
        virtual void removeUser(Users) = 0;

};
#endif
