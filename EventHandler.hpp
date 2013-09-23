#ifndef EVENTHANDLER_HPP_
#define EVENTHANDLER_HPP_

/*
 *
 * Author: eric
 */
#include "Event.hpp"
class EventHandler
{
	public:
		EventHandler();
		virtual bool handleEvent(const Event& e) = 0;
		virtual ~EventHandler();
};

#endif // EVENTHANDLER_HPP_ 
