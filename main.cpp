// 5. Scrieţi un program care ordonează lexicografic 
// o consecutivitate de înregistrări (dintr-unfişier) de tipul:
//
// struct Inregistrare {
// 		char	nume[30];
// 		int     ani;
// };

#include "lab_oop_07.h"

int 	main(int argc, char const *argv[])
{
	std::ifstream	f_in;
	s_registration	*reg;
	std::size_t		size;

	reg = nullptr;
	try
	{
		if (argc != 2) throw 1;
		f_in.open(argv[1], std::ios::in);
		if (!f_in) throw 2;
		std::cout << "File name: " << argv[1] << std::endl;
		size = get_size(f_in);
		if (!size) throw 3;
		std::cout << "FIle size: " << size << std::endl;
		reg = lexicographical_order(f_in, size);
		if (!reg) throw 4;
		std::cout << "Lexicographical order:\n";
		for (std::size_t i = 0; i < size; i++)
			std::cout << "\tname: " 
					  << reg[i].name 
					  << std::endl
					  << "\tyear: "
					  << reg[i].year
					  << std::endl;
	}
	catch (int i)
	{ 
		program_errors(i);
	}
	f_in.close();
	delete []reg;
	return 0;
}