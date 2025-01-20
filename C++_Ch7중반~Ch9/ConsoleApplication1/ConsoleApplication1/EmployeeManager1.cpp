#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

//class PermanentWorker
//{
//private:
//	char name[100];
//	int salary;
//public:
//	PermanentWorker(const  char *name, int money)
//		: salary(money)  // salary �ʱ�ȭ
//	{
//		strcpy(this->name, name);  // �̸� ����
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
////SoDerived dr1; �� SoDerived() �� SoBase() ȣ�� �� SoDerived() ȣ��
////SoDerived dr2(12); �� SoDerived(int n) �� SoBase() ȣ�� �� SoDerived(int n) ȣ��
////SoDerived dr3(23, 24); �� SoBase(int n1) �� SoDerived(int n1, int n2) ȣ�� �� SoBase(int n1) ȣ�� �� SoDerived(int n2) ȣ��



//class SoBase
//{
//private:
//	int baseNum;
//public:
//	SoBase(int n) : baseNum(n)
//	{
//		cout << "SoBase() : " << baseNum << endl;
//	}
//	~SoBase()
//	{
//		cout << "~SoBase() : " << baseNum << endl;
//	}
//};
//
//class SoDerived : public SoBase
//{
//private:
//	int derivNum;
//public:
//	SoDerived(int n) :SoBase(n), derivNum(n)
//	{
//		cout << "SoDerived() :" << derivNum << endl;
//	}
//	~SoDerived()
//	{
//		cout << "~SoDerived() : " << "derivNum" << endl;
//	}
//};
//
//int main(void)
//{
//	SoDerived drv(15);
//	SoDerived drv2(27);
//	return 0;
//}




//class Person
//{
//private:
//	char *name;
//public:
//	Person(const char *myname)
//	{
//		name = new char[strlen(myname) + 1];
//		strcpy(name, myname);
//	}
//	~Person()
//		{
//			delete[]name;
//		}
//	void WhatYourName()	const {
//		cout << "My name is " << name << endl;
//	}
//};
//
//class UnivStudent : public Person
//{
//private:
//	const char*major;
//public:
//	UnivStudent(const char *myname, const char*mymajor) : Person(myname)
//	{
//		major = new char[strlen(mymajor) + 1];
//		//strcpy(major, mymajor);
//		strcpy (const_cast<char*>(major), mymajor);
//	}
//	~UnivStudent()
//	{
//		delete[]major;
//	}
//	void WhoAreYou() const {
//		WhatYourName();
//		cout << "My major is " << major << endl << endl;
//	}
//};
//
//int main(void)
//{
//	UnivStudent str1("Kim", "Mathmatics");
//	str1.WhoAreYou();
//	UnivStudent str2("HONG", "Physics");
//	str2.WhoAreYou();
//
//	return 0;
//}


//
//class Car
//{
//private:
//	int gasolineGauge;
//public:
//	Car(int gas) : gasolineGauge(gas) { }
//	int GetGasGauge()
//	{
//		return gasolineGauge;
//	}
//};
//
//class HybridCar : public Car
//{
//private:
//	int electricGauge;
//public:
//	HybridCar(int gas, int elec) : Car(gas), electricGauge(elec) { }
//	int GetElecHauge()
//	{
//		return electricGauge;
//	}
//};
//
//class HybridWaterCar : public HybridCar
//{
//private:
//	int waterGauge;
//public:
//	HybridWaterCar(int gas, int elec, int water) : HybridCar(gas, elec), waterGauge(water) { }
//	void ShowFCurrentGauge()
//	{
//		cout << "�ܿ� ���ָ� : " << GetGasGauge() << endl;
//		cout << "�ܿ� ���ⷮ : " << GetElecHauge() << endl;
//		cout << "�ܿ� ���ͷ� : " << waterGauge << endl;
//	}
//};
//
//int main(void)
//{
//	HybridWaterCar wCar(79, 65, 35);
//	wCar.ShowFCurrentGauge();
//	return 0;
//}




//class Base
//{
//private:
//	int num1;
//protected:
//	int num2;
//public:
//	int num3;
//
//	Base() : num1(1), num2(2), num3(3)
//	{ }
//};
//
//class Derived : public Base {};
//
//int main(void)
//{
//	Derived drv;
//	cout << drv.num3 << endl;
//	return 0;
//}



