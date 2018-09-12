#pragma once

#include "../CPP_CLI/CLI_Class.h"
#include "../CPP_CLI/CLI_Class.cpp"

using namespace System;

namespace CPPWRAPPER {
	public ref class CLIWrapperClass
	{
	public:
		CLIWrapperClass();

		void SetCLI_var(const int newVar);
		const int GetCLI_var();

	private:
		CLI_Class* pCLIClass;
	};
}
