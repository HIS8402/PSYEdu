//// ConsoleApplication1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
////
//#define _CRT_SECURE_NO_WARNINGS
//
//#include <iostream>
//#include <cstdio>
//#include <string.h>
//#include <stdlib.h>
//#include <time.h>
//#include <cstring>
//using namespace std;
//
////void m1(void) {
////	std::cout << "call1" << std::endl;
////}
////
////void m2(char c) {
////	std::cout << "call2" << std::endl;
////}
////
////void m3(int a, int b) {
////	std::cout << "call3" << std::endl;
////}
//
//
//
//
////int  a(int n1 = 1, int n2 = 2) {
////	return n1 + n2;
////}
//
//
//
////int a(int n1 = 1, int n2 = 2);
//
//
//
////int BX(int length, int width = 1, int height = 1);
//
//
//
//
////inline int SQUARE(int x) {
////	return x * x;
////}
//
//
////namespace BestComImp1
////{
////	void SimpleFunc(void);
////}
////
////namespace ProgComImp1
////{
////	void SimpleFunc(void);
////}
//
//
//
////namespace Hybrid {
////	void HybFunc(void) {
////		std::cout << "asd" << std::endl;
////		std::cout << "zxfczxc" << std::endl;
////	}
////}
//
//
//
////using std::cin;
////using std::cout;
////using std::endl;
//
//
////namespace AAA {
////	namespace BBB{
////		namespace CCC {
////			int n1;
////			int n2;
////		}
////	}
////}
//
//
//
////bool IsPositive(int n) {
////	if (n < 0)
////		return false;
////	else
////		return true;
////}
//
//
//
//
////void SwapByRef2(int &ref1, int &ref2) {
////	int temp = ref1;
////	ref1 = ref2;
////	ref2 = temp;
////}
//
//
//
//
//
//
////void a(int &n1) {
////	n1++;
////}
////void b(int &n2) {
////	n2++;
////}
//
//
//
//
////int& RefRetFuncOne(int &ref) {
////	ref++;
////	return ref;
////}
//
//
//
//
////int& RefRetFuncOne(int &ref) {
////	ref++;
////	return ref;
////}
//
//
//
//
////char * MakeSatrAdr(int len) {
////	char*str = (char*)malloc(sizeof(char)*len);
////	return str;
////}
//
//
//
////char * MakeStrAdr(int len) {
////	char*str = new char[len];
////	return str;
////}
//
//
//
//
//
//
////class Simple
////{
////public:
////	Simple() {
////		cout << "asd" << endl;
////	}
////};
//
//
//
//
//
////#define ID_LEN	20
////#define MAX_SPD	200
////#define FUEL_STEP	2
////#define ACC_STEP	10
////#define	BRK_STEP	10
////
////struct Car
////{
////	char gamerID[ID_LEN];
////	int fuelGauge;
////	int curSpeed;
////};
////
////void ShowCarState(const Car &car) {
////	cout << "소유자 ID" << car.gamerID << endl;
////	cout << "연료량 : " << car.fuelGauge << "%" << endl;
////	cout << "현재 속도 : " << car.curSpeed << "km/s" << endl;
////}
////
////void Accel(Car &car) {
////	if (car.fuelGauge <= 0)
////		return;
////	else
////		car.fuelGauge -= FUEL_STEP;
////
////	if (car.curSpeed + ACC_STEP >= MAX_SPD) {
////		car.curSpeed = MAX_SPD;
////		return;
////	}
////	car.curSpeed += ACC_STEP;
////}
////
////void Break(Car &car) {
////	if (car.curSpeed < BRK_STEP)
////	{
////		car.curSpeed = 0;
////		return;
////	}
////	car.curSpeed -= BRK_STEP;
////}
//
//
//
//
//
////struct Point {
////	int xpos, ypos;
////
////	void MovePos(int x, int y) {
////		xpos += x;
////		ypos += y;
////	}
////	void AddPoint(const Point &pos) {
////		xpos += pos.xpos;
////		ypos += pos.ypos;
////	}
////	void ShowPosition() {
////		cout << "[" << xpos << " ," << ypos << "]" << endl;
////	}
////};
//
//
//
//
////namespace CAR_CONST
////{
////	enum {
////		ID_LEN = 20, MAX_SPD = 200, FUEL_STEP = 2, ACC_STEP = 10, BRK_STEP = 10
////	};
////	
////}
////
////class Car
////{
////private:
////	char gamerID[CAR_CONST::ID_LEN];
////	int fuelGauge;
////	int curSpeed;
////public:
////	void InitMembers(char *ID, int fuel);
////	void ShowCarState();
////	void Accel();
////	void Break();
////};
////
////void Car::InitMembers(char *ID, int fuel)
////{
////	strcpy(gamerID, ID);
////	fuelGauge = fuel;
////	curSpeed = 0;
////}
////
////void::Car::ShowCarState() {
////	cout << "소유자ID : " << gamerID << endl;
////	cout << "연료량 : " << fuelGauge << "%" << endl;
////	cout << "현재 속도 : " << curSpeed << "km/s" << endl;
////}
////
////void Car::Accel() {
////	if (fuelGauge <= 0)
////		return;
////	else
////		fuelGauge -= CAR_CONST::FUEL_STEP;
////
////	if ((curSpeed += CAR_CONST::ACC_STEP) >= CAR_CONST::MAX_SPD)
////	{
////		curSpeed = CAR_CONST::MAX_SPD;
////		return;
////	}
////	curSpeed += CAR_CONST::ACC_STEP;
////}
////
////void Car::Break() {
////	if (curSpeed < CAR_CONST::BRK_STEP) {
////		curSpeed = 0;
////		return;
////	}
////	curSpeed -= CAR_CONST::BRK_STEP;
////}
//
//
//
////void My(void)
////{
////	cout << "My Fuc(void) called" << endl;
////}
////
////void My(char c)
////{
////	cout << "MyFuc(char c) called" << endl;
////}
////
////void My(int a, int b)
////{
////	cout << "MyFuc(int a, int b) called"<<endl;
////}
//
//
////void swap(int* a, int* b) {
////	int temp = *a;
////	*a = *b;
////	*b = temp;
////}
////
////void swap(char* ch1, char* ch2) {
////	char temp = *ch1;
////	*ch1 = *ch2;
////	*ch2 = temp;
////}
////
////void swap(double  *a, double *b) {
////	double temp = *a;
////	*a = *b;
////	*b = temp;
////}
//
//
//
////int Addr(int n1 = 1, int n2 = 2) {
////	return n1 + n2;
////}
//
//
//
////int Adder(int n1 = 1, int n2 = 2);
//
//
////int Box(int length, int width = 1, int height = 1);
//
//
////inline int SQUARE(int x) {
////	return x * x;
////}
//
//
////namespace ad {
////	void SimpleFunc(void) {
////		cout << "BestCom이 정의한 함수" << endl;
////	}
////}
////
////namespace as {
////	void SimpleFunc(void) {
////		cout << "ProgCom이 정의한 함수" << endl;
////	}
////}
//
//
//
////namespace Hybird {
////	void HybFunc(void) {
////		cout << "So simple function!" << endl;
////		cout << "In namespace Hybrid!" << endl;
////	}
////}
//
//
//
////namespace AAA {
////	namespace BBB {
////		namespace CCC {
////			int n1, n2;
////		}
////	}
////}
//
//
//
////bool Ispositive(int num) {
////	if (num < 0) {
////		return false;
////	}
////	else
////		return true;
////}
//
//
//
////void SwapByRef2(int &ref1, int & ref2) {
////	int temp = ref1;
////	ref1 = ref2;
////	ref2 = temp;
////}
//
////
////int &RefRetFuncOne(int &ref) {
////	ref++;
////	return ref;
////}
//
//
////int &RefRetFuncOne(int&ref) {
////	ref++;
////	return ref;
////}
////
////
////int RefRetFuncTwo(int &ref)
////{
////	ref++;
////	return ref;
////}
//
//
////char * MakeStrDar(int len) {
////	char * str = (char*)malloc(sizeof(char)*len);
////	return str;
////}
//
//
//
////char * MakeStrAdr(int len) {
////	char*str = new char[len];
////	return str;
////}
//
//
//
////class Simple
////{
////public:
////	Simple()
////	{
////		cout << "I'm simple constructor!" << endl;
////	}
////};
//
//
////typedef struct __Point{
////	int xpos, ypos;
////} Point;
////
////Point& PntAdder(const Point &p1, const Point &p2) {
////	Point*pptr = new Point;
////	pptr->xpos = p1.xpos + p2.xpos;
////	pptr->ypos = p1.ypos + p2.ypos;
////	return *pptr;
////}
//
//
////void swap(int &ref1, int &ref2) {
////	int temp = ref1;
////	ref1 = ref2;
////	ref2 = temp;
////}
//
////char *MakeStrAdr(int len) {
////	char*str = (char*)malloc(sizeof(char)*len);
////	return str;
////}
//
//
////char * MakeStrAdr(int len)
////{
////	/*char *str = (char*)malloc(sizeof(char)*len);*/
////	//char *str = new char[len];
////	//return str;
////}
//
//
////void swap(int &a, int &b) {
////	int temp = a;
////	a = b;
////	b = temp;
////}
//
//
////#define ID_LEN	20
////#define MAX_SPD	200
////#define FUEL_STEP	2
////#define ACC_STEP	10
////#define BRK_STEP	10
////
////struct Car
////{
////	char gamerID[ID_LEN];
////	int fuelGauge;
////	int curSpeed;
////};
////
////void ShowCarState(const Car &car)
////{
////	cout << "소유자ID : " << car.gamerID << endl;
////	cout << "연로량 : " << car.fuelGauge << "%" << endl;
////	cout << "현재 속도 : " << car.curSpeed << "km/s" << endl << endl;
////}
////
////void Accel(Car &car) {
////	if (car.fuelGauge <= 0)
////		return;
////	else
////		car.fuelGauge -= FUEL_STEP;
////
////	if (car.curSpeed + ACC_STEP >= MAX_SPD) {
////		car.curSpeed = MAX_SPD;
////		return;
////	}
////}
////
////void Break(Car &car) {
////	if (car.curSpeed < BRK_STEP) {
////		car.curSpeed = 0;
////		return;
////	}
////	car.curSpeed -= BRK_STEP;
////}
//
//
//
////#define ID_LEN	20
////#define MAX_SPD	200
////#define FUEL_STEP	2
////#define ACC_STEP	10
////#define BRK_STEP	10
////
////struct Car
////{
////	char gamerID[ID_LEN];
////	int fuelGauge;
////	int curSpeed;
////
////	void ShowCarState() {
////		cout << "소유자 ID : " << gamerID << endl;
////		cout << "연료량 : " << fuelGauge << "%" << endl;
////		cout << "현재 속도 : " << curSpeed << "km/s" << endl << endl;
////	}
////	void Accel() {
////		if (fuelGauge <= 0)
////			return;
////		else
////			fuelGauge -= FUEL_STEP;
////
////		if (curSpeed + ACC_STEP >= MAX_SPD) {
////			curSpeed = MAX_SPD;
////			return;
////		}
////		curSpeed += ACC_STEP;
////	}
////	void Break() {
////		if (curSpeed < BRK_STEP) {
////			curSpeed = 0;
////			return;
////		}
////		curSpeed -= BRK_STEP;
////	}
////};
//
//
//
////struct Point {
////	int xpos, ypos;
////	void MovePos(int x, int y) {
////		xpos += x;
////		ypos += y;
////	}
////	void AddPoint(const Point & pos) {
////		xpos += pos.xpos;
////		ypos += pos.ypos;
////	}
////	void ShowPosition() {
////		cout << "["<<xpos <<","<< ypos << "]"<<endl;
////	}
////};
//
//
//
////namespace CAR_CONST
////{
////	enum
////	{
////		ID_LEN = 20,
////		MAX_SPD = 200,
////		FUEL_STEP = 2,
////		ACC_STEP	=10,
////		BRK_STEP	=10
////	};
////}
////
////struct Car
////{
////	char gamerID[CAR_CONST::ID_LEN];
////	int fuelGauge;
////	int curSpeed;
////
////	void ShowCarState() {
////		cout << "소유자 id : " << gamerID << endl;
////		cout << "연료량 : " << fuelGauge << "%" << endl;
////		cout << "현재속도 : " << curSpeed << "km/s" << endl<<endl;
////	}
////	void Accel() {
////		if (fuelGauge <= 0)
////			return;
////		else
////			fuelGauge -= CAR_CONST::FUEL_STEP;
////
////		if ((curSpeed + CAR_CONST::ACC_STEP) > CAR_CONST::MAX_SPD) {
////			curSpeed = CAR_CONST::MAX_SPD;
////			return;
////		}
////		curSpeed += CAR_CONST::ACC_STEP;
////	}
////	void Break() {
////		if (curSpeed < CAR_CONST::BRK_STEP) {
////			curSpeed = 0;
////			return;
////		}
////		curSpeed -= CAR_CONST::BRK_STEP;
////	}
////};
//
//
//
//
////namespace CAR_CONST
////{
////	enum
////	{
////		ID_LEN = 20,
////		MAX_SPD=200,
////		FUEL_STEP=2,
////		ACC_STEP=10,
////		BRK_STEP=10
////	};
////}
////
////struct Car
////{
////	char gamerID[CAR_CONST::ID_LEN];
////	int fuelGauge;
////	int curSpeed;
////
////	void ShowCarState();
////	void Accel();
////	void Break();
////};
////
////void Car::ShowCarState() {
////	cout << "소유자 id : " << gamerID << endl;
////	cout << "연료량 : " << fuelGauge << endl;
////	cout << "현재 속도 : " << curSpeed << endl << endl;
////}
////
////void Car::Accel() {
////	if (fuelGauge <= 0)
////		return;
////	else
////		fuelGauge -= CAR_CONST::FUEL_STEP;
////
////	if ((curSpeed + CAR_CONST::ACC_STEP) >= CAR_CONST::MAX_SPD)
////	{
////		curSpeed = CAR_CONST::MAX_SPD;
////		return;
////	}
////	curSpeed += CAR_CONST::ACC_STEP;
////}
////
////void Car::Break() {
////	if (curSpeed < CAR_CONST::BRK_STEP)
////	{
////		curSpeed = 0;
////		return;
////	}
////	curSpeed -= CAR_CONST::BRK_STEP;
////}
//
//
////namespace CAR_CONST
////{
////	enum {
////		ID_LEN = 20,
////		MAX_SPD = 200,
////		FUEL_STEP = 2,
////		ACC_STEP = 10,
////		BRK_STEP = 10
////	};
////}
////
////class Car
////{
////private:
////	char gamerID[CAR_CONST::ID_LEN];
////	int fuelGauge;
////	int curSpeed;
////
////public:
////	void InitMembers(const char* ID, int fuel);  // const로 수정
////	void ShowCarState();
////	void Accel();
////	void Break();
////};
////
////void Car::InitMembers(const char* ID, int fuel) {
////	strncpy(gamerID, ID, CAR_CONST::ID_LEN - 1);  // 안전한 복사를 위해 strncpy 사용
////	gamerID[CAR_CONST::ID_LEN - 1] = '\0';  // 끝에 null 문자 추가
////	fuelGauge = fuel;
////	curSpeed = 0;
////}
////
////void Car::ShowCarState() {
////	cout << "소유자 id: " << gamerID << endl;
////	cout << "연료량 : " << fuelGauge << endl;
////	cout << "현재 속도 : " << curSpeed << endl << endl;
////}
////
////void Car::Accel() {
////	if (fuelGauge <= 0)
////		return;
////	else
////		fuelGauge -= CAR_CONST::FUEL_STEP;
////
////	if ((curSpeed + CAR_CONST::ACC_STEP) >= CAR_CONST::MAX_SPD)
////	{
////		curSpeed = CAR_CONST::MAX_SPD;
////		return;
////	}
////	curSpeed += CAR_CONST::ACC_STEP;
////}
////
////void Car::Break() {
////	if (curSpeed < CAR_CONST::BRK_STEP)
////	{
////		curSpeed = 0;
////		return;
////	}
////	curSpeed -= CAR_CONST::BRK_STEP;
////}
//
//int main(void)
//{
//
//
//
//
//
//
//	//Car run99;
//	//run99.InitMembers("run99", 100);  // const char*로 전달
//	//run99.Accel();
//	//run99.Accel();
//	//run99.Accel();
//	//run99.ShowCarState();
//	//run99.Break();
//	//run99.ShowCarState();
//
//
//
//
//	//Car run99 = { "run99",100,0 };
//	//run99.Accel();
//	//run99.ShowCarState();
//	//run99.Break();
//	//run99.ShowCarState();
//
//
//
//	
//	//Car run99{ "run99",100,0 };
//	//run99.Accel();
//	//run99.Accel();
//	//run99.ShowCarState();
//	//run99.Break();
//	//run99.ShowCarState();
//
//	//Car sped77 = { "sped77",100,0 };
//	//sped77.Accel();
//	//sped77.Break();
//	//sped77.ShowCarState();
//
//
//
//
//	//Point pos1 = { 12,4 };
//	//Point pos2 = { 20,30 };
//
//	//pos1.MovePos(-7, 10);
//	//pos1.ShowPosition();
//
//	//pos1.AddPoint(pos2);
//	//pos1.ShowPosition();
//
//
//
//
//
//	//Car run99{ "run99",100,0 };
//	//run99.Accel();
//	//run99.Accel();
//	//run99.ShowCarState();
//	//run99.Break();
//	//run99.ShowCarState();
//
//	//Car sped77 = { "sped77",100,0 };
//	//sped77.Accel();
//	//sped77.Break();
//	//sped77.ShowCarState();
//
//
//
//
//	//Car run99 = { "run99",100,20 };
//	//Accel(run99);
//	//Accel(run99);
//	//ShowCarState(run99);
//	//Break(run99);
//	//ShowCarState(run99);
//
//	//Car sped77 = { "sped77",100,20 };
//	//Accel(sped77);
//	//Break(sped77);
//	//ShowCarState(sped77);
//
//
//
//
//
//	//int a = 1, b = 2;
//
//	//swap(a, b);
//	//cout << a << endl << b << endl;
//
//
//	//char *str = MakeStrAdr(20);
//	//strcpy(str, "I am sh happy~");
//	//cout << str << endl;
//	////free(str);
//	//delete[]str;
//
//
//
//
//
//
//
//
//	//char *str = MakeStrAdr(20);
//	//strcpy(str, "I am happy~");
//	//cout << str << endl;
//	//free(str);
//
//
//
//
//
//	//int a = 1, b = 2;
//
//	//swap(a, b);
//	//cout << a << endl << b << endl;
//	
//
//
//	//const char *str1 = "ABC 123 ";
//	//const char *str2 = "DEF 456";
//	//char str3[100];
//
//	//strcpy(str3, str1);
//	//strcat(str3, str2);
//	//
//	//cout << str1 << endl;
//	//cout << str2 << endl;
//	//cout<< str3 << endl;
//
//	//if (strcmp(str1, str2) == 0)
//	//	cout << "같다" << endl;
//	//else
//	//	cout << "다르다" << endl;
//
//
//	//char str1[] = "Result";
//	//char str2[30];
//
//	//strcpy(str2, str1);
//	//printf("%s : %f \n", str1, sin(0.14));
//	//printf("%s : %f \n", str2, abs(-1.25));
//
//
//
//
//	//Point *pptr1 = new Point;
//	//pptr1->xpos = 3;
//	//pptr1->ypos = 30;
//
//	//Point *pptr2 = new Point;
//	//pptr2->xpos = 70;
//	//pptr2->ypos = 7;
//
//	//Point&pref = PntAdder(*pptr1, *pptr2);
//	//cout << "[" << pref.xpos << ", " << pref.ypos << "]" << endl;
//
//	//delete pptr1;
//	//delete pptr2;
//	//delete &pref;
//
//
//
//	//cout << "case 1: ";
//	//Simple*sp1 = new Simple;
//
//	//cout << "case 2: ";
//	//Simple*sp2 = (Simple*)malloc(sizeof(Simple) * 1);
//
//	//cout << endl << "end of main" << endl;
//	//delete sp1;
//	//free(sp2);
//
//
////	char *str = MakeStrAdr(20);
////	strcpy(str, "I am so happy~");
////	cout << str << endl;
////	delete[]str;
//
//
//
//	
//	//char*str = MakeStrDar(20);
//	//strcpy(str, "I am so happy~");
//	//cout << str << endl;
//	//free(str);
//
//
//
//
//	//int num1 = 1;
//	//int num2 = RefRetFuncTwo(num1);
//
//	//num1 += 1;
//	//num2 += 100;
//	//cout << num1 << endl << num2 << endl;
//
//
//
//	//int num1 = 1;
//	//int num2 = RefRetFuncOne(num1);
//	//num1 += 1;
//	//num2 += 100;
//	//cout << num1 << endl << num2 << endl;
//
//	//int num1 = 1;
//	//int &num2 = RefRetFuncOne(num1);
//
//	//num1++;
//	//num2++;
//	//cout << "num1 : " << num1 << endl << "num2 : " << num2 << endl;
//
//
//	//int val1 = 10;
//	//int val2 = 20;
//	//SwapByRef2(val1, val2);
//	//cout << "val1 : " << val1 << endl << "Val2 : " << val2 << endl;
//
//
//	//int n = 12;
//	//int *ptr = &n;
//	//int **dptr = &ptr;
//
//	//int &ref = n;
//	//int*(&pref) = ptr;
//	//int **(&dpref) = dptr;
//
//	//cout << ref << endl << *pref << **dpref << endl;
//
//
//
//	//int arr[3] = { 1,3,5 };
//	//int &ref1 = arr[0];
//	//int &ref2 = arr[1];
//	//int &ref3 = arr[2];
//
//	//cout << ref1 << endl << ref2 << endl << ref3;
//
//
//
//	//int n1 = 1020;
//	//int &n2 = n1;
//
//	//n2 = 3047;
//	//cout << "VAL : " << n1 << endl;
//	//cout << "FEF : " << n2 << endl;
//
//	//cout << "VAL : " << &n1 << endl;
//	//cout << "REF : " << &n2 << endl;
//
//
//	//bool isPos;
//	//int num;
//	//cout << "Input number : ";
//	//cin >> num;
//
//	//isPos = Ispositive(num);
//	//if (isPos)
//	//	cout << "Positive number" << endl;
//	//else
//	//	cout << "Negative numver" << endl;
//	
//
//
//
//	//int n = 10;
//	//int i = 0;
//	//cout << "true : " << true << endl;
//	//cout << "false : " << false << endl;
//
//	//while (true)
//	//{
//	//	cout << i++ << ' ';
//	//	if (i > n)
//	//		break;
//	//}
//	//cout << endl;
//
//	//cout << "sizeof 1 : " << sizeof(1) << endl;
//	//cout << "sizeof 0 :" << sizeof(0) << endl;
//	//cout << "sizeof true : " << sizeof(true) << endl;
//	//cout << "sizeof false : " << sizeof(false) << endl;
//
//
//
//	//AAA::BBB::CCC::n1 = 20;
//	//AAA::BBB::CCC::n2 = 30;
//
//	//namespace ABC = AAA::BBB::CCC;
//	//cout << ABC::n1 << endl;
//	//cout << ABC::n2 << endl;
//
//
//
//	/*using Hybird::HybFunc;
//	HybFunc();
//*/
//
//
//	//as::SimpleFunc();
//	//ad::SimpleFunc();
//
//
//	//cout << SQUARE(5) << endl;
//	//cout << SQUARE(12) << endl;
//
//
//
//	//cout << "[3,3,3] : " << cout << Box(3, 3, 3) << endl;
//	//cout << "[5,5,D] : " << cout << Box(5,5) << endl;
//	//cout << "[7,D,D] : " << cout << Box(7) << endl;
//	//cout << "[D,D,D] : " << cout << Box() << endl;
//
//
//	//cout << Adder() << endl;
//	//cout << Adder(5) << endl;
//	//cout << Adder(3, 5) << endl;
//
//
//
//	//cout << Addr() << endl;
//	//cout << Addr(5) << endl;
//	//cout << Addr(3, 5) << endl;
//
//
//
//	//int n1 = 20, n2 = 30;
//	//swap(&n1, &n2);
//	//cout << n1 << ' ' << n2 << endl;
//
//	//char ch1 = 'A', ch2 = 'Z';
//	//swap(&ch1, &ch2);
//	//cout << ch1 << ' ' << ch2 << endl;
//
//	//double db1 = 1.111, db2 = 5.555;
//	//swap(&db1, &db2);
//	//cout << db1 << ' ' << db2 << endl;
//
//
//
//
//	//My();
//	//My('A');
//	//My(12, 13);
//
//
//
//
//
//	//Car run99;
//	//run99.InitMembers("run99", 100);
//	//run99.Accel();
//	//run99.Accel();
//	//run99.Accel();
//	//run99.ShowCarState();
//	//run99.Break();
//	//run99.ShowCarState();
//
//
//
//
//
//
//	//Point pos1 = { 12,4 };
//	//Point pos2 = { 20.30 };
//
//	//pos1.MovePos(-7, 10);
//	//pos1.ShowPosition();
//
//	//pos1.AddPoint(pos2);
//	//pos1.ShowPosition();
//
//
//
//
//
//
//
//	//Car run99 = { "run99", 100, 0 };
//	//Accel(run99);
//	//Accel(run99);
//	//ShowCarState(run99);
//	//Break(run99);
//	//ShowCarState(run99);
//
//	//Car sped77 = { "sped77", 100,0 };
//	//Accel(sped77);
//	//Break(sped77);
//	//ShowCarState(sped77);
//
//
//
//
//
//
//	//char *n1 = "asd";
//	//char *n2 = "qwer";
//	//char n3[100];
//	//cout << strlen(n1) << "\n" << strlen(n2) << endl;
//	//strcpy(n3, n1);
//	//strcat(n3, n2);
//	//cout << n3 << endl;
//
//	//if (strcmp(n1, n2) == 0)
//	//	cout << "같음" << endl;
//	//else
//	//	cout << "다름" << endl;
//
//
//
//
//	//srand(time(NULL));
//	//for (int i = 0; i < 5; i++) {
//	//	printf("Random Number : %d\n", i, rand() & 100);
//	//}
//
//
//
//
//	//char str1[] = "Result";
//	//char str2[30];
//
//	//strcpy(str2, str1);
//	//printf("%s : %f \n", str1, sin(0.14));
//	//printf("%s : %f \n", str2, abs(-1.25));
//
//
//
//
//
//
//
//
//	//cout << "case1 : ";
//	//Simple * sp1 = new Simple;
//
//	//cout<<"case2 : "
//	//Simple * sp2 = (Simple*)malloc(sizeof(Simple) * 1);
//
//	//cout << endl << "end of main" << endl;
//	//delete sp1;
//	//free(sp2);
//
//
//
//
//
//	//char*str = MakeStrAdr(20);
//	//strcpy(str, "I am so happy~");
//	//cout << str << endl;
//	//delete[]str;
//
//
//
//
//
//
//
//	//char* str = MakeSatrAdr(20);
//	//strcpy(str, "I am so happy~");
//	//cout << str << endl;
//	//free(str);
//
//
//
//
//
//
//	//const int n = 12;
//	//const int *n2 = &n;
//	//const int *(&n3) = n2;
//	//cout << *n2 <<"\n" << *n3<<endl;
//
//
//
//
//	//int n1 = 1;
//	//int n2 = RefRetFuncOne(n1);
//
//	//n1 += 1;
//	//n2 += 100;
//	//cout << "n1:" << n1 << endl;
//	//cout << "n2" << n2 << endl;
//
//
//
//
//
//
//
//
//
//	//int n1 = 1;
//	//int &n2 = RefRetFuncOne(n1);
//
//	//n1++;
//	//n2++;
//	//cout << "n1: " << n1 << endl;
//	//cout << "n2 : " << n2 << endl;
//
//
//
//
//	//int n3 = 20;
//	//a(n3);
//	//b(n3);
//	//cout << n3 << endl;
//
//
//
//
//	//int val1 = 10;
//	//int val2 = 20;
//	//SwapByRef2(val1, val2);
//	//cout << val1 << "\n" << val2 << endl;
//
//
//
//
//	//int n1 = 12;
//	//int *ptr = &n1;
//	//int**dptr = &ptr;
//
//	//int &ref = n1;
//	//int*(&pref) = ptr;
//	//int**(&dpref) = dptr;
//
//	//cout << ref << "\n" << *pref << "\n" << **dpref << endl;
//
//
//
//
//
//	//int arr[3] = { 1,3,5 };
//	//int &r1 = arr[0];
//	//int &r2 = arr[1];
//	//int &r3 = arr[2];
//
//	//cout << r1 << r2 << r3 << endl;
//
//
//
//
//	//int n1 = 1020;
//	//int &n2 = n1;
//	//n2 = 3047;
//	//cout << "VAL : " << n1 << endl;
//	//cout << "VAL : " << n2 << endl;
//
//	//cout << "VAL : " << &n1 << endl;
//	//cout << "VAL : " << &n2 << endl;
//
//
//	//bool isPos;
//	//int n;
//	//cout << "Input number : ";
//	//cin >> n;
//
//	//isPos = IsPositive(n);
//	//if (isPos)
//	//	cout << "Positive number" << endl;
//	//else
//	//	cout << "Negative numver" << endl;
//
//
//
//
//
//	//int n = 10;
//	//int i = 0;
//
//	//cout << "true:" << true << endl;
//	//cout << "false:" << false << endl;
//
//	//while (1) {
//	//	cout << i++ << " ";
//	//	if(i>n)
//	//		break;
//	//}
//	//cout << endl;
//	//cout << "1:" << sizeof(1) << endl;
//	//cout << "0:" << sizeof(0) << endl;
//	//cout << "1:" << sizeof(true) << endl;
//	//cout << "1:" << sizeof(false) << endl;
//
//
//
//
//	//AAA::BBB::CCC::n1 = 20;
//	//AAA::BBB::CCC::n2 = 30;
//
//	//namespace ABC = AAA::BBB::CCC;
//	//cout << ABC::n1 << endl;
//	//cout << ABC::n2 << endl;
//
//
//
//
//	//int n = 20;
//	//cout << "asdf" <<n <<endl;
//
//
//
//	//int n = 20;
//	//std::cout << "Hello" << std::endl;
//	//std::cout << n << ' ' << 'A';
//	//std::cout << ' ' << 3.14 << std::endl;
//
//
//
//	//int v;
//	//std::cout << "첫 번째 : ";
//	//std::cin >> v;
//
//	//int v2;
//	//std::cout << "두 번째 : ";
//	//std::cin >> v2;
//
//	//int result = v + v2;
//	//std::cout << "덧셈 결과 : " << result << std::endl;
//
//
//
//	//int v1, v2;
//	//int result = 0;
//	//std::cout << "두 개의 숫자 입력 : ";
//	//std::cin >> v1 >> v2;
//
//	//if (v1 < v2) {
//	//	for (int i = v1 + 1; i < v2; i++)
//	//		result += i;
//	//}
//	//else {
//	//	for (int i = v2 + 1; i < v1; i++)
//	//		result += i;
//	//}
//	//std::cout << "두 수 사이의 정수 합 : " << result << std::endl;
//
//
//
//	//char n[10];
//	//char l[200];
//	//std::cout << "이름은?";
//	//std::cin >> n;
//
//	//std::cout << "좋아하는 프로그래밍?";
//	//std::cin >> l;
//
//	//std::cout << "내 이름은" << n << "입니다\n";
//	//std::cout << "프로그래밍은" << l << "입니다" << std::endl;
//
//
//
//	//int n1 = 0;
//	//int n2 = 0;
//	//int n3 = 0;
//	//int n4 = 0;
//	//int n5 = 0;
//	//std::cin >> n1;
//	//std::cin >> n2;
//	//std::cin >> n3;
//	//std::cin >> n4;
//	//std::cin >> n5;
//	//int result = n1 + n2 + n3 + n4 + n5;
//	//std::cout << result;
//
//
//
//	//char n1[10];
//	//char n2[200];
//	//std::cout << "이름은?";
//	//std::cin >> n1;
//
//	//std::cout << "번호는?";
//	//std::cin >> n2;
//
//	//std::cout << "내 이름은" << n1 << "입니다\n";
//	//std::cout << "프로그래밍은" << n2 << "입니다" << std::endl;
//
//
//
//	//int n = 2;
//	//for (int i = 1; i < 10; i++) {
//	//	std::cout << n*i << "\n";
//	//}
//
//
//
//
//	//int n;
//	//std::cout << "몇단";
//	//std::cin >> n;
//	//for (int i = 1; i < 10; i++) {
//	//	std::cout << n * i << "\n";
//	//}
//
//
//
//
//
//	//m1();
//	//m2('A');
//	//m3(12, 13);
//
//
//
//	//std::cout << a() << std::endl;
//	//std::cout << a(5) << std::endl;
//	//std::cout << a(3, 5) << std::endl;
//
//
//
//
//	//std::cout << a() << std::endl;
//	//std::cout << a(5) << std::endl;
//	//std::cout << a(3, 5) << std::endl;
//
//
//
////std::cout << "[3,3,3]" << BX(3, 3, 3) << std::endl;
////std::cout << "[5,5,D]" << BX(5,5) << std::endl;
////std::cout << "[D,D,D]" << BX(7) << std::endl;
//
//
//
//
////std::cout << SQUARE(5) << std::endl;
////std::cout << SQUARE(2) << std::endl;
//
//
//
////BestComImp1::SimpleFunc();
////ProgComImp1::SimpleFunc();
//
//
//
//
////using Hybrid::HybFunc;
////HybFunc();
//
//
//
//return 0;
//}
//
////void BestComImp1::SimpleFunc(void) {
////	std::cout << "best이 정의한 함수" << std::endl;
////}
////void ProgComImp1::SimpleFunc(void) {
////	std::cout << "ProgComdl wjddmlgka gkatn" << std::endl;
////}
//
//
////int a(int n1, int n2) {
////	return n1 + n2;
////}
//
//
//
////int BX(int length, int width, int height) {
////	return length + width + height;
////}
//
//
////int Adder(int n1, int n2) {
////	return n1 + n2;
////}
//
//
////int Box(int length, int width, int height) {
////	return length * width*height;
////}
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
//// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴
//
//// 시작을 위한 팁: 
////   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
////   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
////   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
////   4. [오류 목록] 창을 사용하여 오류를 봅니다.
////   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
////   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
