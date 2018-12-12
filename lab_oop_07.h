#ifndef LAB_OOP_07_H
# define LAB_OOP_07_H

# include <iostream>
# include <fstream>
# include <iterator>
# include <algorithm>

# include <string.h>

# define RED		"\x1b[31m"
# define RESET		"\x1b[0m"

struct 		s_registration
{
	char	name[30];
	int		year;
};

void    		program_errors(int i);
std::size_t		get_size(std::ifstream &file_name);
s_registration	*lexicographical_order
				(std::ifstream &file_name, std::size_t size);

#endif