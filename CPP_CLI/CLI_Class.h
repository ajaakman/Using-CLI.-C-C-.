#pragma once
#include <atomic>

class CLI_Class
{
public:
	CLI_Class();
	~CLI_Class();

	void SetCLI_var(const int & newVar);
	const int & GetCLI_var();

private:
	std::atomic<int> CLI_var;
};

