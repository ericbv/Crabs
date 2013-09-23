#ifndef EVENT_HPP_
#define EVENT_HPP_

#include <string>
/*
 *
 * Author: eric
 */

class Event
{
	public:
		Event(const unsigned char aValue);
		Event(const Event& e);
		std::string ToString() const;
		virtual ~Event();
		const unsigned char& getValue() const;
		void setValue( const unsigned char value);

		bool operator==(Event aEvent);
		bool operator==(unsigned char aValue);

	private:
		unsigned char value;
};


#endif // EVENT_HPP_ 
