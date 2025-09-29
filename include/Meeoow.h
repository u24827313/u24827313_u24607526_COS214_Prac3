#ifndef MEOW_H
#define MEOW_H
#include "Users.h"

class Meeoow: public Users{
    public:
        Meeoow(std::string name):Users(name){}
        ~Meeoow(){}
};
#endif

