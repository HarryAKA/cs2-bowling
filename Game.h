/**   @file Game.h
      @author Harry Kran-Annexstein
      @date 10-17-2013
      
      Interface for the Game class, which represents a single bowling game.

      As a suggested design, you can take a whole game in the constructor as a single line of text
      -or-
      Use the default constructor to start a new game and accept a single roll at a time.
      
      */
#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <vector>
using namespace std;

class Game {
public:
	Game(string g);

	Game(const Game &that);

	virtual ~Game();

	string getGame();

	int getRolls();

	int getPins();

	int getStrikes();

	int getScore();

	int getLastFrame();

private:
	void setRolls();
	void setPins();
	void setStrikes();
	void setScore();
	void setVals();
	void setLastFrame();

	string game;
	vector<int> vals;
	int rolls;
	int pins;
	int strikes;
	int score;
	int lastframe;
};

#endif
