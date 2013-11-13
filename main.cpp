/**   @file main.cpp
      @author Harry Kran-Annexstein
      @date 10-17-2013
      
      Main for the bowling program, See http://goo.gl/rtclcO for program description
  */
#include <Game.h>

// Some suggested includes that you might need for this program.
#include <fstream>
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void printStats(ofstream &outFile, vector<Game*> &games) {
	int tgames=0, trolls=0, tpins=0, tstrikes=0;
	int hgame=0, lgame=0, avg=0, hcap = 0;
	for (unsigned i = 0; i < games.size(); i++) {
		tgames++;
		trolls += games[i]->getRolls();
		tpins += games[i]->getPins();
		tstrikes += games[i]->getStrikes();
		if (games[i]->getScore() > hgame) {
			hgame = games[i]->getScore();
		}
		if (games[i]->getScore() < lgame) {
			lgame = games[i]->getScore();
		}
		avg += games[i]->getScore();
		outFile << games[i]->getGame() << " :: "
				<< games[i]->getScore() << endl;
	}
	avg = avg/games.size();
	hcap = (210-avg) * 0.9;
	outFile << "---- Your Statistics ----" << endl
	<< "Total games played: " << tgames << endl
	<< "Total balls rolled: " << trolls << endl
	<< "Total pins knocked down: " << tpins << endl
	<< "Total strikes thrown: " << tstrikes << endl
	<< "Highest game score: " << hgame << endl
	<< "Lowest game score: " << lgame << endl
	<< "Average score: " << avg << endl
	<< "Handicap: " << hcap << endl;
}

// After this function ends, the caller owns the member pointed to in the games vector.
void readInGames(ifstream &inFile, ofstream &outFile, vector<Game*> &games) {
 // TODO(you): read the file, line by line, and create and process a game.
	string g;
	while(!inFile.eof()) {
		getline(inFile, g);
		games.push_back(new Game(g));
	}
}

int main(int argc, const char* argv[]) {
  if (argc != 3) {
    cout << "input filename is needed" << endl;
  }
  
  ifstream inFile;
  inFile.open(argv[1], ios::in);
  ofstream outFile;
  outFile.open(argv[2], ios::out);

  vector<Game*> games;
  readInGames(inFile, outFile, games);
  printStats(outFile, games);
  
  inFile.close();
  outFile.close();

  // Clean up dynamically allocated memory.
  for (unsigned int i = 0; i < games.size(); i++) {
    delete games[i];
    games[i] = NULL;
  }
  return 0;
}
