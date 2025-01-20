#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;






//class Base
//{
//public:
//	Base() { cout << "Base Constructor" << endl; }
//	void SimpleFunc() { cout << "BaseOne" << endl; }
//};
//
//class MiddleDerivedOne : virtual public Base
//{
//public:
//	MiddleDerivedOne() :Base()
//	{
//		cout << "MiddleDerivedOne Constructor" << endl;
//	}
//	void MiddleFuncOne()
//	{
//		SimpleFunc();
//		cout << "MiddleDerivedOne" << endl;
//	}
//};
//
//class MiddleDerivedTwo : virtual public Base
//{
//public:
//	MiddleDerivedTwo() :Base()
//	{
//		cout << "MiddleDerivedTwo Constructor" << endl;
//	}
//	void MiddleFuncTwo()
//	{
//		SimpleFunc();
//		cout << "MiddleDerivedTwo" << endl;
//	}
//};
//
//class LastDerived : public MiddleDerivedOne, public MiddleDerivedTwo
//{
//public:
//	LastDerived() :MiddleDerivedOne(), MiddleDerivedTwo()
//	{
//		cout << "LastDerived Constructor" << endl;
//	}
//	void ComplexFunc()
//	{
//		MiddleFuncOne();
//		MiddleFuncTwo();
//		SimpleFunc();
//	}
//};
//
//int main(void)
//{
//	cout << "按眉 积己 傈 . . . . ." << endl;
//	LastDerived ldr;
//	cout << " 按眉 积己 饶 . . . . ." << endl;
//	ldr.ComplexFunc();
//	return 0;
//}




//class BaseOne
//{
//public:
//	void SimpleFunc() { cout << "BaseOne" << endl; }
//};
//
//class BaseTwo
//{
//public:
//	void SimpleFunc() { cout << "BaseTwo" << endl; }
//};
//
//class MultiDerived : public BaseOne, protected BaseTwo
//{
//public:
//	void ComplexFunc()
//	{
//		BaseOne::SimpleFunc();
//		BaseTwo::SimpleFunc();
//	}
//};
//
//int main(void)
//{
//	MultiDerived mdr;
//	mdr.ComplexFunc();
//	return 0;
//}



//class BaseOne
//{
//public:
//	void SimpleFuncOne() { cout << "BaseOne" << endl; }
//};
//
//class BaseTwo
//{
//public:
//	void SimpleFuncTwo() { cout << "BaseTwo" << endl; }
//};
//
//class MultiDerived :public BaseOne, protected BaseTwo
//{
//public:
//	void ComplexFunc()
//	{
//		SimpleFuncOne();
//		SimpleFuncTwo();
//	}
//};
//
//int main(void)
//{
//	MultiDerived mdr;
//	mdr.ComplexFunc();
//	return 0;
//}



//class AAA
//{
//private:
//	int num1;
//public:
//	virtual void Func1() { cout << "Func1" << endl; }
//	virtual void Func2() { cout << "Func2" << endl; }
//};
//
//class BBB :public AAA
//{
//private:
//	int num2;
//public:
//	virtual void Func1() { cout << "BBB::Func1" << endl; }
//	void Func3() { cout << "Func3" << endl; }
//};
//
//int main(void)
//{
//	AAA* aptr = new AAA();
//	aptr->Func1();
//
//	BBB * bptr = new BBB();
//	bptr->Func1();
//
//	return 0;
//}




//typedef struct Data
//{
//	int data;
//	void(*ShowData)(Data*);
//	void(*Add)(Data*, int);
//}Data;
//
//void ShowData(Data*THIS) {	cout << "Data : " << THIS->data << endl;}
//void Add(Data*THIS, int num) { THIS->data += num; }
//
//int main(void)
//{
//	Data obj1 = { 15,ShowData,Add };
//	Data obj2 = { 7,ShowData,Add };
//
//	obj1.Add(&obj1, 17);
//	obj2.Add(&obj2, 9);
//	obj1.ShowData(&obj1);
//	obj2.ShowData(&obj2);
//
//	return 0;
//}




//class Data
//{
//private:
//	int data;
//public:
//	Data(int num):data(num)
//	{}
//	void ShowData() { cout << "Data : " << data << endl; }
//	void Add(int num) { data += num; }
//};
//
//int main(void)
//{
//	Data obj(15);
//	obj.Add(17);
//	obj.ShowData();
//	return 0;
//}



