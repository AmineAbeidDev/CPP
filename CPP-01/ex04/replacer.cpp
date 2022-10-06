#include "replacer.hpp"
#include <fstream>

void replacer(std::string in, std::string replace, std::string with)
{
    std::string		line;
    std::ifstream	inFile(in);
	std::ofstream	outFile;
	size_t			pos = 0;

	outFile.open(in + ".replace", std::ios::out);
    while (std::getline(inFile, line))
	{
		while(pos = line.find(replace, 0), pos < std::string::npos)
		{
			line.erase(pos, (line.size() - (line.size() - replace.size())));
			line.insert(pos, with);
		}
		// std::cout << line << std::endl;
		outFile << line << std::endl;
	}
	outFile.close();
}
