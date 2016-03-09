#include "stdafx.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace et;

int f(const int& in_) {
	return in_ * 2;
}

namespace etLibWin32Tests
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(Test000_Test)
		{
			Assert::IsTrue(0 == 0);
		}

		TEST_METHOD(Test001_CmdGetLabel)
		{
			Cmd cmd;
			Assert::IsTrue(cmd.getLabel() == std::string("default"));
		}

		TEST_METHOD(Test002_CallWithMax)
		{
			Assert::IsTrue(CallWithMax<int>(3, 5) == 10);
		}

		TEST_METHOD(Test003_TxtLength)
		{
			Cmd cmd;
			Assert::IsTrue(cmd.getLabelLen() == Cmd::label_default.length()) ;
			cmd.setLabel("test");
			Assert::IsTrue(cmd.getLabelLen() == std::string("test").length());
		}


	};
}