/**   @file Game.cpp
      @author Harry Kran-Annexstein
      @date 10-17-2013
      
      Implementation of the bowling Game class.
  */
#include <Game.h>
#include <iostream>

using namespace std;

Game::Game(string g) {
	game = g;
	setVals();
	setRolls();
	setPins();
	setLastFrame();
	setStrikes();
	setScore();
}

Game::Game(const Game &that) {
	game = that.game;
	rolls = that.rolls;
	pins = that.pins;
	strikes = that.strikes;
	score = that.score;
	lastframe =that.lastframe;
}

Game::~Game() {
}

string Game::getGame() {
	return game;
}

void Game::setVals() {
	for (unsigned i = 0; i < game.size(); i++) {
		if (game[i] == ' ') {
			continue;
		}else if (game[i] == '0'){
			vals.push_back(0);
		}else if (game[i] == '1') {
			vals.push_back(1);
		}else if (game[i] == '2') {
			vals.push_back(2);
		}else if (game[i] == '3') {
			vals.push_back(3);
		}else if (game[i] == '4') {
			vals.push_back(4);
		}else if (game[i] == '5') {
			vals.push_back(5);
		}else if (game[i] == '6') {
			vals.push_back(6);
		}else if (game[i] == '7') {
			vals.push_back(7);
		}else if (game[i] == '8') {
			vals.push_back(8);
		}else if (game[i] == '9') {
			vals.push_back(9);
		}else if (game[i] == '/') {
			vals.push_back(10);
		}else if (game[i] == 'X') {
			vals.push_back(11);
		}else {
			continue;
		}
	}
}

void Game::setRolls() {
	rolls = vals.size();
}

int Game::getRolls() {
	return rolls;
}

void Game::setPins() {
	int pcount = 0;
	for (unsigned i = 0; i < vals.size(); i++) {
		if (vals[i] == 11) {
			pcount += 10;
		}
		else if (vals[i] == 10) {
			pcount += vals[i];
			pcount -= vals[i-1];
		}
		else {
			pcount += vals[i];
		}
	}
	pins = pcount;
}

int Game::getPins() {
	return pins;
}

void Game::setStrikes() {
	int stcount = 0;
	for (unsigned i = 0; i < vals.size(); i++) {
		if (vals[i] == 11) {
			stcount++;
		}else {
			continue;
		}
	}
	strikes = stcount;
}

int Game::getStrikes() {
	return strikes;
}

void Game::setLastFrame() {
	int frames = 0;
	int rcount = 0;
	int iter = 0;
	for (unsigned i = 0; frames < 9; i++) {
		if (vals[i] == 11 || rcount == 1) {
			frames++;
			iter++;
			rcount = 0;
	  }else {
	  	iter++;
		  rcount++;
		 }
	}
	lastframe = vals.size() - iter;
}

int Game::getLastFrame() {
	return lastframe;
}

void Game::setScore() {
	int scount = 0;
	for (unsigned i = 0; i < vals.size(); i++) {
		if (vals[i] == 10) {
			scount -= vals[i-1];
		}else if(vals[i] == 11 && vals[i+2] == 10) {
			scount -= vals[i+1];
		}
		if (i + lastframe < vals.size()) {
			if (vals[i] == 10) {
				scount += vals[i] + vals[i+1];
				if (vals[i+1] == 11) {
					scount--;
				}
			}else if (vals[i] == 11) {
				scount += 10 + vals[i+1] + vals[i+2];
				if (vals[i+1] == 11) {
					scount--;
				}
				if (vals[i+2] == 11) {
					scount--;
				}
			}else {
				scount += vals[i];
			}
		}
		else if (vals[i] == 11) {
			scount += 10;
		}else {
			scount += vals[i];
		}
	}
	score = scount;
}

int Game::getScore() {
	return score;
}
