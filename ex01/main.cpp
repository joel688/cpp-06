/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 08:29:21 by joakoeni          #+#    #+#             */
/*   Updated: 2024/04/11 15:07:11 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Class/ScalarConverter/ScalarConverter.hpp"
#include "./Class/Serializer/Serializer.hpp"

int main()
{
  Data ptr;
  ptr.num = 54;
  ptr.c = 'A';

  unsigned long intptr = Serializer::serialize(&ptr); // Utilisation de unsigned long
  std::cout << "Num ptr: " << intptr << std::endl;

  Data* deserializedPtr = Serializer::deserialize(intptr); // Utilisation de unsigned long
  if (deserializedPtr) {
    std::cout << "Num deserialize: " << deserializedPtr->num << std::endl;
    std::cout << "Char: " << deserializedPtr->c << std::endl;
  } else {
    std::cout << "Failed to deserialize pointer." << std::endl;
  }

  return 0;
}
