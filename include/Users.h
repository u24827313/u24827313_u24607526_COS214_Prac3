/**
 * @file User.h
 * @brief Declaration of the Users class and related functionality.
 * @defgroup UserModule User Module
 * @brief Module for managing chat users, message sending/receiving,
 *        and command queue execution.
 */
#ifndef USER_H
#define USER_H

#include "ChatRoom.h"
#include "Command.h"
#include <string>
using namespace std;

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
    string name;

    /**
     * @brief Queue of commands for deferred execution.
     */
    Command* commandQueue;

public:
    /**
     * @brief Sends a message to a specified chat room.
     *
     * @param message The message content to send.
     * @param room The chat room to which the message is sent.
     */
    void send(string message, ChatRoom room);

    /**
     * @brief Receives a message from another user in a chat room.
     *
     * @param message The message content received.
     * @param fromUser The user who sent the message.
     * @param room The chat room where the message was sent.
     */
    void receive(string message, Users fromUser, ChatRoom room);

    /**
     * @brief Adds a command to the user's command queue.
     *
     * @param command The command to add to the queue.
     */
    void addCommand(Command command);

    /**
     * @brief Executes all commands in the user's command queue.
     */
    void executeAll();
};

#endif // USER_H



