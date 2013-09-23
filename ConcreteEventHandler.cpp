/*
 *
 * Author: eric
 */

#include "ConcreteEventHandler.hpp"
#include <iostream>

bool EventHandler2::handleEvent( const Event& e)
{
	if (e.getValue() == 2)
	{
		std::cout << e.ToString() << std::endl;
		return true;
	}
	return false;
}

bool EventHandler3::handleEvent( const Event& e)
{
	if (e.getValue() == 3)
	{
		std::cout << e.ToString() << std::endl;
		return true;
	}
	return false;
}

bool EventHandler4::handleEvent( const Event& e)
{
	if (e.getValue() == 4)
	{
		std::cout << e.ToString() << std::endl;
		return true;
	}
	return false;
}

bool EventHandler5::handleEvent( const Event& e)
{
	if (e.getValue() == 5)
	{
		std::cout << e.ToString() << std::endl;
		return true;
	}
	return false;
}

bool EventHandler6::handleEvent( const Event& e)
{
	if (e.getValue() == 6)
	{
		std::cout << e.ToString() << std::endl;
		return true;
	}
	return false;
}

bool EventHandler7::handleEvent( const Event& e)
{
	if (e.getValue() == 7)
	{
		std::cout << e.ToString() << std::endl;
		return true;
	}
	return false;
}

bool EventHandler8::handleEvent( const Event& e)
{
	if (e.getValue() == 8)
	{
		std::cout << e.ToString() << std::endl;
		return true;
	}
	return false;
}

bool EventHandler9::handleEvent( const Event& e)
{
	if (e.getValue() == 9)
	{
		std::cout << e.ToString() << std::endl;
		return true;
	}
	return false;
}

bool EventHandler10::handleEvent( const Event& e)
{
	if (e.getValue() == 10)
	{
		std::cout << e.ToString() << std::endl;
		return true;
	}
	return false;
}

bool EventHandler11::handleEvent( const Event& e)
{
	if (e.getValue() == 11)
	{
		std::cout << e.ToString() << std::endl;
		return true;
	}
	return false;
}

bool EventHandler12::handleEvent( const Event& e)
{
	if (e.getValue() == 12)
	{
		std::cout << e.ToString() << std::endl;
		return true;
	}
	return false;
}
