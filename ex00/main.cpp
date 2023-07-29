#include "whatever.hpp"
#include "../Colors.hpp"

int main(void)
{
	{
		std::cout << Colors::BoldWhiteString("\n-----------------<<int type test>>-----------------\n") << std::endl;
		int			intZero = 0;
		int			intMax = __INT32_MAX__;
		std::cout << Colors::CyanString("[original value]") << "\nzero: " << intZero << "\nmax: " << intMax << std::endl;
		swap(intZero, intMax);
		std::cout << Colors::CyanString("[swapped value]") << "\nzero: " << intZero << "\nmax: " << intMax << std::endl;
		std::cout << Colors::CyanString("[min result]") << "\n-> "<< min(intZero, intMax) << std::endl;
		std::cout << Colors::CyanString("[max result]") << "\n-> "<< max(intZero, intMax) << std::endl;
	}
	{
		std::cout << Colors::BoldWhiteString("\n-----------------<<const int type test>>-----------------\n") << std::endl;
		const int	constIntZero = 0;
		const int	constIntMax = __INT32_MAX__;
		std::cout << Colors::CyanString("[original value]") << "\nzero: " << constIntZero << "\nmax: " << constIntMax << std::endl;
		std::cout << Colors::CyanString("[min result]") << "\n-> "<< min(constIntZero, constIntMax) << std::endl;
		std::cout << Colors::CyanString("[max result]") << "\n-> "<< max(constIntZero, constIntMax) << std::endl;
	}
	{
		std::cout << Colors::BoldWhiteString("\n-----------------<<float type test>>-----------------\n") << std::endl;
		float		floatZero = 0;
		float		floatInf = std::numeric_limits<float>::infinity();

		std::cout << Colors::CyanString("[original value]") << "\nzero: " << floatZero << "\nmax: " << floatInf << std::endl;
		swap(floatZero, floatInf);
		std::cout << Colors::CyanString("[swapped value]") << "\nzero: " << floatZero << "\nmax: " << floatInf << std::endl;
		std::cout << Colors::CyanString("[min result]") << "\n-> "<< min(floatZero, floatInf) << std::endl;
		std::cout << Colors::CyanString("[max result]") << "\n-> "<< max(floatZero, floatInf) << std::endl;
	}
	{
		std::cout << Colors::BoldWhiteString("\n-----------------<<const float type test>>-----------------\n") << std::endl;
		const float	constFloatZero = 0;
		const float	constFloatInf = std::numeric_limits<float>::infinity();

		std::cout << Colors::CyanString("[original value]") << "\nzero: " << constFloatZero << "\nmax: " << constFloatInf << std::endl;
		std::cout << Colors::CyanString("[min result]") << "\n-> "<< min(constFloatZero, constFloatInf) << std::endl;
		std::cout << Colors::CyanString("[max result]") << "\n-> "<< max(constFloatZero, constFloatInf) << std::endl;
	}
	{
		std::cout << Colors::BoldWhiteString("\n-----------------<<double type test>>-----------------\n") << std::endl;
		float		DoubleZero = 0;
		float		DoubleInf = std::numeric_limits<double>::infinity();

		std::cout << Colors::CyanString("[original value]") << "\nzero: " << DoubleZero << "\nmax: " << DoubleInf << std::endl;
		swap(DoubleZero, DoubleInf);
		std::cout << Colors::CyanString("[swapped value]") << "\nzero: " << DoubleZero << "\nmax: " << DoubleInf << std::endl;
		std::cout << Colors::CyanString("[min result]") << "\n-> "<< min(DoubleZero, DoubleInf) << std::endl;
		std::cout << Colors::CyanString("[max result]") << "\n-> "<< max(DoubleZero, DoubleInf) << std::endl;
	}
	{
		std::cout << Colors::BoldWhiteString("\n-----------------<<const double type test>>-----------------\n") << std::endl;
		const float	constDoubleZero = 0;
		const float	constDoubleInf = std::numeric_limits<double>::infinity();

		std::cout << Colors::CyanString("[original value]") << "\nzero: " << constDoubleZero << "\nmax: " << constDoubleInf << std::endl;
		std::cout << Colors::CyanString("[min result]") << "\n-> "<< min(constDoubleZero, constDoubleInf) << std::endl;
		std::cout << Colors::CyanString("[max result]") << "\n-> "<< max(constDoubleZero, constDoubleInf) << std::endl;
	}
	{
		std::cout << Colors::BoldWhiteString("\n-----------------<<min/max equal value test>>-----------------\n") << std::endl;

		int	intMax = INT32_MAX;
		int	intMaxCopy = intMax;
		std::cout << Colors::CyanString("[original value's pointer]") << "\nMax: " << &intMax << "\nmaxCopy: " << &intMaxCopy << std::endl;
		std::cout << Colors::CyanString("[min result]") << "\n-> "<< &min(intMax, intMaxCopy) << std::endl;
		std::cout << Colors::CyanString("[max result]") << "\n-> "<< &max(intMax, intMaxCopy) << std::endl;
	}
	return (0);
}