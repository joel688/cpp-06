/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 08:28:39 by joakoeni          #+#    #+#             */
/*   Updated: 2024/04/11 15:06:44 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Serializer.hpp"

// ----------Constructors----------

Serializer::Serializer()
{
  return;
}

Serializer::Serializer(const Serializer &src)
{
  *this = src;
  return;
}

// ----------Deconstructors----------

Serializer::~Serializer()
{
  return;
}

// ----------Setters----------



// ----------Getters----------

// ----------Operators_Overloaders----------

Serializer& Serializer::operator=(const Serializer& src)
{
  (void)src;
  return(*this);
}

// ----------Members_Functions----------

unsigned long Serializer::serialize(Data *ptr)
{
  return(reinterpret_cast<unsigned long>(ptr));
}

Data *Serializer::deserialize(unsigned long raw)
{
  return(reinterpret_cast<Data*>(raw));
}

// ----------Non_Members_Functions----------


