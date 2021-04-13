#include "pch.h"
#include "CppUnitTest.h"
#include "../Project4.5/Square.cpp"
#include "../Project4.5/Root.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest45
{
	TEST_CLASS(UnitTest45)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Square a(0, 0, 0, 0,0);
			bool k = a.GetA();
			Assert::AreEqual(k, false);
		}
	};
}
