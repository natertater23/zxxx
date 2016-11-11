//
//  ChutesAndLaddersGame.hpp
//

#pragma once

#include <stdio.h>
#include <string>

#include "ArrayQueue.h"
#include "Player.hpp"
#include "GameBoard.hpp"

using namespace std;

// TO DO - change the default value to the number of your team members
const int MIN_NUMBER_OF_PLAYERS = 2;

class ChutesAndLaddersGame {
public:
   // TODO: implement the constructor with all your team members
   // constructor with the default value of 2 minimim players
   ChutesAndLaddersGame(int nPlayers = MIN_NUMBER_OF_PLAYERS){
   Player one("Anthony");
   Player two("Justin");
   list.enqueue(one);
   list.enqueue(two);
   
   }
   
   // TODO: implement the destructor
   // destructor
   ~ChutesAndLaddersGame(){
   list.dequeue(one);                  
   list.dequeue(two);
   };
   
   // accessors
   // TO DO: implement the accessor to get the number Of Players
   int getNumberOfPlayers() {
      // TODO: implement this function properly
      return list.size();
      //throw std::logic_error("not implemented yet");
   }
   string getWinner() { return winner; }
   
   // TODO: implement this function properly
   // reset the game - (1) this will reset the position of each player to zero
   void resetGame(){
      one.setPosition(0);
      two.setPosition(0);
   }
   
   // TODO: implement this function properly
   // play the Chutes and Ladders game
   void playGame(){
      int newPos = list.front().rollDieAndMove();
      list.front().setPosition(gameBoard.checkChutesLadders(newPos));   
      list.enqueue(list.front());
      list.dequeue();
   }// implemented in /ccp
     
bool gameOn(){
   for(int i = 0; i < list.size(); i++)
   {
      if(list.get(i).getPosition() == 100)
         return false;
   }
   return true;
}
private:
   const int WINNING_POSITION = 100;
   
   string winner;       // the winner
   GameBoard gameBoard; // the game board
   ArrayQueue<Player> list;
   // TO DO: use ArrayQueue to store the players
};
