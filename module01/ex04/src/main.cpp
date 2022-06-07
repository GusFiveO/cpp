#include <iostream>
#include <fstream>

#define SED_BUFFER_SIZE 16

void	fillReplaceFile(std::fstream & newFile, std::fstream & file, char *s1, char *s2)
{
	std::string	buffer;
	std::string str1 = s1;
	std::string str2 = s2;

	(void)s1;
	(void)s2;
	(void)newFile;
	std::cout << s1 << "," << s2 << std::endl;
	while (std::getline(file, buffer))
	{
		std::cout << buffer << std::endl;
		if (buffer.find(s1) == std::string::npos)
			 newFile << buffer << std::endl;
		else
		{
			while (buffer.find(s1) != std::string::npos)
			{
				newFile.write(buffer.data(), buffer.find(s1));
				newFile.write(s2, str2.length());
				buffer.erase(0, buffer.find(s1) + str1.length());
			}
			newFile.write(buffer.data(), buffer.length());
		}
	}
}

int main(int argc, char **argv)
{
	std::fstream file;
	std::fstream replaceFile;
	std::string newFilename; 

	if (argc != 4)
	{
		std::cout << "Error in args." << std::endl;
		return (1);
	}
	file.open(argv[3]);
	if (!file)
	{
		std::cout << "File doesn't exist." << std::endl;
		return (1);
	}
	newFilename = argv[3];
	newFilename.append(".replace");
	replaceFile.open(newFilename,  std::ios::out);
	fillReplaceFile(replaceFile, file, argv[1], argv[2]);
	file.close();
	replaceFile.close();
	return (0);
}
