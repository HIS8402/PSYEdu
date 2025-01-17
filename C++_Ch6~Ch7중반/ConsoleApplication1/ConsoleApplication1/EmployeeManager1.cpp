#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

//class PermanentWorker
//{
//private:
//	char name[100];
//	int salary;
//public:
//	PermanentWorker(const  char *name, int money)
//		: salary(money)  // salary 초기화
//	{
//		strcpy(this->name, name);  // 이름 복사
//	}
//
//	int GetPay() const
//	{
//		return salary;
//	}
//
//	void ShowSalaryInfo() const {
//		cout << "name : " << name << endl;
//		cout << "salary : " << GetPay() << endl << endl;
//	}
//};
//
//class EmployeeHandler
//{
//private:
//	PermanentWorker* empList[50];
//	int empNum;
//public:
//	EmployeeHandler() : empNum(0) {}
//
//	void AddEmployee(PermanentWorker* emp) {
//		empList[empNum++] = emp;
//	}
//
//	void ShowAllSalaryInfo() const {
//		for (int i = 0; i < empNum; i++) {
//			empList[i]->ShowSalaryInfo();
//		}
//	}
//
//	void ShowTotalSalary() const {
//		int sum = 0;
//		for (int i = 0; i < empNum; i++)
//			sum += empList[i]->GetPay();
//		cout << "salary sum : " << sum << endl;
//	}
//
//	~EmployeeHandler() {
//		for (int i = 0; i < empNum; i++) {
//			delete empList[i];
//		}
//	}
//};
//
//int main(void)
//{
//	EmployeeHandler handler;
//
//	handler.AddEmployee(new PermanentWorker("KIM", 1000));
//	handler.AddEmployee(new PermanentWorker("LEE", 1500));
//	handler.AddEmployee(new PermanentWorker("JUN", 2000));
//
//	handler.ShowAllSalaryInfo();
//	handler.ShowTotalSalary();
//
//	return 0;
//}

//class Person
//{
//private:
//	int age;
//	char name[50];
//public:
//	Person(int myage, const char *myname) :age(myage)
//	{
//		strcpy(name, myname);
//	}
//	void WhatYourName()	const
//	{
//		cout << "My name is" << name << endl;
//	}
//	void HowOldAreYou()	const
//	{
//		cout << "I'm " << age << "years old" << endl;
//	}
//};
//
//class UnivStudent : public Person
//{
//private:
//	char major[50];
//public:
//	UnivStudent(const char*myname, int myage, const char*mymajor) : Person(myage, myname)
//	{
//		strcpy(major, mymajor);
//	}
//	void WhoAreYou()	const {
//		WhatYourName();
//		HowOldAreYou();
//		cout << "My major is " << major << endl << endl;
//	}
//};
//
//int main(void)
//{
//	UnivStudent ustd1("Lee", 22, "Computer eng.");
//	ustd1.WhoAreYou();
//
//	UnivStudent ustd2("YOON", 21, "Electronic eng.");
//	ustd2.WhoAreYou();
//
//	return 0;
//}


//class SoBase
//{
//private:
//	int baseNum;
//public:
//	SoBase() :baseNum(20)
//	{
//		cout << "SoNase()" << endl;
//	}
//	SoBase(int n) :baseNum(n)
//	{
//		cout << "SoBase(int n)" << endl;
//	}
//	void ShowBaseData()
//	{
//		cout << baseNum << endl;
//	}
//};
//
//class SoDerived : public SoBase
//{
//private:
//	int derivNum;
//public:
//	SoDerived() :derivNum(30)
//	{
//		cout << "SoDerived()" << endl;
//	}
//	SoDerived(int n) : derivNum(n)
//	{
//		cout << "SoDeived(int n)" << endl;
//	}
//	SoDerived(int n1, int n2) :SoBase(n1), derivNum(n2)
//	{
//		cout << "SoDerived(int n1, int n2" << endl;
//	}
//	void ShowDerivData()
//	{
//		ShowBaseData();
//		cout << derivNum << endl;
//	}
//};
//
//int main(void)
//{
//	cout << "case1...... " << endl;
//	SoDerived dr1;
//	dr1.ShowDerivData();
//	cout << "............ " << endl;
//	cout << "case2...... " << endl;
//	SoDerived dr2(12);
//	dr2.ShowDerivData();
//	cout << "........................" << endl;
//	cout << "case3......" << endl;
//	SoDerived dr3(23, 24);
//	dr3.ShowDerivData();
//
//	return 0;
//}
//
//
////SoDerived dr1; → SoDerived() → SoBase() 호출 → SoDerived() 호출
////SoDerived dr2(12); → SoDerived(int n) → SoBase() 호출 → SoDerived(int n) 호출
////SoDerived dr3(23, 24); → SoBase(int n1) → SoDerived(int n1, int n2) 호출 → SoBase(int n1) 호출 → SoDerived(int n2) 호출