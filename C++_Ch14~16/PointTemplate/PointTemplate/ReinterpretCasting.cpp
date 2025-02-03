#include<iostream>
using namespace std;


class SoSimple
{
public:
	virtual void ShowSimpleInfo()
	{
		cout << "SoSimple Base Class" << endl;
	}
};

class SoComplex :public SoSimple
{
public:
	void ShowSimpleInfo()
	{
		cout << "SoComplex Derived Class" << endl;
	}
};

int main(void)
{
	SoSimple simObj;
	SoSimple& ref = simObj;

	try
	{
		SoComplex& comRef = dynamic_cast<SoComplex&>(ref);
		comRef.ShowSimpleInfo();
	}
	catch (bad_cast expt)
	{
		cout << expt.what() << endl;
	}
	return 0;
}




//class SoSimple
//{
//public:
//	virtual void ShowSimpleInfo()
//	{
//		cout << "SoSimple Base Class" << endl;
//	}
//};
//
//class SoComplex :public SoSimple
//{
//public:
//	void ShowSimpleInfo()
//	{
//		cout << "SoComplex Derived Class" << endl;
//	}
//};
//
//int main(void)
//{
//	SoSimple*simPtr = new SoComplex;
//	SoComplex*comPtr = dynamic_cast<SoComplex*>(simPtr);
//	if (comPtr == NULL)
//		cout << "형 변환 실패" << endl;
//	else
//		comPtr->ShowSimpleInfo();
//	return 0;
//}




//class SoSimple
//{
//public:
//	virtual void ShowSimpleInfo()
//	{
//		cout << "SoSimple Base Class" << endl;
//	}
//};
//
//class SoComplex :public SoSimple
//{
//public:
//	void ShowSimpleInfo()
//	{
//		cout << "SoComplex Derived Class" << endl;
//	}
//};
//
//int main(void)
//{
//	SoSimple*simPtr = new SoComplex;
//	SoComplex*comPtr = dynamic_cast<SoComplex*>(simPtr);
//	comPtr->ShowSimpleInfo();
//	return 0;
//}




//int main(void)
//{
//	int n = 0x010203;
//	char*ptr = reinterpret_cast<char*>(&n);
//
//	for (int i = 0; i < sizeof(n); i++)
//		cout << static_cast<int>(*(ptr + i)) << endl;
//
//	return 0;
//}
