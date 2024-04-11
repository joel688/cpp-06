/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 08:27:41 by joakoeni          #+#    #+#             */
/*   Updated: 2024/04/11 14:49:22 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ScalarConverter.hpp"

// ----------Constructors----------

ScalarConverter::ScalarConverter()
{
  return;
}

ScalarConverter::ScalarConverter(const ScalarConverter &src)
{
  *this = src;
  return;
}

// ----------Deconstructors----------

ScalarConverter::~ScalarConverter()
{
  return;
}

// ----------Setters----------



// ----------Getters----------

// ----------Operators_Overloaders----------

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& src)
{
  (void)src;
  return(*this);
}

// ----------Members_Functions----------

void  ScalarConverter::to_char(const std::string &var)
{
  std::istringstream iss(var);
  int i;
  if (!(iss >> i))
  {
    std::cout << "An error occured while casting to char." << std::endl;
    return;
  }
  if(i <= 32 || i >= 127)
    std::cout << "char: Non displayable" << std::endl;
  else
    std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;
}

void ScalarConverter::to_int(const std::string &var)
{
  std::istringstream iss(var);
  int i;
  if (!(iss >> i))
  {
    std::cout << "An error occured while casting to int." << std::endl;
    return;
  }
  std::cout << "int: " << i << std::endl;
}

void ScalarConverter::to_float(const std::string &var)
{
  std::istringstream iss(var);
  float f;
  if (!(iss >> f))
  {
    std::cout << "An error occured while casting to float." << std::endl;
    return;
  }
  std::cout << "float: " << f;
  if (f == static_cast<float>(static_cast<int>(f)))
    std::cout << ".0f";
  std::cout << std::endl;
}

void ScalarConverter::to_double(const std::string &var)
{
  std::istringstream iss(var);
  double d;
  if (!(iss >> d))
  {
    std::cout << "An error occured while casting to double." << std::endl;
    return;
  }
  std::cout << std::setprecision(16) << "double: " << d; // max 16 digit before , + after ,
  if(d == static_cast<double>(static_cast<int>(d)))
    std::cout << ".0";
  std::cout << std::endl;
}

int ScalarConverter::nan_check(const std::string &var)
{
  const char* nan_s[] = {"-inf", "+inf", "nan", "-inff", "+inff", "nanf"};
  std::string to_print;
  for (int i = 0; i < 6; ++i)
  {
    if (var == nan_s[i])
    {
      to_print = nan_s[i % 3];
      std::cout << "char: impossible" << std::endl;
      std::cout << "int: impossible" << std::endl;
      std::cout << "float: " << to_print << "f" << std::endl;
      std::cout << "double: " << to_print << std::endl;
      return 1;
    }
  }
  return 0;
}

void ScalarConverter::convert(const std::string var)
{
  if (nan_check(var))
    return;
  to_char(var);
  to_int(var);
  to_float(var);
  to_double(var);
  return;
}
