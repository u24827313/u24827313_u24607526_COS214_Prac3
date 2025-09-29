#include "../include/Iterator.h"

Iterator::Iterator(const std::string* s, size_t pos = 0) : str(s), curr_pos(pos) {}

std::string Iterator::operator*(){
    if (curr_pos >= str->length()) return "";
        
    size_t endPos = str->find('\n', curr_pos);
    if (endPos == std::string::npos) {
        endPos = str->length();
    }
    return str->substr(curr_pos, endPos - curr_pos);
}


Iterator& Iterator::operator++(){
    if (curr_pos < str->length()) {
            curr_pos = str->find('\n', curr_pos);
            if (curr_pos == std::string::npos) {
                curr_pos = str->length();  // Reached end
            } else {
                curr_pos++;  // Move past the newline character
            }
    }
    return *this;
}

bool Iterator::operator==(const Iterator& rhs){
    return curr_pos == rhs.curr_pos && str == rhs.str;
}

bool Iterator::operator!=(const Iterator& rhs){
    return !(*this == rhs);
}