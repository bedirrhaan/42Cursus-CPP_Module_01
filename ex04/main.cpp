#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
	if (ac == 4)
	{
		// String definition
		std::string		s1 = av[2];
		std::string		s2 = av[3];
		std::string		line;

		// Write File Descriptor Open
		std::string newFile = std::string(av[1]) + ".replace";
		std::ofstream	writeFile(newFile.c_str());
		if (!writeFile.is_open())
			std::cerr << "File Write Permission Error!" << std::endl;

		// Read File Descriptor Open
		std::ifstream	readFile(av[0]);
		if (!readFile.is_open())
			std::cerr << "File Open Permission Error!" << std::endl;

		while (std::getline(readFile, line))
		{
			size_t	position = 0;
			while ((position = line.find(s1, position)) != std::string::npos)
			{
				line.replace(position, s1.length(), s2);
				position += s2.length();
			}
			writeFile << line << std::endl;
		}
		readFile.close();
		writeFile.close();
	}
	else
		std::cerr << "<filename> <string1> <string2>" << std::endl;
	return (0);
}
