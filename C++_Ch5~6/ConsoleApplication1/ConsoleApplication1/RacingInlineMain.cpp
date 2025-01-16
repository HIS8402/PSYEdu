//#include<iostream>
//using namespace std;

//#include "CarInline.h"
//
//int main(void)
//{
//	Car run99;
//	run99.InitMembers("run99", 100);
//	run99.Accel();
//	run99.Accel();
//	run99.Accel();
//	run99.ShowCarState();
//	run99.Break();
//	run99.ShowCarState();
//	return 0;
//}




//class Calculator {
//private:
//	int Add=0, Min=0, Mul=0, Div=0;
//public:
//	double nAdd(double n1, double n2);
//	double nMin(double n1, double n2);
//	double nMul(double n1, double n2);
//	double nDiv(double n1, double n2);
//	void ShowOpCount();
//};
//
//
//
//double Calculator::nAdd(double n1, double n2) {
//	Add++;
//	return n1 + n2;
//}
//
//double Calculator::nMin(double n1, double n2) {
//	Min++;
//	return n1 - n2;
//}
//
//double Calculator::nMul(double n1, double n2) {
//	Mul++;
//	return n1 * n2;
//}
//
//double Calculator::nDiv(double n1, double n2) {
//	Div++;
//	return n1 / n2;
//}
//
//void Calculator::ShowOpCount() {
//	cout << "µ¡¼À : " << Add << " ";
//	cout << "»¬¼À : " << Min <<" ";
//	cout << "°ö¼À : " << Mul << " ";
//	cout << "³ª´°¼À : " << Div << " " << endl;
//}
//
//int main(void) {
//	Calculator cal;
//	cout << "3.2 + 2.4 = " << cal.nAdd(3.2, 2.4) << endl;
//	cout << "3.5 / 1.7 = " << cal.nDiv(3.5, 1.7) << endl;
//	cout << "2.2 - 1.5 = " << cal.nMin(2.2, 1.5) << endl;
//	cout << "4.9 / 1.2 = " << cal.nDiv(4.9, 1.2) << endl;
//	cal.ShowOpCount();
//
//	return 0;
//}

//class Calculator {
//private:
//	int nAdd = 0, nMin = 0, nMul = 0, nDiv = 0;
//public:
//	double Add(double n1, double n2);
//	double Min(double n1, double n2);
//	double Mul(double n1, double n2);
//	double Div(double n1, double n2);
//	void ShowOpCount();
//};
//
//double Calculator::Add(double n1, double n2) {
//	nAdd++;
//	return n1 + n2;
//}
//
//double Calculator::Min(double n1, double n2) {
//	nMin++;
//	return n1 - n2;
//}
//
//double Calculator::Mul(double n1, double n2) {
//	nMul++;
//	return n1 * n2;
//}
//
//double Calculator::Div(double n1, double n2) {
//	nDiv++;
//	return n1 / n2;
//}
//
//void Calculator::ShowOpCount() {
//	cout << "µ¡¼À : " << nAdd << "   »¬¼À : " << nMin << "   °ö¼À : " << nMul << "   ³ª´°¼À : " << nDiv << endl;
//}
//
//int main(void) {
//	Calculator cal;
//	cout << "3.2 + 2.4 = " << cal.Add(3.2, 2.4) << endl;
//	cout << "3.5 / 1.7 = " << cal.Div(3.5, 1.7) << endl;
//	cout << "2.2 - 1.5 = " << cal.Min(2.2, 1.5) << endl;
//	cout << "4.9 / 1.2 = " << cal.Div(4.9, 1.2) << endl;
//	cal.ShowOpCount();
//}


//class Printer {
//private:
//	char str[100];
//public:
//	void SetString(const char* s);
//	void ShowString();
//};
//
//void Printer::SetString(const char*s) {
//	strcpy_s(str, s);
//}
//
//void Printer::ShowString() {
//	cout << str << endl;
//}
//
//int main(void) {
//	Printer pnt;
//	pnt.SetString("Hello world!");
//	pnt.ShowString();
//
//	pnt.SetString("I love C++!");
//	pnt.ShowString();
//
//	return 0;
//}


//class Printer {
//private:
//	char str[100];
//public:
//	void SetString(const char*s);
//	void ShowString();
//};
//
//void Printer::SetString(const char*s) {
//	strcpy_s(str, s);
//}
//
//void Printer::ShowString() {
//	cout << str << endl;
//}
//
//
//
//
//int main(void) {
//	Printer pnt;
//	pnt.SetString("Hello");
//	pnt.ShowString();
//
//	pnt.SetString("Love");
//	pnt.ShowString();
//
//	return 0;
//}





//class FruitSeller {		// ÆÇ¸ÅÀÚ
//private:
//	int APPLE_PRICE;	// °¡°Ý
//	int numOfApples;	// »ç°ú °³¼ö
//	int myMoney;		// µ·
//
//public:
//	void InitMembers(int price, int num, int money) {
//		APPLE_PRICE = price;
//		numOfApples = num;
//		myMoney = money;
//	}
//	int SaleApples(int money)
//	{
//		int num = money / APPLE_PRICE;
//		numOfApples -= num;
//		myMoney += money;
//		return num;
//	}
//	void ShowSalesResult() {
//		cout << "³²Àº »ç°ú" << numOfApples << endl;
//		cout << "ÆÇ¸Å ¼öÀÍ : " << myMoney << endl << endl;
//	}
//};
//
//class FruitBuyer		// ±¸¸ÅÀÚ
//{
//	int myMoney;		// µ·
//	int numOfApples;	// »ç°ú °³¼ö
//
//public:
//	void InitMembers(int money) {
//		myMoney = money;
//		numOfApples = 0;
//	}
//	void BuyApples(FruitSeller&seller, int money) {
//		numOfApples += seller.SaleApples(money);
//		myMoney -= money;
//	}
//	void ShowBuyResult() {
//		cout << "ÇöÀç ÀÜ¾× : " << myMoney << endl;
//		cout << "»ç°ú °³¼ö : " << numOfApples << endl << endl;
//	}
//};
//
//int main(void) {
//	FruitSeller seller;
//	seller.InitMembers(1000, 20, 0);
//	FruitBuyer buyer;
//	buyer.InitMembers(5000);
//	buyer.BuyApples(seller, 2000);
//
//	cout << "°úÀÏ ÆÇ¸ÅÀÚÀÇ ÇöÈ²" << endl;
//	seller.ShowSalesResult();
//	cout << "°úÀÏ ±¸¸ÅÀÚÀÇ ÇöÈ²" << endl;
//	buyer.ShowBuyResult();
//	return 0;
//}


