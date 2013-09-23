/*
 *
 * Author: eric
 */

#include "Event.hpp"
#include <iostream>
#include <sstream>

Event::Event( const unsigned char aValue):value(aValue)
{
}

Event::Event( const Event& e): value(e.value)
{
}

std::string Event::ToString() const
{
	std::ostringstream stream;
	stream <<(int)value;
	return stream.str();;
}

Event::~Event()
{
	// TODO Auto-generated destructor stub

}

const unsigned char& Event::getValue() const
{
	return value;
}

void Event::setValue( const unsigned char value)
{
	this->value = value;
}

bool Event::operator ==( Event aEvent)
{
	return value == aEvent.value;
}

bool Event::operator ==( unsigned char aValue)
{
	return value == aValue;
}
