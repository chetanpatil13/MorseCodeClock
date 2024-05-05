
#ifndef CLOCK_HPP
#define CLOCK_HPP

namespace clock_format
{
	enum
	{
		hours_12 = 0,
		hours_24 = 1
	};
}

class Clock
{
private:
	unsigned int hours;
	unsigned int mins;
	unsigned int seconds;
	unsigned int format;

protected:
	void resetHours();
	void updateHours();
	void updateMins();
	void updateSeconds();

public:
	Clock(unsigned int hh = 0, unsigned int mm = 0, unsigned int ss = 0, unsigned int frmt = clock_format::hours_12);
	unsigned int getFormat() { return format; }
	void updateTime();
	void getTime(unsigned int& hh, unsigned int& mm, unsigned int& ss);
};

inline Clock::Clock(
	unsigned int hh,
	unsigned int mm,
	unsigned int ss,
	unsigned int frmt)
	: hours(hh)
	, mins(mm)
	, seconds(ss)
	, format(frmt)
{
}

#endif // end of CLOCK_HPP