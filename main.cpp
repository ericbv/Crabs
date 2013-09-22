#include <iostream>
#include "Game.hpp"
using std::cout;

void roll( Dice& d);
void rollTwoDices( 	Dice& d1,
					Dice& d2);

int main( 	int argc,
			char **argv)
{
	Game g;
	g.Play();
	return 0;
}

