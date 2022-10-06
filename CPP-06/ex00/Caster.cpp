#include "Caster.hpp"

int skip(char c)
{
	return ((c == '-' || c == '+') ? 1 : 0);
}

void infinity(std::string var)
{
	if (var[0] == '+')
		var.erase(0, 1);
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;

	if (!var.compare("inf") || !var.compare("-inf") || !var.compare("nan"))
		std::cout << "float: " << var << "f" << std::endl;
	else
		std::cout << "float: " << var << std::endl;

	if (!var.compare("inff") || !var.compare("-inff") || !var.compare("nanf"))
		std::cout << "double: " << var.substr(0, var.length() - 1) << std::endl;
	else
		std::cout << "double: " << var << std::endl;
}

bool isDigits(std::string num)
{
	for (size_t i = skip(num[0]); i < num.length(); ++i)
		if (!isdigit(num[i]))
			return (false);
	try
	{
		std::stoi(num);
	}
	catch(const std::exception& e)
	{
		std::cout << "The input is not an int !" << std::endl;
		return (false);
	}
	return (true);
}

bool isFloat(std::string num)
{
	if (num.find_first_of('.') != num.find_last_of('.') || num.find('.') == std::string::npos || !isdigit(num[num.find('.') + 1]))
		return (false);
	for (size_t i = skip(num[0]); i < num.length() - 1; ++i)
		if ((!isdigit(num[i]) && num[i] != '.') || num[num.length() - 1] != 'f')
			return (false);
	try
	{
		std::stof(num);
	}
	catch(const std::exception& e)
	{
		std::cout << "The input is not a float !" << std::endl;
		return (false);
	}
	return (true);
}

bool isDouble(std::string num)
{
	if (num.find_first_of('.') != num.find_last_of('.') || num.find('.') == std::string::npos || !isdigit(num[num.find('.') + 1]))
		return (false);
	for (size_t i = skip(num[0]); i < num.length(); ++i)
		if (!isdigit(num[i]) && num[i] != '.')
			return (false);
	try
	{
		std::stod(num);
	}
	catch(const std::exception& e)
	{
		std::cout << "The input is not a double !" << std::endl;
		return (false);
	}
	return (true);
}

Caster::Caster()
{
}

void Caster::charCaster(std::string num)
{
	std::cout << std::setprecision(1) << std::fixed;
	(isprint(num[0]) ? std::cout << "char: " << num[0] << std::endl
	: std::cout << "char: Non displayable" << std::endl);
	std::cout << "int: " << static_cast<int>(num[0]) << std::endl;
	std::cout << "float: " << static_cast<float>(num[0]) << "f\n";
	std::cout << "double: " << static_cast<double>(num[0]) << std::endl;
}

void Caster::intCaster(std::string num)
{
	int ret;
	std::cout << std::setprecision(1) << std::fixed;
	try
	{
		ret = std::stoi(num);
	}
	catch (...)
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		try
		{
			std::cout << "float: " << static_cast<float>(std::stof(num)) << "f" << std::endl;
		}
		catch (...)
		{
			std::cout << "impossible" << std::endl;
		}
		try
		{
			std::cout << "double: " << static_cast<double>(std::stod(num)) << std::endl;
		}
		catch (...)
		{
			std::cout << "impossible" << std::endl;
		}
		return ;
	}
	(isprint(ret) ? std::cout << "char: " << static_cast<char>(ret) << std::endl
	: std::cout << "char: Non displayable" << std::endl);
	std::cout << "int: " << ret << std::endl;
	std::cout << "float: " << static_cast<float>(ret) << "f\n";
	std::cout << "double: " << static_cast<double>(ret) << std::endl;
}

void Caster::floatCaster(std::string num)
{
	float ret;
	std::cout << std::setprecision(1) << std::fixed;
	try
	{
		ret = std::stof(num);
	}
	catch (...)
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		try
		{
			std::cout << "double: " << static_cast<double>(std::stod(num)) << std::endl;
		}
		catch (...)
		{
			std::cout << "impossible" << std::endl;
		}
		return ;
	}
	(isprint(ret) ? std::cout << "char: " << static_cast<char>(ret) << std::endl
	: std::cout << "char: Non displayable" << std::endl);
	try
	{
		std::cout << "int: " << std::stoi(num) << std::endl;
	}
	catch (...)
	{
		std::cout << "impossible" << std::endl;
	}
	std::cout << "float: " << static_cast<float>(ret) << "f\n";
	std::cout << "double: " << static_cast<double>(ret) << std::endl;

}

void Caster::doubleCaster(std::string num)
{
	double ret;
	std::cout << std::setprecision(1) << std::fixed;
	try
	{
		ret = std::stod(num);
	}
	catch (...)
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
		return ;
	}
	(isprint(ret) ? std::cout << "char: " << static_cast<char>(ret) << std::endl
	: std::cout << "char: Non displayable" << std::endl);
	try
	{
		std::cout << "int: " << std::stoi(num) << std::endl;
	}
	catch (...)
	{
		std::cout << "impossible" << std::endl;
	}
	try
	{
		std::cout << "float: " << std::stof(num) << "f\n";
	}
	catch (...)
	{
		std::cout << "impossible" << std::endl;
	}
	std::cout << "double: " << static_cast<double>(ret) << std::endl;
}

Caster::Caster(const Caster &obj)
{
	*this = obj;
}

const Caster &Caster::operator=(const Caster &obj)
{
	return (obj);
}

Caster::~Caster()
{

}

void Caster::typeCaster(std::string num)
{
	Caster obj;
	if (num.length() == 1 && !isdigit(num[0]))
		obj.charCaster(num);
	else if (isDigits(num))
		obj.intCaster(num);
	else if (isFloat(num))
		obj.floatCaster(num);
	else if (isDouble(num))
	 	obj.doubleCaster(num);
	else if (!num.compare("inf") || !num.compare("inff") || !num.compare("nan") || !num.compare("nanf") || !strcmp((num.c_str() + 1), "inf") || !strcmp((num.c_str() + 1), "inff"))
		infinity(num);
}
