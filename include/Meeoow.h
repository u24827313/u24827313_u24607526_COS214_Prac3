/**
 * @file Meeoow.h
 * @brief Header file for the Meeoow class
 * @defgroup MeeoowwModule Users Module
 * @brief Module for creating a participant user to demonstrate the Users class
 */


#ifndef MEOW_H
#define MEOW_H
#include "Users.h"


/**
 * @class Meeoow
 * @brief is a user participating in a chat room.
 *
 * meeoow class used to demonstrate how the user works practically
 */

class Meeoow: public Users{
    public:
        /**
         * @brief Meeoow Constructor
         * @param name string of the the user's name
         */
        Meeoow(std::string name):Users(name){}
        /**
         * @brief Meeoow Deconstructor
         */
        ~Meeoow(){}
};
#endif

