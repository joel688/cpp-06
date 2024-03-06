#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iomanip>
#include <iostream>
#include <string>

// try catch exception of stoi [] stof stod | std::invalid_argument ... watch doc | idea : do abstrat exception and legacy for special 

class ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &src);
		~ScalarConverter();
	public:
		static void convert(const std::string var);
    ScalarConverter& operator=(const ScalarConverter& src);
    static void to_char(const std::string &var);
    static void to_int(const std::string &var);
    static void to_float(const std::string &var);
    static void to_double(const std::string &var);
    static int  nan_check(const std::string &var);

};

#endif
