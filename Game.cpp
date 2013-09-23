/*
 *
 * Author: eric
 */

#include "Game.hpp"
#include "Dice.hpp"
#include <iostream>
#include "ConcreteEventHandler.hpp"
using std::cout;
Game::Game() :
				d1(),
				d2()
{
	srand( time( NULL));
	fillHandlers();

}
Game::Game( Dice aD1,
			Dice aD2) :
				d1( aD1),
				d2( aD2)
{
	srand( time( NULL));
	fillHandlers();
}
Game::Game( const Game& aGame) :
				d1( aGame.d1),
				d2( aGame.d2)
{
	srand( time( NULL));
	fillHandlers();
}
void Game::Play()
{
	int totalcount = 0;
	int count = 0;
	while (count < 6)
	{
		rollTwoDices( d1, d2);
		cout << "Gegooid totaal: " << (int)(d1 + d2).getValue() << std::endl;
		Event e { (d1 + d2).getValue() };
		sendToHandler( e);
		if ((d1 + d2) == 7)
		{
			++count;
		}
		++totalcount;
	}
	cout << "totaal keren gegooid: " << totalcount << std::endl;
}

void Game::sendToHandler( Event e)
{
	for (EventHandler* h : handlers)
	{
		if (h->handleEvent( e))
		{
			break;
		}
	}
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
void Game::fillHandlers()
{
	handlers.push_back( new EventHandler2);
	handlers.push_back( new EventHandler3);
	handlers.push_back( new EventHandler4);
	handlers.push_back( new EventHandler5);
	handlers.push_back( new EventHandler6);
	handlers.push_back( new EventHandler7);
	handlers.push_back( new EventHandler8);
	handlers.push_back( new EventHandler9);
	handlers.push_back( new EventHandler10);
	handlers.push_back( new EventHandler11);
	handlers.push_back( new EventHandler12);
}
Game::~Game()
{
	// TODO Auto-generated destructor stub

}

