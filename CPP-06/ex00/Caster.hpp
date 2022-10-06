#ifndef CASTER_HPP
#define CASTER_HPP
#include <iostream>
#include <iomanip>
#include <string>

class Caster
{
	public:
		Caster();
		void charCaster(std::string num);
		void intCaster(std::string num);
		void floatCaster(std::string num);
		void doubleCaster(std::string num);
		Caster(const Caster &obj);
		const Caster &operator=(const Caster &obj);
		~Caster();

		static void typeCaster(std::string name);
};

#endif
