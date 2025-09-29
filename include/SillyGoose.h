#ifndef SILLYGOOSE_H
#define SILLYGOOSE_H
#include "Users.h"

class SillyGoose: public Users{
    public:
        SillyGoose(std::string name ):Users(name){}
        ~SillyGoose(){}
};
#endif

