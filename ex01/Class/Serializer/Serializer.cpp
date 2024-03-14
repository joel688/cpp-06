/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 08:28:39 by joakoeni          #+#    #+#             */
/*   Updated: 2024/03/14 08:28:41 by joakoeni         ###   ########.fr       */
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

uintptr_t Serializer::serialize(Data *ptr)
{
  return(reinterpret_cast< uintptr_t>(ptr));
}

Data *Serializer::deserialize(uintptr_t raw)
{
  return(reinterpret_cast<Data*>(raw));
}

// ----------Non_Members_Functions----------


