#include <iostream>
#include "CLI_Class.h"

int main()
{
	CLI_Class cli;

	std::cout << cli.GetCLI_var() << std::endl;
	std::cin.get();
	cli.SetCLI_var(8);
	std::cin.get();
	std::cout << cli.GetCLI_var() << std::endl;
	std::cin.get();
}