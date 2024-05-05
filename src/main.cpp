// Project :: Morse Code Clock
// Date    :: 05/05/2024

#include<iostream>
#include<windows.h>

#include "clock.hpp"
#include "display.hpp"

using std::cout;
using std::endl;

int main()
{
	Clock clk(10,10, 0, clock_format::hours_24);
	
	Display clockInMorseCode(display_format::morse_code);
	Display clockInNumerical(display_format::numerical);
	
	unsigned int hrs{};
	unsigned int mins{};
	unsigned int secs{};

	while (true)
	{
		Sleep(1000);
		clk.updateTime();
		clk.getTime(hrs, mins, secs);
		system("cls");
		clockInMorseCode.displayTime(hrs, mins, secs);
		clockInNumerical.displayTime(hrs, mins, secs);
	}
}
