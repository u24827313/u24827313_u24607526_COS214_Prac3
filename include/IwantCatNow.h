#ifndef WANTCATNOW_H
#define WANTCATNOW_H
#include "Users.h"

class IwantCatNow: public Users{
    public:
        IwantCatNow(std::string name ):Users(name){}
        ~IwantCatNow(){}
};
#endif

