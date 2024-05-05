#include "display.hpp"

using std::cout;
using std::endl;

void Display::displayTime(unsigned int hrs, unsigned int mins, unsigned int secs)
{
	MorseCode mCode;
	
	if (getDisplayFormat() == display_format::numerical)
	{
		cout << "HH :: " << hrs << " " << "MM :: " << mins << " " << "SS :: " << secs << endl << endl;
	}
	else if (getDisplayFormat() == display_format::morse_code)
	{
		auto firstDigitOf { [](int num)->int { return num / 10; } };
		auto secondDigitOf{ [](int num)->int { return num % 10; } };
		auto display{ [](string str, string firstDigit, string secondDigit) {
			cout << str << firstDigit << "  " << secondDigit << endl; } };

		display("HH :: ", mCode.getCode(firstDigitOf(hrs)),  mCode.getCode(secondDigitOf(hrs)));
		display("MM :: ", mCode.getCode(firstDigitOf(mins)), mCode.getCode(secondDigitOf(mins)));
		display("SS :: ", mCode.getCode(firstDigitOf(secs)), mCode.getCode(secondDigitOf(secs)));
		cout << endl;
	}
}