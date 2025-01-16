#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

//class SoSimple
//{
//private:
//	int num1, num2;
//public:
//	SoSimple(int n1, int n2) : num1(n1), num2(n2)
//	{
//
//	}
//	SoSimple(SoSimple &copy) : num1(copy.num1), num2(copy.num2)
//	{
//		cout << "Called SoSimple(SoSimple &copy)" << endl;
//	}
//	void ShowSimpleData()
//	{
//		cout << num1 << endl;
//		cout << num2 << endl;
//	}
//};
//
//int main(void)
//{
//	SoSimple sim1(15, 30);
//	cout << "생성 및 초기화 직전" << endl;
//	//SoSimple sim2 = sim1;
//	SoSimple sim2(sim1);
//	cout << "생성 및 초기화 직후" << endl;
//	sim2.ShowSimpleData();
//	return 0;
//}




//class Person
//{
//private:
//	char *name;
//	int age;
//public:
//	Person(const char *myname, int myage)
//	{
//		size_t len = strlen(myname) + 1;
//		name = new char[len];
//		strcpy(name, myname);
//		age = myage;
//	}
//	void ShowPersonInfo()	const
//	{
//		cout << "이름 : " << name << endl;
//		cout << "나이 : " << age << endl;
//	}
//	~Person()
//	{
//		delete[]name;
//		cout << "called destructor!" << endl;
//	}
//};
//
//int main(void) {
//	Person man1("Lee dong woo", 29);
//	Person man2(man1);
//	man1.ShowPersonInfo();
//	man2.ShowPersonInfo();
//
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
//			break;
//		}
//	}
//}
//
//class NameCard
//{
//private:
//	char* name;
//	char* company;
//	char* phone;
//	int position;
//public:
//	NameCard(const char* name, const char* company, const char* phone, int pos) : position(pos)
//	{
//		this->name = new char[strlen(name) + 1];
//		this->company = new char[strlen(company) + 1];
//		this->phone = new char[strlen(phone) + 1];
//		strcpy(this->name, name);
//		strcpy(this->company, company);
//		strcpy(this->phone, phone);
//	}
//
//	NameCard(const NameCard& ref) : position(ref.position)
//	{
//		name = new char[strlen(ref.name) + 1];
//		company = new char[strlen(ref.company) + 1];
//		phone = new char[strlen(ref.phone) + 1];
//		strcpy(name, ref.name);
//		strcpy(company, ref.company);
//		strcpy(phone, ref.phone);
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
//		delete[] name;
//		delete[] company;
//		delete[] phone;
//
//		cout << "NameCard 객체 소멸자 호출!" << endl;
//	}
//};
//
//int main(void)
//{
//	NameCard manClerk("Lee", "ABCEng", "010-1111-2222", COMP_POS::CLERK);
//	NameCard copy1 = manClerk;
//	NameCard manSENIOR("Hong", "OrangeEng", "010-3333-4444", COMP_POS::SENIOR);
//	NameCard copy2 = manSENIOR;
//
//	copy1.ShowNameCardInfo();
//	copy2.ShowNameCardInfo();
//
//	return 0;
//}




//class SoSimple
//{
//private:
//	int num;
//public:
//	SoSimple(int n) :num(n)
//	{
//		cout << n << endl;
//	}
//	SoSimple(const SoSimple&copy) :num(copy.num)
//	{
//		cout << "Called SoSimple(const SoSimple& copy)" << endl;
//	}
//	void ShowData() {
//		cout << "num : " << num << endl;
//	}
//};
//
//void SimpleFuncObj(SoSimple ob) {
//	ob.ShowData();
//}
//
//int main(void)
//{
//	SoSimple obj(7);
//	cout << "함수 호출 전" << endl;
//	SimpleFuncObj(obj);
//	cout << "함수 호출 후" << endl;
//
//	return 0;
//}




//class SoSimple
//{
//private:
//	int num;
//public:
//	SoSimple(int n) :num(n)
//	{
//		cout << n << endl;
//	}
//	SoSimple(const SoSimple& copy) :num(copy.num)
//	{
//		cout << "Called SoSimple(const SoSimple& copy)" << endl;
//	}
//	SoSimple&AddNum(int n)
//	{
//		num += n;
//		return *this;
//	}
//	void ShowData()
//	{
//		cout << "num : " << num << endl;
//	}
//};
//
//SoSimple SimpleFuncObj(SoSimple ob)
//{
//	cout << "return 이전" << endl;
//	return ob;
//}
//
//int main(void)
//{
//	SoSimple obj(7);
//	SimpleFuncObj(obj).AddNum(30).ShowData();
//	obj.ShowData();
//	return 0;
//}







//class Temporary
//{
//private:
//	int num;
//public:
//	Temporary(int n) :num(n)
//	{
//		cout << "create obj : " << num << endl;
//	}
//	~Temporary()
//	{
//		cout << "destroy obj : " << num << endl;
//	}
//	void ShowTempInfo()
//	{
//		cout << "My num is " << num << endl;
//	}
//};
//
//int main(void)
//{
//	Temporary(100);
//	cout << "********************* after make!" << endl << endl;
//
//	Temporary(200).ShowTempInfo();
//	cout << "*********************** after make!" << endl << endl;
//
//	const Temporary &ref = Temporary(300);
//	cout << "******** end of main!" << endl << endl;
//	return 0;
//}





//class SoSimple
//{
//private:
//	int num;
//public:
//	SoSimple(int n) :num(n)
//	{
//		cout << "New Object :	" << this << endl;
//	}
//	SoSimple(const SoSimple& copy) :num(copy.num)
//	{
//		cout << "New Copy obj : " << this << endl;
//	}
//	~SoSimple()
//	{
//		cout << "Destroy obj : " << this << endl;
//	}
//};
//
//SoSimple SimpleFuncObj(SoSimple ob)
//{
//	cout << "Param ADR" << &ob << endl;
//	return ob;
//}
//
//int main(void)
//{
//	SoSimple obj(7);
//	SimpleFuncObj(obj);
//
//	cout << endl;
//	SoSimple tempRef = SimpleFuncObj(obj);
//	cout << "RETURN oBJ" << &tempRef << endl;
//
//	return 0;
//}



//class SoSimple
//{
//private:
//	int num;
//public:
//	SoSimple(int n):num(n)
//	{ }
//	SoSimple&AddNum(int n)
//	{
//		num += n;
//		return *this;
//	}
//	void ShowData()	const {
//		cout << "num : " << num << endl;
//	}
//};
//
//int main(void)
//{
//	const SoSimple obj(7);
//	obj.ShowData();
//	return 00;
//}



//class SoSimple
//{
//private:
//	int num;
//public:
//	SoSimple(int n):num(n)
//	{ }
//	SoSimple&AddNum(int n)
//	{
//		num += n;
//		return *this;
//	}
//	void SimpleFunc()
//	{
//		cout << "SimpleFunc : " << num << endl;
//	}
//	void SimpleFunc() const
//	{
//		cout << "const SimpleFunc : " << num << endl;
//	}
//};
//
//void YourFunc(const SoSimple &obj)
//{
//	obj.SimpleFunc();
//}
//
//int main(void)
//{
//	SoSimple obj1(2);
//	const SoSimple obj2(7);
//
//	obj1.SimpleFunc();
//	obj2.SimpleFunc();
//
//	YourFunc(obj1);
//	YourFunc(obj2);
//
//	return 0;
//}
//



