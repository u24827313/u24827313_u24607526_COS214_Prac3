#ifndef DOGORITHM
#define DOGORITHM
#include "ChatRoom.h"

class Dogorithm : public ChatRoom
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