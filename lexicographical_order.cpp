#include "lab_oop_07.h"

s_registration
*lexicographical_order(std::ifstream &file_name, std::size_t size)
{
	s_registration	*reg;
	char			n_temp[30];
	int				y_temp;

	reg = new s_registration[size];
	if (!reg) return nullptr;
	file_name.clear();
	file_name.seekg(0, std::ios::beg);
	for (std::size_t i = 0; file_name >> reg[i].name >> reg[i].year; i++);
	for (std::size_t i = 0; i < size - 1; i++)
		for (std::size_t j = i + 1; j < size; j++)
			if (strcmp(reg[i].name, reg[j].name) > 0)
			{
                strcpy(n_temp, reg[i].name);
                strcpy(reg[i].name, reg[j].name);
                strcpy(reg[j].name, n_temp);
                y_temp = reg[j].year;
                reg[j].year = reg[i].year;
                reg[i].year = y_temp;
			}
	return reg;
}