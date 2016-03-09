#pragma once

#include "stdafx.h"

using namespace et;


int main()
{
	Cmd cmd;
	Cmd cmd2("test");

	std::cout << cmd.getLabel() << std::endl;
	std::cout << cmd2.getLabel() << std::endl;


	return 0;
}

