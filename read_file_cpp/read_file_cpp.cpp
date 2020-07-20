// Simple C++ Program Reading a File
// Read by lines until EoF is reached
// 2020.7.20 Jeeho Ahn

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

int main()
{
	//Path to the file to be read
	std::string filename = "read_test.txt";
	std::ifstream file(filename);
	std::string line;
	std::vector<std::string> string_list;

	if (file.is_open())
	{
		std::cout << "\tFile Opened - " << filename << std::endl;
		while (std::getline(file, line))
		{
			std::cout << "Read line: " << line << '\n';
			string_list.push_back(line);
		}
		file.close();

		std::cout << "\n\tStored in the String Vector: " << std::endl;
		for (int i = 0; i < string_list.size(); i++)
		{
			std::cout << "line " << std::to_string(i) << ": " << string_list[i] << std::endl;
		}

		return 0;
	}
	else
	{
		std::cout << "Error while reading the file. Check the file path again." << std::endl;
		return -1;
	}
	
}

