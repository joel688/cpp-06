/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 08:28:27 by joakoeni          #+#    #+#             */
/*   Updated: 2024/04/11 15:04:50 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include "../../Data.h"

class Serializer
{
	private:
		Serializer();
		Serializer(const Serializer &src);
		~Serializer();
	public:
    Serializer& operator=(const Serializer& src);
    static unsigned long serialize(Data *ptr); // Utilisation de unsigned long
    static Data *deserialize(unsigned long raw); // Utilisation de unsigned long
};

#endif
