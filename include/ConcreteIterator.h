#ifndef CONCRTITERATOR_H
#define CONCRTITERATOR_H

#include "Iterator.h"

/**
 * @class ConcreteIterator
 * @brief Hols the actual implementation for the Iterator
 * @ingroup ConcreteIterator
 */

class ConcreteIterator: public Iterator{ 
    
    public:
        /**
         * @brief ConcreteIterator constructor
         */
        ConcreteIterator();

        /**
         * @brief goes to the next pointer in the chatHistory
         * 
         */
        ConcreteIterator& operator++();

        /**
         * @brief returns the string at the current position in the pointer
         */
        string* operator*();

        /**
         * @brief returns a boolean depending on whether the value in rhs matches the one in the current position
         * @param rhs The pointer we are using to make the comparision
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