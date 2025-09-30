/**
 * @file Iterator.h
 * @brief Declaration of the Iterator class and related functionality.
 * @defgroup IteratorModule Iterator Module
 * @brief Module for iterating through chatHistory
 */
#ifndef ITERATOR_H
#define ITERATOR_H
#include <iostream>
#include <string>
using namespace std;

/**
 * @class Iterator
 * @brief Represents a a pointer iterating through chatHistory
 * @ingroup Iterator
 */

class Iterator{ 
    private:
        /**
         * @brief Pointer to the chatRoom string
         */
        const std::string* str;
        /**
         * @brief current position in the string
         */
        size_t curr_pos;
    public:
        /**
         * @brief Iterator constructor
         * @param curr Current position in the chatHistory
         * @param end Last position in the chatHistory
         */
        Iterator(const std::string* s, size_t pos = 0);

        /**
         * @brief goes to the next pointer in the chatHistory
         * @virtual 
         */
        Iterator& operator++();
        /**
         * @brief returns the string at the current position in the pointer
         * @virtual 
         */
        string operator*();
        /**
         * @brief returns a boolean depending on whether the value in rhs matches the one in the current position
         * @param rhs The pointer we are using to make the comparision
         * @virtual 
         */
        bool operator==(const Iterator& rhs);
        /**
         * @brief returns a boolean depending on whether the value in rhs doesnt matches the one in the current position
         * @param rhs The pointer we are using to make the comparision
         * @virtual 
         */
        bool operator!=(const Iterator& rhs);

};

#endif