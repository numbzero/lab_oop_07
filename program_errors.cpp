#include "lab_oop_07.h"

void    program_errors(int i)
{
    if (i == 1)
        std::cout << RED "[!]" RESET " Usage: program_name file\n";
    if (i == 2)
        std::cout << RED "[-]" RESET " Unable to open file!\n";
    if (i == 3)
    	std::cout << RED "[-]" RESET " File is empty!\n";
    if (i == 4)
    	std::cout << RED "[-]" RESET " Cannot allocate memory!\n";
    exit(1);
}