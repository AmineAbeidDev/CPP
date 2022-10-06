#ifndef SERIA_HPP
#define SERIA_HPP
#include <iostream>
#include "data.h"

class Seria
{
	public:
		Seria();
		Seria (const Seria &obj);
		const Seria &operator=(const Seria &obj);
		~Seria();

		uintptr_t	serialize(Data* ptr);
		Data*		deserialize(uintptr_t raw);
	};

#endif