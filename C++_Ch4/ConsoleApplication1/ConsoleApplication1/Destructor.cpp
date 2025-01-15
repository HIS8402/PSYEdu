#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

//class Person
//{
//private:
//	char* name;
//	int age;
//
//public:
//	Person(const char* myname, int myage) { 
//		size_t len = strlen(myname) + 1;
//		name = new char[len];
//		strcpy(name, myname);
//		age = myage;
//	}
//
//	void ShowPersonInfo() const {
//		cout << "이름 : " << name << endl;
//		cout << "나이 : " << age << endl;
//	}
//
//	~Person() {
//		delete[] name;
//		cout << "called destructor!" << endl;
//	}
//};
//
//int main(void)
//{
//	Person man1("Lee dong woo", 29);
//	Person man2("Jang dong gun", 41);
//	man1.ShowPersonInfo();
//	man2.ShowPersonInfo();
//	return 0;
//}







//class Point
//{
//private:
//	int xpos, ypos;
//public:
//	Point(int x, int y) :xpos(x),ypos(y) { }
//	void ShowPointInfo()	const
//	{
//		cout << xpos << ", " << ypos << endl;
//
//	}
//};
//
//class Circle
//{
//private:
//	int rad;
//	Point center;
//public:
//	Circle(int x, int y, int r) : center(x,y)	{
//		rad = r;
//	}
//	void ShowCircleInfo()	const {
//		cout << "radisu : " << rad  << endl;
//		center.ShowPointInfo();
//	}
//
//};
//
//class Ring {
//private:
//	Circle inCircle;
//	Circle outCircle;
//public:
//	Ring(int inX, int inY,int inR, int outX,int outY, int outR) : inCircle(inX, inY, inR),outCircle(outX,outY,outR) { }
//	void ShowRingInfo()	const {
//		cout << "Inner Circle Info" << endl;
//		inCircle.ShowCircleInfo();
//		cout << "Outter Circle Info" << endl;
//		outCircle.ShowCircleInfo();
//	}
//};
//
//int main(void)
//{
//	Ring ring(1, 1, 4, 2, 2, 9);
//	ring.ShowRingInfo();
//	return 0;
//}






//namespace COMP_POS
//{
//	enum { CLERK, SENIOR, ASSIST, MANAGER };
//
//	void ShowPositionInfo(int pos)
//	{
//		switch (pos)
//		{
//		case CLERK:
//			cout << "사원" << endl;
//			break;
//		case SENIOR:
//			cout << "주임" << endl;
//			break;
//		case ASSIST:
//			cout << "대리" << endl;
//			break;
//		case MANAGER:
//			cout << "과장" << endl;
//		}
//	}
//}
//
//class NameCard
//{
//private:
//	const char* name;
//	const char* company;
//	const char* phone;
//	int position;
//public:
//	NameCard(const char* _name, const char* _company, const char* _phone, int pos) : position(pos)
//	{
//		name = _name;
//		company = _company;
//		phone = _phone;
//	}
//
//	void ShowNameCardInfo()
//	{
//		cout << "이름 : " << name << endl;
//		cout << "회사 : " << company << endl;
//		cout << "전화번호 : " << phone << endl;
//		cout << "직급 : ";
//		COMP_POS::ShowPositionInfo(position);
//		cout << endl;
//	}
//
//	~NameCard()
//	{
//		cout << "NameCard 객체 소멸자 호출!" << endl;
//	}
//};
//
//int main(void)
//{
//	NameCard manClerk("Lee", "ABCEng", "010-1111-2222", COMP_POS::CLERK);
//	NameCard manSENIOR("Hong", "OrangeEng", "010-3333-4444", COMP_POS::SENIOR);
//	NameCard manAssist("Kim", "SoGoodComp", "010-5555-6666", COMP_POS::ASSIST);
//
//	manClerk.ShowNameCardInfo();
//	manSENIOR.ShowNameCardInfo();
//	manAssist.ShowNameCardInfo();
//
//	return 0;
//}








//class Person
//{
//private:
//	char * name;
//	int age;
//public:
//	Person(char * myname, int myage)
//	{
//		int len = strlen(myname) + 1;
//		name = new char[len];
//		strcpy(name, myname);
//		age = myage;
//	}
//	Person()
//	{
//		name = NULL;
//		age = 0;
//		cout << "called Person()" << endl;
//	}
//	void SetPersonInfo(char* myname, int myage)
//	{
//		name = myname;
//		age = myage;
//	}
//	void ShowPersonInfo()	const {
//		cout << "이름 : " << name << ", ";
//		cout << "나이 : " << age << endl;
//	}
//	~Person()
//	{
//		delete[]name;
//		cout << "called destructor!" << endl;
//	}
//};
//
//int main(void)
//{
//	Person parr[3];
//	char namestr[100];
//	char * strptr;
//	int age, len;
//
//	for (int i = 0; i < 3; i++)
//	{
//		cout << "이름 : ";
//		cin >> namestr;
//		cout << "나이 : ";
//		cin >> age;
//		len = strlen(namestr) + 1;
//		strptr = new char[len];
//		strcpy(strptr, namestr);
//		parr[i].SetPersonInfo(strptr, age);
//	}
//	parr[0].ShowPersonInfo();
//	parr[1].ShowPersonInfo();
//	parr[2].ShowPersonInfo();
//
//	return 0;
//}








//class Person
//{
//private:
//	char * name;
//	int age;
//public:
//	Person(char * myname, int myage)
//	{
//		int len = strlen(myname) + 1;
//		name = new char[len];
//		strcpy(name, myname);
//		age = myage;
//	}
//	Person()
//	{
//		name = NULL;
//		age = 0;
//		cout << "called Person()" << endl;
//	}
//	void SetPersonInfo(char* myname, int myage)
//	{
//		name = myname;
//		age = myage;
//	}
//	void ShowPersonInfo()	const {
//		cout << "이름 : " << name << ", ";
//		cout << "나이 : " << age << endl;
//	}
//	~Person()
//	{
//		delete[]name;
//		cout << "called destructor!" << endl;
//	}
//};
//
//int main(void)
//{
//	Person *parr[3];
//	char namestr[100];
//	int age;
//
//	for (int i = 0; i < 3; i++)
//	{
//		cout << "이름 : ";
//		cin >> namestr;
//		cout << "나이 : ";
//		cin >> age;
//		parr[i] = new Person(namestr, age);
//	}
//
//	parr[0]->ShowPersonInfo();
//	parr[1]->ShowPersonInfo();
//	parr[2]->ShowPersonInfo();
//	delete parr[0];
//	delete parr[1];
//	delete parr[2];
//
//	return 0;
//}

