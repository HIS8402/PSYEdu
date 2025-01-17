//#include <iostream>
//#include <cstring>
//using namespace std;

//class SoSimple
//{
//private:
//	int num;
//public:
//	SoSimple(int n) :num(n)
//	{
//		cout << "num = " << num << ", ";
//		cout << "address" << this << endl;
//	}
//	void ShowSimpleDate() {
//		cout << num << endl;
//	}
//	SoSimple* GetThisPointer()
//	{
//		return this;
//	}
//};
//
//int main(void)
//{
//	SoSimple sim1(100);
//	SoSimple*ptr1 = sim1.GetThisPointer();
//	cout << ptr1 << ", ";
//	ptr1->ShowSimpleDate();
//
//	SoSimple sim2(200);
//	SoSimple*ptr2 = sim2.GetThisPointer();
//	cout << ptr2 << ", ";
//	ptr2->ShowSimpleDate();
//
//	return 0;
//}



//class TwoNumber
//{
//private:
//	int num1, num2;
//public:
//	TwoNumber(int num1, int num2)
//	{
//		this->num1 = num1;
//		this->num2 = num2;
//	}
//	void ShowTwoNumber()
//	{
//		cout << this->num1 << endl;
//		cout << this->num2 << endl;
//		cout << num1 << endl << num2 << endl;
//	}
//};
//
//int main(void)
//{
//	TwoNumber two(2, 4);
//	two.ShowTwoNumber();
//	return 0;
//}




//class SelfRef
//{
//private:
//	int num;
//public:
//	SelfRef(int n) :num(1)
//	{
//		cout << "°´Ã¼ »ý¼º" << endl;
//	}
//	SelfRef&Adder(int n)
//	{
//		num += n;
//		return *this;
//	}
//	SelfRef&ShowTwoNumber()
//	{
//		cout << num << endl;
//		return *this;
//	}
//};
//
//int main(void)
//{
//	SelfRef obj(3);
//	SelfRef &ref = obj.Adder(2);
//
//	obj.ShowTwoNumber();
//	ref.ShowTwoNumber();
//
//	ref.Adder(1).ShowTwoNumber().Adder(2).ShowTwoNumber();
//	return 0;
//}







