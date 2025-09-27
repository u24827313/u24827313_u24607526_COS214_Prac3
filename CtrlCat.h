#ifndef DOGORITHM
#define DOGORITHM
#include "ChatRoom.h"

class CtrlCat: public ChatRoom
{
    private:    
        Users* users;
        string* chatHistory;
    public:
        void registerUser(Users*);
        void sendMessage(string,Users);
        void saveMesssage(string,Users);
        void removeUser(Users);
        void clone();
        
};
#endif