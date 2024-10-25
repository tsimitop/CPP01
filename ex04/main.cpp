#include <iostream>
#include <fstream>

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Invalid number of aruments. To run the program please provide: <filename> <string1> <string>" << std::endl;
		return (0);
	}
	std::ifstream inputFile(argv[1]);
	if (!inputFile)
		std::cout << argv[1] << " failed to open" << std::endl;
	std::string filenameReplaced = argv[1];
	filenameReplaced += ".replace";

	//empties filename.replace
	std::ofstream tempFile(filenameReplaced, std::ios::trunc);
	if(!tempFile)
		std::cout << argv[1] << " failed to open" << std::endl;

	//opens filename.replace to append
	std::ofstream newFile(filenameReplaced, std::ios::app);
	if(!newFile)
		std::cout << argv[1] << " failed to open" << std::endl;

	//copies content into filename.replace
	std::string line;
	if(std::getline(inputFile, line))
	{
		while (1)
		{
			newFile << line;
			if (std::getline(inputFile, line))
				newFile << std::endl;
			else
				break;
		}
	}
	//replaces every occurence of string1 with string2
	// std::string str1 = argv[2];
	// std::string str2 = argv[3];
	// std::string r_line;
	// if(std::getline(inputFile, r_line))
	// {
	// 	while(r_line.find(str1, 0) != std::string::npos)
	// 	{
	// 		str1.substr(str1, str2,)
	// 	}
	// }
	// find()	Returns the index (position) of the first occurrence of a string or character
	// erase()	Removes characters from a string
	// substr()	Returns a part of a string from a start index (position) and length
	return (0);
}

/*
Create a program that takes three parameters in the following order: a filename and
two strings, s1 and s2.
It will open the file <filename> and copies its content into a new file
<filename>.replace, replacing every occurrence of s1 with s2.
Using C file manipulation functions is forbidden and will be considered cheating. All
the member functions of the class std::string are allowed, except replace. Use them
wisely!
Of course, handle unexpected inputs and errors. You have to create and turn in your
own tests to ensure your program works as expected.
*/