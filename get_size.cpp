#include "lab_oop_07.h"

std::size_t	get_size(std::ifstream &file_name)
{
	std::size_t	size;
	std::string line;

	size = 0;
	while (std::getline(file_name, line)) ++size;
	return (size);
}