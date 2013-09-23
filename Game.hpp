#ifndef GAME_HPP_
#define GAME_HPP_
#include "Dice.hpp"
#include "Event.hpp"
/*
 *
 * Author: eric
 */

class Game
{
	public:
		Game();
		Game(Dice aD1,Dice aD2);
		Game(const Game& aGame);
		void handleEvent(Event e);
		void Play();
		virtual ~Game();
	private:
		void roll( Dice& d);
		void rollTwoDices( 	Dice& d1,
							Dice& d2);
		Dice d1;
		Dice d2;
};

#endif // GAME_HPP_ 
