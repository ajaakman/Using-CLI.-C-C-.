#include "stdafx.h"

#include "CPP_WRAPPER.h"

CPPWRAPPER::CLIWrapperClass::CLIWrapperClass()
{
	pCLIClass = new CLI_Class();
}

void CPPWRAPPER::CLIWrapperClass::SetCLI_var(const int newVar)
{
	pCLIClass->SetCLI_var(newVar);
}

const int CPPWRAPPER::CLIWrapperClass::GetCLI_var()
{
	return pCLIClass->GetCLI_var();
}

void CPPWRAPPER::CLIWrapperClass::Print()
{
	pCLIClass->Print();
}
