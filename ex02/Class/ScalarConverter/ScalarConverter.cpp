/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 08:30:41 by joakoeni          #+#    #+#             */
/*   Updated: 2024/03/14 08:30:44 by joakoeni         ###   ########.fr       */
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
  try
  {
    int i = 0;
    if(std::stoi(var) == std::stof(var))
      i = std::stoi(var);
    if(i <= 32 || i >= 127)
      std::cout << "char: Non displayable" << std::endl;
    else
      std::cout << "char: '" << (char)i << "'" << std::endl;
  }
  catch (const std::exception& e)
  {
    std::cout << "An error occured while casting to char." << std::endl;
  }
  return;
}

void ScalarConverter::to_int(const std::string &var)
{
  try
  {
    int i = std::stoi(var);
    std::cout << "int: " << i << std::endl;
  }
  catch (const std::exception& e)
  {
    std::cout << "An error occured while casting to int." << std::endl;
  }
  return;
}

void ScalarConverter::to_float(const std::string &var)
{
  try
  {
    float f = std::stof(var);
    std::cout << "float: " << f;
    if (f == std::stoi(var))
      std::cout << ".0f";
    std::cout << std::endl;
  }
  catch (const std::exception& e)
  {
    std::cout << "An error occured while casting to float." << std::endl;
  }
  return;
}

void ScalarConverter::to_double(const std::string &var)
{
  try
  {
    double d = std::stod(var);
    std::cout << std::setprecision(16) << "double: " << d; // max 16 digit before , + after ,
    if(d == std::stoi(var))
      std::cout << ".0";
    std::cout << std::endl;
  }
  catch (const std::exception& e)
  {
    std::cout << "An error occured while casting to double." << std::endl;
  }
  return;
}

int ScalarConverter::nan_check(const std::string &var)
{
  std::string nan_s[] = {"-inf", "+inf", "nan", "-inff", "+inff", "nanf"};
  std::string to_print;
  int i = 0;
  while(i < 6)
  {
    if(nan_s[i] == var)
    {
      to_print = nan_s[i % 3];
      break;
    }
    i++;
  }
  if(i == 6)
    return (0);
  std::cout << "char: impossible" << std::endl;
  std::cout << "int: impossible" << std::endl;
  std::cout << "float: " << to_print << "f" << std::endl;
  std::cout << "double: " << to_print << std::endl;
  return (1);
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
// ----------Non_Members_Functions----------


