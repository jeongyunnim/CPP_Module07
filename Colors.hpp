#pragma once
#ifndef _COLORS_HPP_
#define _COLORS_HPP_
#include <iostream>
#include <string>

class Colors
{

public:
	
	static void printRed(std::string target);
	static void printGreen(std::string target);
	static void printYellow(std::string target);
	static void printBlue(std::string target);
	static void printMagenta(std::string target);
	static void printCyan(std::string target);
	static void printBoldRed(std::string target);
	static void printBoldGreen(std::string target);
	static void printBoldYellow(std::string target);
	static void printBoldBlue(std::string target);
	static void printBoldMagenta(std::string target);
	static void printBoldCyan(std::string target);

private:

	static const std::string Reset;
	static const std::string Red;
	static const std::string Green;
	static const std::string Yellow;
	static const std::string Blue;
	static const std::string Magenta;
	static const std::string Cyan;
	static const std::string BoldRed;
	static const std::string BoldGreen;
	static const std::string BoldYellow;
	static const std::string BoldBlue;
	static const std::string BoldMagenta;
	static const std::string BoldCyan;
	static const std::string BoldWhite;

};

#endif