//class Employee
//{
//private:
//	char name[100];
//public:
//	Employee(char *name)
//	{
//		strcpy(this->name, name);
//	}
//	void ShowYourName() const
//	{
//		cout << "name : " << name << endl;
//	}
//	virtual int GetPay()	const
//	{  }
//};
//
//class PermanentWorker : public Employee
//{};




//class First
//{
//public:
//	virtual void MyFunc() { cout << "FirstFunc" << endl; }
//};
//
//class Second :public First
//{
//public:
//	virtual void MyFunc() { cout << "SecondFunc" << endl; }
//};
//
//class Third :public Second
//{
//public:
//	virtual void MyFunc() { cout << "ThirdFunc" << endl; }
//};
//
//int main(void)
//{
//	Third * tptr = new Third();
//	Second *sptr = tptr;
//	First*fptr = sptr;
//
//	fptr->MyFunc();
//	sptr->MyFunc();
//	tptr->MyFunc();
//
//	delete tptr;
//
//	return 0;
//}




//class First
//{
//public:
//	void MyFunc() { cout << "FirstFunc" << endl; }
//};
//
//class Second :public First
//{
//public:
//	void MyFunc() { cout << "SecondFunc" << endl; }
//};
//
//class Third :public Second
//{
//public:
//	void MyFunc() { cout << "ThirdFunc" << endl; }
//};
//
//int main(void)
//{
//	Third*tptr = new Third();
//	Second *sptr = tptr;
//	First*fptr = sptr;
//
//	fptr->MyFunc();
//	sptr->MyFunc();
//	tptr->MyFunc();
//	delete tptr;
//
//	return 0;
//}




//class Employee
//{
//private:
//	const char* name;
//public:
//	Employee(const char* name)
//	{
//		this->name = name;
//	}
//	virtual void ShowYourName() const {
//		cout << "name : " << name << endl;
//	}
//	virtual ~Employee() {}
//};
//
//class PermanentWorker : public Employee
//{
//private:
//	int salary;
//public:
//	PermanentWorker(const char* name, int money) : Employee(name), salary(money)
//	{ }
//	int GetPay() const
//	{
//		return salary;
//	}
//	void ShowSalaryInfo() const
//	{
//		ShowYourName();
//		cout << "salary : " << GetPay() << endl << endl;
//	}
//};
//
//class EmployeeHandler
//{
//private:
//	Employee* empList[50];
//	int empNum;
//public:
//	EmployeeHandler() : empNum(0) { }
//	void AddEmployee(Employee* emp)
//	{
//		empList[empNum++] = emp;
//	}
//	void ShowAllSalaryInfo() const
//	{
//		for (int i = 0; i < empNum; i++) {
//			PermanentWorker* pw = dynamic_cast<PermanentWorker*>(empList[i]);
//			if (pw) {
//				pw->ShowSalaryInfo();
//			}
//		}
//	}
//	void ShowTotalSalary() const {
//		int sum = 0;
//		for (int i = 0; i < empNum; i++) {
//			PermanentWorker* pw = dynamic_cast<PermanentWorker*>(empList[i]);
//			if (pw) {
//				sum += pw->GetPay();
//			}
//		}
//		cout << "salary sum : " << sum << endl;
//	}
//	~EmployeeHandler()
//	{
//		for (int i = 0; i < empNum; i++)
//			delete empList[i];
//	}
//};
//
//int main(void)
//{
//	EmployeeHandler handler;
//	handler.AddEmployee(new PermanentWorker("KIN", 1000));
//	handler.AddEmployee(new PermanentWorker("LEE", 1500));
//	handler.AddEmployee(new PermanentWorker("JUN", 2000));
//
//	handler.ShowAllSalaryInfo();
//
//	handler.ShowTotalSalary();
//
//	return 0;
//}










//class Person
//{
//public:
//	void Sleep() { cout << "Sleep" << endl; }
//};
//class Student : public Person
//{
//public:
//	void Study() { cout << "Study" << endl; }
//};
//class PartTimeStudent :public Student
//{
//public:
//	void Work() { cout << "Work" << endl; }
//};
//
//int main(void)
//{
//	Person *ptr1 = new Student();
//	Person* ptr2 = new PartTimeStudent();
//	Student* ptr3 = new PartTimeStudent();
//	ptr1->Sleep();
//	ptr2->Sleep();
//	ptr3->Study();
//	delete ptr1;
//	delete ptr2;
//	delete ptr3;
//
//	return 0;
//}