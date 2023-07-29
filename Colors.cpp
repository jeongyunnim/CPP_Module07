#include "Colors.hpp"

const std::string Colors::Reset = "\033[0m";
const std::string Colors::Red = "\033[31m";
const std::string Colors::Green = "\033[32m";
const std::string Colors::Yellow = "\033[33m";
const std::string Colors::Blue = "\033[34m";
const std::string Colors::Magenta = "\033[35m";
const std::string Colors::Cyan = "\033[36m";
const std::string Colors::BoldRed = "\033[1m\033[31m";
const std::string Colors::BoldGreen = "\033[1m\033[32m";
const std::string Colors::BoldYellow = "\033[1m\033[33m";
const std::string Colors::BoldBlue = "\033[1m\033[34m";
const std::string Colors::BoldMagenta = "\033[1m\033[35m";
const std::string Colors::BoldCyan = "\033[1m\033[36m";
const std::string Colors::BoldWhite = "\033[1m\033[37m";

void Colors::printRed(std::string target)
{
	std::cout << Red << target << Reset;
}

void Colors::printGreen(std::string target)
{
	std::cout << Green << target << Reset;
}

void Colors::printYellow(std::string target)
{
	std::cout << Yellow << target << Reset;
}

void Colors::printBlue(std::string target)
{
	std::cout << Blue << target << Reset;
}

void Colors::printMagenta(std::string target)
{
	std::cout << Magenta << target << Reset;
}

void Colors::printCyan(std::string target)
{
	std::cout << Cyan << target << Reset;
}

void Colors::printBoldRed(std::string target)
{
	std::cout << BoldRed << target << Reset;
}

void Colors::printBoldGreen(std::string target)
{
	std::cout << BoldGreen << target << Reset;
}

void Colors::printBoldYellow(std::string target)
{
	std::cout << BoldYellow << target << Reset;
}

void Colors::printBoldBlue(std::string target)
{
	std::cout << BoldBlue << target << Reset;
}

void Colors::printBoldMagenta(std::string target)
{
	std::cout << BoldMagenta << target << Reset;
}

void Colors::printBoldCyan(std::string target)
{
	std::cout << BoldCyan << target << Reset;
}
