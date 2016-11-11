//
//  Player.hpp
//

#pragma once

#include <stdio.h>
#include <string>

#include "Die.hpp"
#include "GameBoard.hpp"

using namespace std;

class Player {
public:
   // default constructor with no name
   Player() : playerName("no name"), position(0), die() {}
   
   // parametrized constructor with name
   // player's initial position is at the figurative square 0
   // TO DO: implement this constructor
   Player(string name) {
      playerName = name;
      position = 0;
   }
   
   // copy constructor
   // Player should make player's own copy of the die
   // TO DO: implement Player's copy constructor
   Player(const Player &p) {
      // TODO: implement this function properly
      playerName = p.getName();
      position = p.getPosition();
   }
   
   // assignment constructor
   // Player should make player's own copy of the die
   // TO DO: implement Player's assignment constructor
   Player& operator=(const Player& p){//SHOULD BE DONE
        if (this != &d) {
           position = p.getPosition();
           playerName = p.getName();
        }
      return *this;
   }
   
   
   // destructor
   ~Player() { }
   
   // getters and setters
   void setName(string name) { playerName = name; }
   void setPosition(int location) { position = location; }
   string getName() const { return playerName; }
   int getPosition() const { return position; }
    int getPostion() const { return position; }
   Die getDie() { return die; }
   
   // return player's new position after player rolls die
   // If the new position is outside of the board, player stays put
   // If not, player moves to the new square = player's postion + die's face value
   // TO DO: implement this function to move player to the new postion
   //        after player rolls die. Position must be inside the board
   int rollDieAndMove(){//SHOULD BE DONE
      die.roll();
      int roll = die.getFaceValue();  
      if (position + roll > 100)
         return position;
      return position + roll;
   }
private:
   string playerName;
   int position;
   Die die;
};
