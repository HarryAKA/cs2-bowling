/**   @file GameTest.h
      @author Harry Kran-Annexstein
      @date 10-17-2013
      
      Unit tests for the Game class
  */

#ifndef GAME_TEST_H
#define GAME_TEST_H

#include <Game.h>

#include <iostream>
#include <cxxtest/TestSuite.h>

using namespace std;

class GameTest : public CxxTest::TestSuite {
public:
  void testConstructorGame() {
  	string g = "X 5 4 2 / X 0 / 0 5 X 5 / 6 2 X 0 1";
  	Game game(g);
  	TS_ASSERT_EQUALS(game.getGame(), g);
  }
  void testConstructorRolls() {
  	string g = "X 5 4 2 / X 0 / 0 5 X 5 / 6 2 X 0 1";
  	Game game(g);
  	TS_ASSERT_LESS_THAN(0, game.getRolls());
  }
  void testConstructorLastFrame() {
  	string g = "X 5 4 2 / X 0 / 0 5 X 5 / 6 2 X 0 1";
  	Game game(g);
  	TS_ASSERT_LESS_THAN(0, game.getLastFrame());
  }
  void testConstructorPins() {
  	string g = "X 5 4 2 / X 0 / 0 5 X 5 / 6 2 X 0 1";
  	Game game(g);
  	TS_ASSERT_LESS_THAN(0, game.getPins());
  }
  void testConstructorStrikes() {
  	string g = "X 5 4 2 / X 0 / 0 5 X 5 / 6 2 X 0 1";
  	Game game(g);
  	TS_ASSERT_LESS_THAN(0, game.getStrikes());
  }
  void testConstructorScore() {
  	string g = "X 5 4 2 / X 0 / 0 5 X 5 / 6 2 X 0 1";
  	Game game(g);
  	TS_ASSERT_LESS_THAN(0, game.getScore());
  }
  void testSetRolls() {
  	string g = "X 5 4 2 / X 0 / 0 5 X 5 / 6 2 X 0 1";
  	Game game(g);
  	TS_ASSERT_EQUALS(game.getRolls(), 18);
  }
  void testSetPins() {
  	string g = "X 5 4 2 / X 0 / 0 5 X 5 / 6 2 X 0 1";
  	Game game(g);
  	TS_ASSERT_EQUALS(game.getPins(), 93);
  }
  void testSetStrikes() {
  	string g = "X 5 4 2 / X 0 / 0 5 X 5 / 6 2 X 0 1";
  	Game game(g);
  	TS_ASSERT_EQUALS(game.getStrikes(), 4);
  }
  void testSetScore() {
  	string g = "X 5 4 2 / X 0 / 0 5 X 5 / 6 2 X 0 1";
  	Game game(g);
  	TS_ASSERT_EQUALS(game.getScore(), 138);
  }
  void testSetLastFrame() {
  	string g = "0 1 2 4 9 0 1 8 4 / 5 / X X 1 0 4 / 1";
  	Game game(g);
  	TS_ASSERT_EQUALS(game.getLastFrame(), 3);
  }

};

#endif
