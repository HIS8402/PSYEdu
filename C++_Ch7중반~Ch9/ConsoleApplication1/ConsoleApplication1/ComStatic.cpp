#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

//void Counter()
//{
//	static int cnt;
//	cnt++;
//	cout << "Current cnt:" << cnt << endl;
//}
//
//int main(void)
//{
//	for (int i = 0; i < 10; i++)
//		Counter();
//	return 0;
//}



//int simObjCnt = 0;
//int cmxObjCnt = 0;
//
//class SoSimple
//{
//public:
//	SoSimple()
//	{
//		simObjCnt++;
//		cout << simObjCnt << "��° SoSimple ��ü" << endl;
//	}
//};
//
//class SoComplex
//{
//public:
//	SoComplex()
//	{
//		cmxObjCnt++;
//		cout << cmxObjCnt << "���� SoComplex ��ü" << endl;
//	}
//	SoComplex(SoComplex &copy)
//	{
//		cmxObjCnt++;
//		cout << cmxObjCnt << "��° SoComplex ��ü" << endl;
//	}
//};
//
//int main(void)
//{
//	SoSimple sim1;
//	SoSimple sim2;
//
//	SoComplex com1;
//	SoComplex com2 = com1;
//	SoComplex();
//
//	return 0;
//}




//class SoSimple
//{
//private:
//	static int simObjCnt;
//public:
//	SoSimple() {
//		simObjCnt++;
//		cout << simObjCnt << "��° SoSimple ��ü" << endl;
//	}
//};
//int SoSimple::simObjCnt = 0;
//
//
//
//class SoComplex
//{
//private:
//	static int cmxObjCnt;
//public:
//	SoComplex()
//	{
//		cmxObjCnt++;
//		cout << cmxObjCnt << "��° SoComplex ��ü" << endl;
//	}
//	SoComplex(SoComplex &copy)
//	{
//		cmxObjCnt++;
//		cout << cmxObjCnt << "��° SoComplex ��ü" << endl;
//	}
//};
//int SoComplex::cmxObjCnt = 0;
//
//
//
//int main(void)
//{
//	SoSimple sim1, sim2;
//	
//	SoComplex cmx1;
//	SoComplex cmx2 = cmx1;
//	SoComplex();
//	return 0;
//}




//class SoSimple
//{
//public:
//	static int simObjCnt;
//public:
//	SoSimple()
//	{
//		simObjCnt++;
//	}
//};
//int SoSimple::simObjCnt = 0;
//
//int main(void)
//{
//	cout << SoSimple::simObjCnt << "��° SoSimple ��ü" << endl;
//	SoSimple sim1, sim2;
//
//	cout << SoSimple::simObjCnt << "��° SoSimple ��ü" << endl;
//	cout << sim1.simObjCnt << "��° SoSimple ��ü" << endl;
//	cout << sim2.simObjCnt << "��° SoSimple ��ü" << endl;
//	return 0;
//}




//class CountryArea
//{
//public:
//	const static int RUSSIA = 1707540;
//	const static int CANADA = 998467;
//	const static int CHINA = 957290;
//	const static int SOUTH_KOREA = 9922;
//};
//
//int main(void)
//{
//	cout << "���þ� ���� : " << CountryArea::RUSSIA << "km" << endl;
//	cout << "ĳ���� ���� : " << CountryArea::CANADA << "km" << endl;
//	cout << "�߱� ���� : " << CountryArea::CHINA << "km" << endl;
//	cout << "�ѱ� ���� : " << CountryArea::SOUTH_KOREA << "km" << endl;
//}



//class SoSimple
//{
//private:
//	int num1;
//	mutable int num2;
//public:
//	SoSimple(int n1,int n2):num1(n1),num2(n2)
//	{ }
//	void ShowSimpleData()	const
//	{
//		cout << num1 << ", " << num2 << endl;
//	}
//	void CopyToNum2()	const
//	{
//		num2 = num1;
//	}
//};
//
//int main(void)
//{
//	SoSimple sm(1, 2);
//	sm.ShowSimpleData();
//	sm.CopyToNum2();
//	sm.ShowSimpleData();
//	return 0;
//}