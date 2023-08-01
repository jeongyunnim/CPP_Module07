#include "iter.hpp"

void myPower(int& i)
{
	if (i * i <= std::numeric_limits<int>::max())
		i = i * i;
	else
	{
		std::cerr << Colors::RedString("Overflow error, int value will be set int Max value") << std::endl;
		i = std::numeric_limits<int>::max();
	}
}

void myUppercase(char &c)
{
	if ('a' <= c && c <= 'z')
		c -= 32;
}

void replaceHighfive(std::string& target)
{
	target.clear();
	target = "Highfive~~!";
}

int main(void)
{
	{
		std::cout << Colors::BoldWhiteString("\n-----------------<<int array test>>-----------------\n") << std::endl;
		const size_t	arr_size = 100;
		int 			arr[arr_size];

		for (size_t i = 0; i < arr_size; i++)
			arr[i] = i;
		iter(arr, arr_size, myPower);
		for (size_t i = 0; i < arr_size; i++)
			std::cout << Colors:: Cyan << "int arr" << "[" << i << "]: " << Colors::Reset << arr[i] << std::endl;
	}
	{
		std::cout << Colors::BoldWhiteString("\n-----------------<<char arr test>>-----------------\n") << std::endl;
		char	test[17];
		
		strlcpy(test, "hello evaluator", 16);
		std::cout << Colors::MagentaString("[original string]: ") << test << std::endl;
		iter(test, strlen(test), myUppercase);
		std::cout << Colors::MagentaString("[iter() applicated string]: ") << test << std::endl;
	}
	{
		std::cout << Colors::BoldWhiteString("\n-----------------<<string arr test>>-----------------\n") << std::endl;
		const size_t	arr_size = 20;
		std::string		highfiveArr[arr_size];
		
		for (size_t i = 0; i < arr_size; i++)
		{
			highfiveArr[i] = i + 'A';
			std::cout << Colors::Cyan << "[original string] " << Colors::Reset << i << ": " << highfiveArr[i] << std::endl;
		}
		iter(highfiveArr, arr_size, replaceHighfive);
		for (size_t i = 0; i < arr_size; i++)
			std::cout << Colors::Cyan << "[replaced string] " << Colors::Reset << i << ": " << highfiveArr[i] << std::endl;
	}
	return (0);
}