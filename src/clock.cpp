#include"clock.hpp"

void Clock::resetHours()
{
	bool resetHours{
		(  ((format == clock_format::hours_12) && (hours == 12))
		|| ((format == clock_format::hours_24) && (hours == 24))
		) };

	if (resetHours)
	{
		hours = 0;		
	}
}

void Clock::updateHours()
{	
	if (mins == 60)
	{
		hours++;
		mins = 0;		
	}
	resetHours();
}

void Clock::updateMins()
{
	if (seconds == 60)
	{
		mins++;
		seconds = 0;		
	}
}

void Clock::updateSeconds()
{
	seconds++;
}

void Clock::updateTime()
{
	updateSeconds();
	updateMins();
	updateHours();
}

void Clock::getTime(unsigned int& hh, unsigned int& mm, unsigned int& ss)
{
		hh = hours;
		mm = mins;
		ss = seconds;		
}