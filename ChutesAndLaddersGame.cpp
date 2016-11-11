//
//  ChutesAndLaddersGame.cpp
//

#include <iostream>
#include <string>

#include "ChutesAndLaddersGame.hpp"
#include "GameBoard.hpp"
#include "Player.hpp"

using namespace std;



// TO DO: implement this function properly
// Play the chutes and ladders until a player reaches the winning square 100
//    - Each player takes turn to roll the die and moves to the new square by invoking rollDieAndMove.
//         If the new square is outside of the board, the player stays put
//    - Player's new position is checked against the game board's checkChutesLadders
//    - checkChutesLadders returns a different square if player lands on a chute or a ladder
//    - Player's position is then set to the new position as indicated by checkChutesLadders
//          If player lands on a chute or a ladder, player slides down or climbs up
//    - If player lands on the winning square 100, game is over
//    - playGame returns after congratulating and printing the winner's name
void ChutesAndLaddersGame::playGame() {
  // ChutesAndLaddersGame game = new ChutesAndLaddersGame(2);
  
   // TODO: implement this function properly
   //throw std::logic_error("not implemented yet");
   while(gameOn()){//implement gameOn to check if any player is on 100 
      int newPos = list.front().rollDieAndMove();
      list.front().setPosition(gameBoard.checkChutesLadders(newPos));   
      list.enqueue(list.front());
      list.dequeue();
   //players roll
   //players moved
   }
   winner = getWinner();//implement findWinner
  cout<< winner << " Won the Game!"; 
}

