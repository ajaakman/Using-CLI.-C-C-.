#pragma once
#include <atomic>
#include <iostream>
#define TESTAPI __declspec(dllexport)

class CLI_Class
{
public:
	TESTAPI CLI_Class();
	TESTAPI ~CLI_Class();

	TESTAPI void SetCLI_var(const int & newVar);
	TESTAPI const int & GetCLI_var();

	TESTAPI void Print();

private:
	std::atomic<int> CLI_var;

	void Printer();
};

