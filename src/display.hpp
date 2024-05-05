#ifndef DISPLAY_HPP
#define DISPLAY_HPP

#include <iostream>

#include "morse_code.hpp"

using std::string;

namespace display_format
{
	enum
	{
		numerical = 0,
		morse_code = 1
	};
}

class Display : public MorseCode
{
private:
	unsigned int displayFormat;

public:
	Display(unsigned int format);
	unsigned int getDisplayFormat() { return displayFormat; }
	void displayTime(unsigned int hrs, unsigned int mins, unsigned int secs);
};

inline Display::Display(unsigned int format=display_format::numerical ) 
	: displayFormat(format)
{	
}

#endif DISPLAY_HPP
