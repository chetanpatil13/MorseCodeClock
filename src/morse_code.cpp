#include "morse_code.hpp"

const string MorseCode::getCode(unsigned int num)
{	
	if (num > 9)
		return "Error: from MorseCode::getCode() : num is greate than 9 !!!";
	else
		return codesForNumbers[num];
}
