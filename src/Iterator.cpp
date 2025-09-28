#include "../include/Iterator.h"

Iterator::Iterator(string** current, string** end){
    this->current = current;
    this->end = end;
}

std::string& Iterator::operator*(){
    if (current == end || *current == nullptr) {
            throw std::out_of_range("Iterator out of range");
    }
    return **current;
}

Iterator& Iterator::operator++(){
    Iterator temp = *this;
    ++(*this);
    return temp;
}

bool Iterator::operator==(const Iterator& rhs){
    return current == rhs.current;
}

bool Iterator::operator!=(const Iterator& rhs){
    return current != rhs.current;
}