#include "../include/SendMessageCommand.h"

SendMessageCommand::SendMessageCommand(ChatRoom* room, string message, Users* fromUser): Command(room, message, fromUser){

}

void SendMessageCommand::execute(){
    room->sendMessage(message, fromUser);
}