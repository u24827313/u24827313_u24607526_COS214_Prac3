/**
 * @file Users.h
 * @brief Header file for the Declaration of the Users class and related functionality.
 * @defgroup UserModule User Module
 * @brief Module for managing chat users, message sending/receiving,
 *        and command queue execution.
 */
#ifndef USERS_H
#define USERS_H

class ChatRoom;
class Command;
#include <queue>
#include <string>

/**
 * @class Users
 * @brief Represents a user participating in a chat room.
 *
 * The Users class allows a user to send and receive messages
 * within a ChatRoom and manage a queue of commands that can
 * be executed later.
 */
class Users
{
protected:
    /**
     * @brief Pointer to the chat room this user is associated with.
     */
    ChatRoom* chatRoom;

    /**
     * @brief The name of the user.
     */
    std::string name;

    /**
     * @brief Queue of commands for deferred execution.
     */
    std::queue<Command*> commandQueue;

public:
    /**
     * @brief Sends a message to a specified chat room.
     *
     * @param message The message content to send.
     * @param room The chat room to which the message is sent.
     */
    void send(std::string message, ChatRoom* room);

    Users(std::string& name,ChatRoom* room);
    
    ~Users(){
        delete chatRoom;
    }
    /**
     * @brief Receives a message from another user in a chat room.
     *
     * @param message The message content received.
     * @param fromUser The user who sent the message.
     * @param room The chat room where the message was sent.
     */
    void receive(std::string message, Users* fromUser, ChatRoom* room);

    /**
     * @brief Adds a command to the user's command queue.
     *
     * @param command The command to add to the queue.
     */
    void addCommand(Command* command);

    /**
     * @brief Executes all commands in the user's command queue.
     */
    void executeAll();

    std::string getName(){
        return name;
    }
};

#endif // USER_H



