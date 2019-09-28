#ifndef	GAME_HPP
#define	GAME_HPP


#include "user.hpp"
#include "computer.hpp"
#include "winner.hpp"

class Game
{
public:
	Game(Player & player1, Player & player2);

	void displayScore();
	void gameStart();
	void gameEnd();
	void displayOptions();
	void runGame(Player & player1, Player & player2);
	Winner evaluateUserWin();

private:
	bool activeGame;
	Player & humanPlayer;
	Player & compPlayer;
};

#endif
