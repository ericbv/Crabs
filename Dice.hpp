#ifndef DICE_HPP_
#define DICE_HPP_
#include <string>
/*
 *
 * Author: eric
 */

class Dice
{
	public:
		/**
		 *
		 */
		Dice();
		Dice(char aNumber);
		Dice(const Dice& aDice);
		/**
		 * Throws the dice and sets a random number on the dice.
		 */
		void setValue(char aNumber);
		unsigned char getValue() const;
		std::string asString();
		bool operator==(const Dice& aDice) const;
		bool operator==(const char aNumber) const;
		void operator=(const Dice& aDice);
		bool operator<(const Dice& aDice) const;
		bool operator<(const char aNumber) const;
		Dice operator+(const Dice& aDice) const;
		virtual ~Dice();


	private:
		unsigned char value;
};

#endif // DICE_HPP_
