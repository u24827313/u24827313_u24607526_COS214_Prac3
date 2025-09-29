/**
 * @file Dogorithm.h
 * @brief Header file for the Dogorithm class
 * @defgroup Dogorithm Dogorithm Module
 * @brief Module for handling Mediator pattern implementation
 */

#ifndef DOGORITHM
#define DOGORITHM
#include "ChatRoom.h"

/**
 * @class Dogorithm
 * @brief Child class of ChatRoom
 * @ingroup Dogorithm
 */


class Dogorithm : public ChatRoom
{
    private:
        std::string name;

    public:

        Dogorithm(std::queue<Users*> users, string* chatHistory);
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
        ~Dogorithm(){}
};
#endif