#ifndef MORSE_CODE_HPP
#define MORSE_CODE_HPP

#include<iostream>

using std::string;

class MorseCode
{
private:
	const string codesForNumbers[10]
	{
		"- - - - -", // for 0
		". - - - -", // for 1
		". . - - -", // for 2
		". . . - -", // for 3
		". . . . -", // for 4
		". . . . .", // for 5
		"- . . . .", // for 6
		"- - . . .", // for 7
		"- - - . .", // for 8
		"- - - - ."  // for 9
	};
public:
	const string getCode(unsigned int num);
};

#endif 