//class Computer
//{
//private:
//	const char* owner;
//public:
//	Computer(const char* name) : owner(name) { }
//	void Calculate()
//	{
//		cout << "��û ������ ����մϴ�." << endl;
//	}
//};
//
//class NotebookComp : public Computer
//{
//private:
//	int Battery;
//public:
//	NotebookComp(const char* name, int initChag) : Computer(name), Battery(initChag) { }
//	void Charging() { Battery += 5; }
//	void UseBattery() { Battery -= 1; }
//	void MovingCal()
//	{
//		if (GetBatteryInfo() < 1)
//		{
//			cout << "������ �ʿ��մϴ�." << endl;
//			return;
//		}
//		cout << "�̵��ϸ鼭 ";
//		Calculate();
//		UseBattery();
//	}
//	int GetBatteryInfo() { return Battery; }
//};
//
//class TabletNotebook : public NotebookComp
//{
//private:
//	const char* regstPenModel;
//public:
//	TabletNotebook(const char* name, int initChag, const char* pen)
//		: NotebookComp(name, initChag), regstPenModel(pen) { }
//	void Write(const char* penInfo)
//	{
//		if (GetBatteryInfo() < 1)
//		{
//			cout << "������ �ʿ��մϴ�." << endl;
//			return;
//		}
//		if (strcmp(regstPenModel, penInfo) != 0)
//		{
//			cout << "��ϵ� ���� �ƴմϴ�." << endl;
//			return;
//		}
//		cout << "�ʱ� ������ ó���մϴ�." << endl;
//		UseBattery();
//	}
//};
//
//int main(void)
//{
//	NotebookComp nc("�̼���", 5);
//	TabletNotebook tn("������", 5, "ISE-241-242");
//	nc.MovingCal();
//	tn.Write("ISE-241-242");
//	return 0;
//}
////NotebookComp nc("�̼���", 5); -> NotebookComp ��ü ���� (�θ� Computer ������ ȣ�� �� Battery �ʱ�ȭ)
////TabletNotebook tn("������", 5, "ISE-241-242"); -> TabletNotebook ��ü ����(�θ� NotebookComp ������ ȣ�� �� regstPenModel �ʱ�ȭ)
////nc.MovingCal(); -> NotebookComp�� MovingCal() �Լ� ȣ��
////tn.Write("ISE-241-242"); -> TabletNotebook�� Write() �Լ� ȣ��




//class Gun
//{
//private:
//	int bullet;
//public:
//	Gun(int bnum) : bullet (bnum)
//	{}
//	void Shot()
//	{
//		cout << "BBANG!" << endl;
//		bullet--;
//	}
//};
//
//class Police :public Gun
//{
//private:
//	int handcuffs;
//public:
//	Police(int bnum,int bcuff) : Gun(bnum),handcuffs(bcuff)
//	{}
//	void PutHandcuff()
//	{
//		cout << "SNAP!" << endl;
//		handcuffs--;
//	}
//};
//
//int main(void)
//{
//	Police pman(5, 3);
//	pman.Shot();
//	pman.PutHandcuff();
//	return 0;
//
//}




//class Gun
//{
//private:
//	int bullet;
//public:
//	Gun(int bnum) : bullet(bnum)
//	{}
//	void Shot()
//	{
//		cout << "BBANG!" << endl;
//		bullet--;
//	}
//};
//
//class Police :public Gun
//{
//private:
//	int handcuffs;
//	Gun *pistol;
//public:
//	Police(int bnum, int bcuff) : Gun(bnum), handcuffs(bcuff)
//	{
//		if (bnum > 0)
//			pistol = new Gun(bnum);
//		else
//			pistol = NULL;
//	}
//	void PutHandcuff()
//	{
//		cout << "SNAP!" << endl;
//		handcuffs--;
//	}
//	void Shot()
//	{
//		if (pistol == NULL)
//			cout << "Hut BBANG!" << endl;
//		else
//			pistol->Shot();
//	}
//	~Police()
//	{
//		if (pistol != NULL)
//			delete pistol;
//	}
//};
//
//int main(void)
//{
//	Police pman(5, 3);
//	pman.Shot();
//	pman.PutHandcuff();
//
//	Police pman2(0, 3);
//	pman2.Shot();
//	pman2.PutHandcuff();
//	return 0;
//}



//class Rectangle
//{
//private:
//	int Width, Height;
//public:
//	Rectangle(int wid,int hei):Width(wid),Height(hei)
//	{}
//	void ShowAreaInfo()
//	{
//		cout << "���� : " << Width * Height << endl;
//	}
//};
//
//class Square :public Rectangle
//{
//public:
//	Square(int side):Rectangle(side,side)
//	{}
//};
//
//int main(void)
//{
//	Rectangle rec(4, 3);
//	rec.ShowAreaInfo();
//
//	Square sqr(7);
//	sqr.ShowAreaInfo();
//	return 0;
//}




//class Book
//{
//private:
//	const char *title;
//	const char *isbn;
//	int price;
//public:
//	Book(const char *title, const char* isbn, int value) : title(title), isbn(isbn), price(value) { }
//	void ShowBookInfo()
//	{
//		cout << "���� : " << title << endl;
//		cout << "ISBN : " << isbn << endl;
//		cout << "���� : " << price << endl;
//	}
//};
//
//class EBook : public Book
//{
//private:
//	const char *DRMKey;
//public:
//	EBook(const char *title, const char *isbn, int value, const char* key) : Book(title, isbn, value), DRMKey(key) { }
//	void ShowEBookInfo()
//	{
//		ShowBookInfo();
//		cout << "����Ű : " << DRMKey << endl;
//	}
//};
//
//int main(void)
//{
//	Book book("���� C++", "555-12345-9=890-0", 20000);
//	book.ShowBookInfo();
//	cout << endl;
//	EBook ebook("���� C++ ebook", "555-12345-890-1", 10000, "fdx0w0i8kiw");
//	ebook.ShowEBookInfo();
//	return 0;
//}


