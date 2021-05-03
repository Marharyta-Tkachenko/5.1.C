#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Student\ Tkachenko.Marharyta.IK11\Lab5.1.C\Lab5.1.C\Complex.cpp"
#include "C:\Student\ Tkachenko.Marharyta.IK11\Lab5.1.C\Lab5.1.C\Complex_Private.cpp"
#include "C:\Student\ Tkachenko.Marharyta.IK11\Lab5.1.C\Lab5.1.C\Complex_Public.cpp"
#include "C:\Student\ Tkachenko.Marharyta.IK11\Lab5.1.C\Lab5.1.C\MyDerivedException.cpp"
#include "C:\Student\ Tkachenko.Marharyta.IK11\Lab5.1.C\Lab5.1.C\MyException.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Complex_Private A(4, -1);
			Complex_Private B(6, -3);

			Complex_Private C = A + B;
			Assert::AreEqual(C.GetRe(), 10.0);
		}
	};
}
