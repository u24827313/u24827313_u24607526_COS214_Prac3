/**
 * @file ChatRoom.h
 * @brief Header file for the ChatRoom abstract base class
 * @defgroup ChatRoom ChatRoom Module
 * @brief Module for handling chat room functionality
 */

#ifndef CHATROOM_H
#define CHATROOM_H

class Users;
#include <string>
#include "Iterator.h"
#include <queue>
using namespace std;

/**
 * @class ChatRoom
 * @brief Abstract base class representing a chat room interface
 * 
 * This class defines the interface for chat room operations including
 * user registration, message handling, and user management.
 * 
 * @ingroup ChatRoom
 */
class ChatRoom
{
protected:
    std::queue<Users*> addUser; ///< Pointer to users collection
private:              
    std::string* chatHistory;   ///< Pointer to chat history storage
    
public:

    /**
     * @brief Constructor for the ChatRoom class
     * @param users queue of all the users of the particular chatRoom
     * @param cHistory string pointer of all the messages in the 
     * @virtual
     */
    ChatRoom(std::queue<Users*> users ,string* cHistory):addUser(users),chatHistory(cHistory){
        
    };

    virtual ~ChatRoom(){
        delete chatHistory;
    }
    /**
     * @brief Register a new user in the chat room
     * @param user Pointer to the Users object to register
     * @virtual
     */
    virtual void registerUser(Users* user) = 0;
    
    /**
     * @brief Send a message to the chat room
     * @param message The message content to send
     * @param sender The user sending the message
     * @virtual
     */
    virtual void sendMessage(std::string message, Users* sender) = 0;
    
    /**
     * @brief Save a message to chat history
     * @param message The message content to save
     * @param user The user associated with the message
     * @virtual
     */
    virtual void saveMessage(std::string message, Users* user) = 0;
    
    /**
     * @brief Remove a user from the chat room
     * @param user The user to remove
     * @virtual
     */
    virtual void removeUser(Users* user) = 0;
    
    /**
     * @brief Create a clone of the chat room
     * @return ChatRoom* Pointer to the cloned chat room instance
     * @virtual
     */
    virtual ChatRoom* clone() = 0;

    virtual void getChatLog() = 0;


    std::queue<Users*> returnUsers(){
        return addUser;
    }

    std::string* returnChat(){
        return chatHistory;
    }

    virtual std::string getName() = 0;
    
};
#endif