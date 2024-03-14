/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 08:27:13 by joakoeni          #+#    #+#             */
/*   Updated: 2024/03/14 08:27:15 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Class/ScalarConverter/ScalarConverter.hpp"

int main(int argc, char **argv)
{
  if(argc != 2)
  {
    std::cout << "Bad argument send better ones." << std::endl;
    return 0;
  }
  ScalarConverter::convert(argv[1]);
}
