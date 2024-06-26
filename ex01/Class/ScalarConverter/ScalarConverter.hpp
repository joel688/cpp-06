/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 08:27:24 by joakoeni          #+#    #+#             */
/*   Updated: 2024/04/11 14:50:08 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iomanip>
#include <iostream>
#include <string>
#include <sstream>

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
