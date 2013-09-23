/*
 *
 * Author: eric
 */

#include "Game.hpp"
#include "Dice.hpp"
#include <iostream>
using std::cout;
Game::Game() :
				d1(),
				d2()
{
	srand( time( NULL));

}
Game::Game( Dice aD1,
			Dice aD2) :
				d1( aD1),
				d2( aD2)
{
	srand( time( NULL));
}
Game::Game( const Game& aGame) :
				d1( aGame.d1),
				d2( aGame.d2)
{
	srand( time( NULL));
}
void Game::Play()
{
	int totalcount = 0;
	int count = 0;
	while (count < 6)
	{
		rollTwoDices( d1, d2);
		cout<<"Gegooid totaal: "<<(int)(d1 + d2).getValue()<<std::endl;
		Event e{(d1 + d2).getValue()};
		handleEvent(e);
		if ((d1 + d2) == 7)
		{
			++count;
		}
		++totalcount;
	}
	cout<<"totaal keren gegooid: " << totalcount <<std::endl;
}

void Game::handleEvent( Event e)
{
	cout <<"[Event] :"<< e.ToString() << std::endl;
}

void Game::roll( Dice& d)
{
	d.setValue( rand() % 6 + 1);
}


void Game::rollTwoDices( 	Dice& d1,
							Dice& d2)
{
	roll( d1);
	roll( d2);
}

Game::~Game()
{
	// TODO Auto-generated destructor stub

}

