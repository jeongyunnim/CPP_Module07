#include <iostream>
#include "Array.hpp"
#include "../Colors.hpp"

#define MAX_VAL 750

int subjectRequired(void)
{
	Array<int> numbers(MAX_VAL);
	int* mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}
	//SCOPE
	{
		Array<int> tmp = numbers;
		Array<int> test(tmp);
	}
	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}
	try
	{
		// numbers[-2] = 0;
		numbers[MAX_VAL] = 0;
		numbers[MAX_VAL - 1] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		numbers[MAX_VAL] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = rand();
	}
	delete [] mirror;
	return 0;
}

void leak()
{
	system("leaks $PPID");
}

int main(int, char**)
{
	atexit(leak);
	std::cout << Colors::BoldWhiteString("------------------------<<Subject's main test>>------------------------\n") << std::endl;
	if (subjectRequired() == 1)
		std::cout << Colors::BoldRed << "failed subject requirements" << Colors::Reset << std::endl;
	else
		std::cout << Colors::BoldGreen << "successed subject requirements" << Colors::Reset << std::endl;
	{
		std::cout << Colors::BoldWhiteString("\n------------------------<<additional test>>------------------------\n") << std::endl;
		const size_t	arr_size = 26;
		Array<std::string>	stringArr(arr_size);
		std::string			stringArrMirror[arr_size];

		for (size_t i = 0; i < arr_size; i++)
		{
			stringArr[i] += ('A' + i);
			stringArrMirror[i] += ('A' + i);
		}
		for (size_t i = 0; i < arr_size; i++)
		{
			std::cout << Colors::Cyan << "[string] " << i << ": " << Colors::Reset << stringArr[i] << std::endl;
			std::cout << Colors::Magenta << "[Mirror] " << i << ": " << Colors::Reset << stringArrMirror[i] << '\n' << std::endl;
		}

		Array<std::string>	*temp = new Array<std::string>(stringArr);
		for (size_t i = 0; i < arr_size; i++)
		{
			std::cout << Colors::Cyan << "[string] " << i << ": " << Colors::Reset << stringArr[i] << std::endl;
			std::cout << Colors::Magenta << "[Temp] " << i << ": " << Colors::Reset << (*temp)[i] << '\n' << std::endl;
		}
		delete temp;
	}

}