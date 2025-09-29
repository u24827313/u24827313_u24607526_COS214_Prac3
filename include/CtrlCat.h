/**
 * @file Ctrlcat.h
 * @brief Header file for the CtrlCat class
 * @defgroup CtrlCat CtrlCat Module
 * @brief Module for handling Mediator pattern implementation
 */


#ifndef CTRLCAT
#define CTRLCAT
#include "ChatRoom.h"

/**
 * @class CtrlCat
 * @brief Child class of ChatRoom 
 * @ingroup CtrlCat
 */
class CtrlCat: public ChatRoom
{   
    private:
        std::string name;
    public:

        CtrlCat(std::queue<Users*> users,string* chatHistory);
        /**
         * @brief Register a new user in the chat room
         * @param user Pointer to the Users object to register
         */
        void registerUser(Users*);

        /**
         * @brief Send a message to the chat room
         * @param message The message content to send
         * @param sender The user sending the message
         */
        void sendMessage(string,Users*);

        /**
         * @brief Save a message to chat history
         * @param message The message content to save
         * @param user The user associated with the message
         */
        void saveMessage(string,Users*);

        /**
         * @brief Remove a user from the chat room
         * @param user The user to remove
         */
        void removeUser(Users*);

        /**
         * @brief Create a clone of the chat room
         * @return ChatRoom* Pointer to the cloned chat room instance
         */
        ChatRoom* clone();

        /**
         * @brief Returns name of User
         * @return name of the current user Pointer
         */   
        std::string getName();

        /**
         * @brief Destructor
         */
        ~CtrlCat(){}

        void getChatLog();
        Iterator begin();
        Iterator end();

};
#endif