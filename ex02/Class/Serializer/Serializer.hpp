#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include "../../Data.h"

// try catch exception of stoi [] stof stod | std::invalid_argument ... watch doc | idea : do abstrat exception and legacy for special 

class Serializer
{
	private:
		Serializer();
		Serializer(const Serializer &src);
		~Serializer();
	public:
    Serializer& operator=(const Serializer& src);
    static uintptr_t serialize(Data *ptr);
    static Data *deserialize(uintptr_t raw);
};

#endif
