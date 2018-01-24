#include <iostream>

int main(int ac, char **av)
{
	int i;

	i = 1;
	if (ac > 1)
		while (i < ac)
		{
			std::cout << av[i];
			++i;
		}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;

}
