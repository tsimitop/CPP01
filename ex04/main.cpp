#include <iostream>
#include <fstream>

std::string	stringReplacer(std::string original, std::string unwanted, std::string keeper)
{
	int 			i = 0;
	int 		start = 0;
	std::string	replaced;

	for (i = 0; i < original.size(); i++)
	{
		if(original.find(unwanted, i) != std::string::npos)
		{
			start = original.find(unwanted, i);
			replaced += original.substr(i, start);
			replaced += keeper;
			i += start;
			if(keeper.size() > unwanted.size())
				i += keeper.size() - 1;
			else
				i += unwanted.size() - 1;
		}
		else
		{
			replaced += original.substr(i, (original.size() - i));
			break;
		}
	}
	return (replaced);
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Invalid number of aruments. To run the program please provide: <filename> <string1> <string>" << std::endl;
		return (0);
	}

	//opens input file
	std::ifstream	inputFile(argv[1]);
	if (!inputFile)
		std::cout << argv[1] << ":inputFile failed to open" << std::endl;

	//filename,replace creation
	std::string	filenameReplaced = argv[1];
	filenameReplaced += ".replace";

	//empties filename.replace
	std::ofstream tempFile(filenameReplaced, std::ios::trunc);
	if(!tempFile)
		std::cout << argv[1] << ": tempFile failed to open" << std::endl;
	tempFile.close();

	//opens filename.replace to append
	std::ofstream newFile(filenameReplaced, std::ios::app);
	if(!newFile)
		std::cout << argv[1] << ": newFile failed to open" << std::endl;

	//copies content into filename.replace while replacing if necessary
	std::string line;
	std::string str1 = argv[2];
	std::string str2 = argv[3];
	if(std::getline(inputFile, line))
	{
		while (1)
		{
			if(line.size() && !line.empty() && (line.find(str1, 0) != std::string::npos))
				newFile << stringReplacer(line, str1, str2);
			else
				newFile << line;
			if (std::getline(inputFile, line))
				newFile << std::endl;
			else
				break;
		}
	}
	inputFile.close();
	newFile.close();
	return (0);
}
