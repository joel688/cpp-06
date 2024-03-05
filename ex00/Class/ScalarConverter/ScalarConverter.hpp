#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>


// try catch exception of stoi [] stof stod | std::invalid_argument ... watch doc

class ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &src);
		~ScalarConverter();
	public:
		static void convert(const std::string);
};

#endif
