#include "CLI_Class.h"
#include <thread>


CLI_Class::CLI_Class()
{
	CLI_var = 4;
}


CLI_Class::~CLI_Class()
{
}

void CLI_Class::SetCLI_var(const int & newVar)
{
	CLI_var = newVar;
}

const int & CLI_Class::GetCLI_var()
{
	return CLI_var;
}

void CLI_Class::Print()
{
	std::thread printerThread;
	printerThread = std::thread(&CLI_Class::Printer, this);
	printerThread.detach();
}

void CLI_Class::Printer()
{
	while (true)
		std::cout << CLI_var << std::endl;
}
