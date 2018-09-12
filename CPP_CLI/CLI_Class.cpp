#include "CLI_Class.h"



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
