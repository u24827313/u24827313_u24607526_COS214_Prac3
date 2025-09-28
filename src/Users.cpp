#include "Users.h"
#include "ChatRoom.h"
#include <string>
using namespace std;


Users(std::string name, ChatRoom room, Command* commandQueue)
{
    this->name = name;
}