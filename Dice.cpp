/*
 *
 * Author: eric
 */

#include "Dice.hpp"
#include <cstdlib>
#include <ctime>

Dice::Dice() :
				value( rand() % 6 + 1)
{

}
Dice::Dice( char aNumber) :
				value( aNumber)
{

}
Dice::Dice( const Dice& aDice) :
				value( aDice.value)
{

}
void Dice::setValue( char aNumber)
{
	value = aNumber;
}
unsigned char Dice::getValue() const
{
	return value;
}
std::string Dice::asString()
{
	return ""+value;
}
bool Dice::operator==( const Dice& aDice) const
{
	return aDice.value == value;
}
bool Dice::operator==( const char aNumber) const
{
	return aNumber == value;
}
void Dice::operator=( const Dice& aDice)
{
	value = aDice.value;
}
bool Dice::operator<( const Dice& aDice) const
{
	return value < aDice.value;
}
bool Dice::operator<( const char aNumber) const
{
	return value < aNumber;
}
Dice Dice::operator+(const Dice& aDice) const{
	return Dice(value+aDice.value);
}
Dice::~Dice()
{
	// TODO Auto-generated destructor stub

}

