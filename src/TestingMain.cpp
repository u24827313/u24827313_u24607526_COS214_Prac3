#include "../include/Users.h"
#include "../include/ChatRoom.h"
#include "../include/CtrlCat.h"
#include "../include/Dogorithm.h"
#include "../include/SillyGoose.h"
#include "../include/Meeoow.h"
#include "../include/IwantCatNow.h"

int main(){
    std::queue<Users*> users;
    std::string* chatHistory1 = new std::string();
    std::string* chatHistory2 = new std::string();

    ChatRoom* catRoom = new CtrlCat(users, chatHistory1);
    ChatRoom* dogRoom = new Dogorithm(users, chatHistory2);
    ChatRoom* copycat = catRoom->clone();

    Users* user1 = new SillyGoose("user1");

    Users* user2 = new Meeoow("user2");
    Users* user3 = new IwantCatNow("user3");

    std::cout << "Registering users" << std::endl;
    catRoom->registerUser(user1);
    catRoom->registerUser(user2);
    catRoom->registerUser(user3);
    dogRoom->registerUser(user1);
    dogRoom->registerUser(user2);
    dogRoom->registerUser(user1);


    std::cout << "\nUsers sending a message" << std::endl;
    user1->send("Hi There!", catRoom);
    user2->send("Hi User1", catRoom);
    user2->send("Hi There!", dogRoom);
    user3->send("Hi There!", dogRoom);

    std::cout << "\n Looking through chatLogs:" << std::endl;
    user1->getChatLog(catRoom);
    std::cout << "\n" <<std::endl;
    user2->getChatLog(dogRoom);

    std::cout << "\nRemoving a User" << std::endl;
    dogRoom->removeUser(user1);
    dogRoom->removeUser(user3);
    catRoom->removeUser(user1);

    
    delete user1;
    delete user2;
    delete user3;



    return 0;
}