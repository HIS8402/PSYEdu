#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstringt.h>
#include <cstdlib>
using namespace std;

class Point
{
private:
	int xpos, ypos;
public:
	Point(int x = 0, int y = 0) : xpos(x),ypos(y) { }
	friend ostream& operator<<(ostream& os, const Point& pos);
};

ostream& operator<<(ostream& os, const Point & pos)
{
	os << "[ " << pos.xpos << ", " << pos.ypos << " ]" << endl;
	return os;
}

class BoundCheckPointArray
{
private:
	Point *arr;
	int arrlen;
	BoundCheckPointArray(const BoundCheckPointArray& arr){ }
	BoundCheckPointArray& operator=(const BoundCheckPointArray&arr){ }
public:
	BoundCheckPointArray(int len) :arrlen(len)
	{
		arr = new Point[len];
	}
	Point& operator[](int idx)
	{
		if (idx < 0 || idx >= arrlen)
		{
			cout << "Array index out of bound exception" << endl;
			exit(1);
		}
		return arr[idx];
	}
	Point operator[](int idx) const
	{
		if (idx < 00 || idx >= arrlen)
		{
			cout << "Array index out of bound exception" << endl;
			exit(1);
		}
		return arr[idx];
	}
		int GetArrLen()	const { return arrlen; }
		~BoundCheckPointArray() { delete[]arr; }
};
int main(void)
{
	BoundCheckPointArray arr(3);
	arr[0] = Point(3, 4);
	arr[1] = Point(5, 6);
	arr[2] = Point(7, 8);

	for (int i = 00; i < arr.GetArrLen(); i++)
		cout << arr[i];

	return 0;
}


//class BoundCheckIntArray
//{
//private:
//	int *arr;
//	int arrlen;
//	BoundCheckIntArray(const BoundCheckIntArray& arr){ }
//	BoundCheckIntArray&operator=(const BoundCheckIntArray&arr){ }
//
//public:
//	BoundCheckIntArray(int len) :arrlen(len)
//	{
//		arr = new int[len];
//	}
//	int& operator[](int idx) const
//	{
//		if (idx < 0 || idx >= arrlen)
//		{
//			cout << "Array index out of bound exception" << endl;
//			exit(1);
//		}
//		return arr[idx];
//	}
//	int GetArrLen()	const { return arrlen; }
//	~BoundCheckIntArray() { delete[]arr; }
//};
//
//void ShowAllData(const BoundCheckIntArray& ref)
//{
//	int len = ref.GetArrLen();
//	for (int idx = 0; idx < len; idx++)
//		cout << ref[idx] << endl;
//}
//
//int main(void)
//{
//	BoundCheckIntArray arr(5);
//	for (int i = 0; i < 5; i++)
//		arr[i] = (i + 1) * 11;
//
//	ShowAllData(arr);
//	return 0;
//}

//class BoundCheckIntArray
//{
//private:
//	int *arr;
//	int arrlen;
//public:
//	BoundCheckIntArray(int len) :arrlen(len)
//	{
//		arr = new int[len];
//	}
//	int& operator[](int idx)			// 데이터 타입& operator [] (접근할 배열의 인덱스)
//	{
//		if (idx < 0 || idx >= arrlen)
//		{
//			cout << "Array index out of bound exception" << endl;
//			exit(1);
//		}
//		return arr[idx];
//	}
//	~BoundCheckIntArray()
//	{
//		delete[] arr;
//	}
//};
//
//int main(void)
//{
//	BoundCheckIntArray arr(5);
//	for (int i = 0; i < 5; i++)
//		arr[i] = (i + 1) * 11;
//	for (int i = 0; i < 6; i++)
//		cout << arr[i] << endl;
//	return 0;
//}



//class AAA
//{
//private:
//	int num;
//public:
//	AAA(int n = 0) :num(n)
//	{
//		cout << "AAA(int n=0)" << endl;
//	}
//	AAA(const AAA& ref) :num(ref.num)
//	{
//		cout << "AAA(const AAA& ref)" << endl;
//	}
//	AAA& operator=(const AAA& ref)
//	{
//		num = ref.num;
//		cout << "operator=(const AAA& ref)" << endl;
//		return *this;
//	}
//};
//
//class BBB
//{
//private:
//	AAA mem;
//public:
//	BBB(const AAA& ref) :mem(ref)	{}
//};
//
//class CCC
//{
//private:
//	AAA mem;
//public:
//	CCC(const AAA& ref) { mem = ref; }
//};
//
//int main(void)
//{
//	AAA obj1(12);
//	cout << "***********************" << endl;
//	BBB obj2(obj1);
//	cout << "***********************" << endl;
//	CCC obj3(obj1);
//	cout << "***********************" << endl;
//	return 0;
//}






//class Gun
//{
//private:
//	int bullet;
//public:
//	Gun(int bnum) :bullet(bnum) {}
//	void Shot()
//	{
//		cout << "BBANG!!!" << endl;
//		bullet--;
//	}
//};
//
//class Police
//{
//private:
//	int handcuffs;
//	Gun * pistol;
//public:
//	Police(int bnum, int bcuff) :handcuffs(bcuff)
//	{
//		if (bnum > 0)
//			pistol = new Gun(bnum);
//		else
//			pistol = NULL;
//	}
//	Police(const Police& ref) :handcuffs(ref.handcuffs)
//	{
//		if (ref.pistol != NULL)
//			pistol = new Gun(*(ref.pistol));
//		else
//			pistol = NULL;
//	}
//	Police& operator=(const Police&ref) {
//		if(pistol!=NULL)
//			delete pistol;
//
//		if (ref.pistol != NULL)
//			pistol = new Gun(*(ref.pistol));
//		else
//			pistol = NULL;
//
//		handcuffs = ref.handcuffs;
//		return *this;
//	}
//	void PutHandcuff()
//	{
//		cout << "SNAP!" << endl;
//		handcuffs--;
//	}
//	void Shot()
//	{
//		if (pistol == NULL)
//			cout << "Hut BBANG~~" << endl;
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
//	Police pman1(5, 3);
//	Police pman2 = pman1;
//	pman2.PutHandcuff();
//	pman2.Shot();
//
//	Police pman3(2, 4);
//	pman3 = pman1;
//	pman3.PutHandcuff();
//	pman3.Shot();
//	return 0;
//}




//class First
//{
//private:
//	int num1, num2;
//public:
//	First(int n1=0,int n2=0):num1(n1),num2(n2)
//	{}
//	void ShowData() { cout << num1 << ", " << num2 << endl; }
//
//	First& operator=( const First&ref )
//	{
//		cout << "First&operator=()" << endl;
//		num1 = ref.num1;
//		num2 = ref.num2;
//		return *this;
//	}
//};
//
//class Second:public First
//{
//private:
//	int num3, num4;
//public:
//	Second(int n1=0, int n2=0, int n3 = 0, int n4 = 0) :First(n1,n2),num3(n3), num4(n4)
//	{}
//	void ShowData()
//	{
//		First::ShowData();
//		cout << num3 << ", " << num4 << endl; 
//	}
//};
//
//int main(void)
//{
//	Second ssrc(111, 222, 333, 444);
//	Second scpy(0, 0, 0, 0);
//	scpy = ssrc;
//	scpy.ShowData();
//	return 0;
//}




//class Person
//{
//private:
//	char*name;
//	int age;
//public:
//	Person(const char*myname, int myage)
//	{
//		int len = strlen(myname) + 1;
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
//int main(void)
//{
//	Person man1("Lee dong woo", 29);
//	Person man2("Yonn ji yul", 22);
//	man2 = man1;
//	man1.ShowPersonInfo();
//	man2.ShowPersonInfo();
//	return 0;
//}




//class First
//{
//private:
//	int num1, num2;
//public:
//	First(int n1=0,int n2=0):num1(n1),num2(n2)
//	{}
//	void ShowData() { cout << num1 << ", " << num2 << endl; }
//};
//
//class Second
//{
//private:
//	int num3, num4;
//public:
//	Second(int n3=0,int n4=0):num3(n3),num4(n4)
//	{}
//	void ShowData() { cout << num3 << ", " << num4 << endl; }
//
//	Second& operator=(const Second&ref)
//	{
//		cout << "Second & operate=()" << endl;
//		num3 = ref.num3;
//		num4 = ref.num4;
//		return *this;
//	}
//};
//
//int main(void)
//{
//	First fsrc(111, 222);
//	First fcpy;
//	Second ssrc(333, 444);
//	Second scpy;
//	fcpy = fsrc;
//	scpy = ssrc;
//	fcpy.ShowData();
//	scpy.ShowData();
//
//	First fob1, fob2;
//	Second sob1, sob2;
//	fob1 = fob2 = fsrc;
//	sob1 = sob2 = ssrc;
//
//	fob1.ShowData();
//	fob2.ShowData();
//	sob1.ShowData();
//	sob2.ShowData();
//	return 0;
//}




//class Point
//{
//private:
//	int xpos, ypos;
//public:
//	Point(int x=0,int y=0): xpos(x),ypos(y)
//	{ }
//	void ShowPosition()	const {
//		cout << "[ " << xpos << " ," << ypos << " ]" << endl;
//	}
//	friend ostream& operator<<(ostream&, const Point&);
//	friend istream& operator>>(istream&, Point&pos);
//};
//
//ostream& operator<<(ostream& os, const Point&pos)
//{
//	os << "[ " << pos.xpos << ", " << pos.ypos << " ]" << endl;
//	return os;
//}
//istream& operator>>(istream& is, Point &pos)
//
//int main(void)
//{
//	Point pos1(9, -7);
//	pos1.ShowPosition();
//	Point pos2 = -pos1;
//	pos2.ShowPosition();
//	(~pos2).ShowPosition();
//	pos2.ShowPosition();
//	return 0;
//}




//class Point
//{
//private:
//	int xpos, ypos;
//public:
//	Point(int x = 0, int y=0):xpos(x),ypos(y)
//	{ }
//	void ShowPosition()	const
//	{
//		cout << "[ " << xpos << ", " << ypos << " ]" << endl;
//	}
//	friend ostream& operator<<(ostream& os, const Point& );
//};
//
//ostream& operator<<(ostream&os, const Point& pos)
//{
//	os << "[ " << pos.xpos << ", " << pos.ypos << " ]" << endl;
//	return os;
//}
//
//int main(void)
//{
//	Point pos1(1, 3);
//	cout << pos1;
//	Point pos2(101, 303);
//	cout << pos2;
//	return 0;
//}



//namespace mystd
//{
//	using namespace std;
//	class ostream
//	{
//	public:
//		void operator<<(const  char*str)
//		{
//			printf("%s", str);
//		}
//		void operator<<(const  char str)
//		{
//			printf("%c", str);
//		}
//		void operator<<(int num)
//		{
//			printf("%d", num);
//		}
//		void operator<<(double e)
//		{
//			printf("%g", e);
//		}
//		void operator<<(ostream&(*fp)(ostream &ostm))
//		{
//			fp(*this);
//		}
//	};
//	ostream& endl(ostream&ostm)
//	{
//		ostm << '\n';
//		fflush(stdout);
//		return ostm;
//	}
//	ostream cout;
//}
//int main(void)
//{
//	using mystd::cout;
//	using mystd::endl;
//
//	cout << "Simple String";
//	cout << endl;
//	cout << "3.14";
//	cout << endl;
//	cout << 123;
//	endl(cout);
//
//	return 0;
//}





//class Point
//{
//private:
//	int xpos, ypos;
//public:
//	Point(int x = 0, int y=0):xpos(x),ypos(y)
//	{ }
//	void ShowPosition()	const
//	{
//		cout << "[ " << xpos << ", " << ypos << " ]" << endl;
//	}
//	Point operator*(int times)
//	{
//		Point pos(xpos*times, ypos*times);
//		return pos;
//	}
//	friend Point operator*(int times, Point& ref);
//};
//
//Point operator*(int times, Point& ref)
//{
//	return ref * times;
//}
//
//int main(void)
//{
//	Point pos(1, 2);
//	Point cpy;
//
//	cpy = 3 * pos;
//	cpy.ShowPosition();
//
//	cpy = 2 * pos * 3;
//	cpy.ShowPosition();
//
//	return 0;
//}



//class Point
//{
//private:
//	int xpos, ypos;
//public:
//	Point(int x=0,int y=0):xpos(x),ypos(y)
//	{ }
//	void ShowPosition()	const
//	{
//		cout << "[ " << xpos << ", " << ypos << " ]";
//	}
//	Point operator*(int times)
//	{
//		Point pos(xpos*times, ypos*times);
//		return pos;
//	}
//};
//
//int main(void)
//{
//	Point pos(1, 2);
//	Point cpy;
//
//	cpy = pos * 3;
//	cpy.ShowPosition();
//
//	cpy = pos * 2 * 3;
//	cpy.ShowPosition();
//	return 0;
//}







//class Point
//{
//private:
//	int xpos, ypos;
//public:
//	Point(int x = 0, int y = 0) :xpos(x), ypos(y)
//	{ }
//	void ShowPosition()		const
//	{
//		cout << "[ " << xpos << ", " << ypos << " ]";
//	}
//	Point& operator++()
//	{
//		xpos += 1;
//		ypos += 1;
//		return *this;
//	}
//	friend Point& operator--(Point &ref);
//	friend const Point operator--(Point &ref, int);
//};
//
//Point& operator--(Point &ref)
//{
//	ref.xpos -= 1;
//	ref.ypos -= 1;
//	return ref;;
//}
//
//const Point operator--(Point &ref, int)
//{
//	const Point retobj(ref);
//	ref.xpos -= 1;
//	ref.ypos -= 1;
//	return retobj;
//}
//
//int main(void)
//{
//	Point pos(3, 5);
//	Point cpy;
//	cpy = pos--;
//	cpy.ShowPosition();
//	pos.ShowPosition();
//
//	cpy = pos++;
//	cpy.ShowPosition();
//	pos.ShowPosition();
//
//	return 0;
//}



//class Point
//{
//private:
//	int xpos, ypos;
//public:
//	Point(int x = 0, int y = 0) :xpos(x), ypos(y)
//	{ }
//	void ShowPosition()		const
//	{
//		cout << "[ " << xpos << ", " << ypos << " ]" << endl;
//	}
//	friend ostream& operator<<(ostream&, const Point&);
//	friend istream& operator>>(istream&, Point& pos);
//};
//
//ostream& operator<<(ostream& os, const Point& pos)
//{
//	os << "[ " << pos.xpos << ", " << pos.ypos << " ]";
//	return os;
//}
//
//istream& operator>>(istream& is, Point& pos)
//{
//	is >> pos.xpos >> pos.ypos;
//	return is;
//}
//
//int main(void)
//{
//	Point pos1;
//	cout << "x,y 좌표 순으로 입력 : ";
//	cin >> pos1;
//	cout << pos1;
//
//	Point pos2;
//	cout << "x,y 좌표 순으로 입력 : ";
//	cin >> pos2;
//	cout << pos2;
//}

//class Point
//{
//private:
//	int xpos, ypos;
//public:
//	Point(int x = 0, int y = 0) :xpos(x), ypos(y)
//	{ }
//	void ShowPosition()		const
//	{
//		cout <<"[ " << xpos << ", " << ypos << " ]" << endl;
//	}
//	Point operator- ()
//	{
//		Point pos(-xpos, -ypos);
//		return pos;
//	}
//	friend Point operator~(const Point &);
//};
//
//Point operator~ (const Point &ref)
//{
//	Point pos(ref.xpos, ref.ypos);
//	return pos;
//}
//
//int main(void)
//{
//	Point pos1(1, -2);
//	pos1.ShowPosition();
//	Point pos2 = -pos1;
//	pos2.ShowPosition();
//	//(~pos2).ShowPosition();
//	//pos2.ShowPosition();
//	return 0;
//}




//class Point
//{
//private:
//	int xpos, ypos;
//public:
//	Point(int x = 0,int y=0) :xpos(x),ypos(y)
//	{ }
//	void ShowPosition()	const {
//		cout << '[ ' << xpos << ", " << ypos << ']' << endl;
//	}
//	Point& operator++()
//	{
//		xpos += 1;
//		ypos += 1;
//		return *this;
//	}
//	friend Point&operator--(Point &ref);
//};
//
//Point&operator--(Point &ref) {
//	ref.xpos -= 1;
//	ref.ypos -= 1;
//	return ref;
//}
//
//int main(void)
//{
//	Point pos(1, 2);
//	++pos;
//	pos.ShowPosition();
//	--pos;
//	pos.ShowPosition();
//
//	++(++pos);
//	pos.ShowPosition();
//	--(--pos);
//	pos.ShowPosition();
//
//	return 0;
//}




//<ADD Start> 예제3)
//class Point {
//private:
//	int xpos, ypos;
//
//public:
//	Point(int x = 0, int y = 0) : xpos(x), ypos(y) { }
//
//	void ShowPosition() const {
//		cout << '[' << xpos << ", " << ypos << ']' << endl;
//	}
//
//	friend bool operator==(const Point &pos1, const Point &pos2);
//	friend bool operator!=(const Point &pos1, const Point &pos2);
//};
//
//bool operator==(const Point &pos1, const Point &pos2) {
//	return (pos1.xpos == pos2.xpos) && (pos1.ypos == pos2.ypos);
//}
//
//bool operator!=(const Point &pos1, const Point &pos2) {
//	return !(pos1 == pos2);
//}
//
//int main(void) {
//	Point pos1(10, 20);
//	Point pos2(10, 20);
//	Point pos3(5, 15);
//
//	cout << "pos1 == pos2: " << (pos1 == pos2) << endl;
//	cout << "pos1 != pos2: " << (pos1 != pos2) << endl;
//	cout << "pos1 == pos3: " << (pos1 == pos3) << endl;
//	cout << "pos1 != pos3: " << (pos1 != pos3) << endl;
//
//	return 0;
//}
//<ADD End> 예제3)




//<ADD Start> 예제2)
//class Point {
//private:
//	int xpos, ypos;
//
//public:
//	Point(int x = 0, int y = 0) : xpos(x), ypos(y)
//	{ }
//
//	void ShowPosition() const {
//		cout << '[' << xpos << ", " << ypos << "]" << endl;
//	}
//
//	Point& operator+=(const Point &ref)
//	{
//		xpos += ref.xpos;
//		ypos += ref.ypos;
//		return *this;
//	}
//
//	Point& operator-=(const Point &ref) {
//		xpos -= ref.xpos;
//		ypos -= ref.ypos;
//		return *this;
//	}
//};
//
//int main(void) {
//	Point pos1(10, 20);
//	Point pos2(3, 4);
//
//	pos1 += pos2;
//	pos1 -= pos2;
//
//	cout << "pos1: ";
//	pos1.ShowPosition();
//	cout << "pos2: ";
//	pos2.ShowPosition();
//
//	return 0;
//}
//<Add End> 예제2)







//<ADD Start> 예제1)
//class Point {
//private:
//	int xpos, ypos;
//
//public:
//	Point(int x = 0, int y = 0) : xpos(x), ypos(y) { }
//
//	void ShowPosition() const {
//		cout << '[' << xpos << ", " << ypos << "]" << endl;
//	}
//
//	friend Point operator-(const Point &pos1, const Point &pos2);
//};
//
//Point operator-(const Point &pos1, const Point &pos2) {
//	Point pos(pos1.xpos - pos2.xpos, pos1.ypos - pos2.ypos);
//	return pos;
//}
//
//int main(void) {
//	Point pos1(10, 20);
//	Point pos2(3, 4);
//	Point pos3 = pos1 - pos2;
//
//	cout << "pos1: ";
//	pos1.ShowPosition();
//	cout << "pos2: ";
//	pos2.ShowPosition();
//	cout << "pos3 (pos1 - pos2): ";
//	pos3.ShowPosition();
//
//	return 0;
//}
//<ADD End> 예제1)



//class Point
//{
//private:
//	int xpos, ypos;
//public:
//	Point(int x = 0, int y = 0) :xpos(x), ypos(y)
//	{ }
//	void ShowPosition()	const
//	{
//		cout << '[' << xpos << ", " << ypos << ']' << endl;
//	}
//	friend Point operator+(const Point &pos1, const Point &pos2);
//};
//
//Point operator+(const Point &pos1, const Point &pos2)
//{
//	Point pos(pos1.xpos + pos2.xpos, pos1.ypos + pos2.ypos);
//	return pos;
//}
//
//int main(void)
//{
//	Point pos1(3, 4);
//	Point pos2(10, 20);
//	Point pos3 = pos1 + pos2;
//
//	pos1.ShowPosition();
//	pos2.ShowPosition();
//	pos3.ShowPosition();
//
//	return 0;
//}



//class Point
//{
//private:
//	int xpos, ypos;
//public:
//	Point(int x = 0, int y = 0) : xpos(x),ypos(y)
//	{ }
//	void ShowPosition()	const {
//		cout << '[' << xpos << ", " << ypos << '] ' << endl;
//	}
//	Point operator+(const Point &ref)
//	{
//		Point pos(xpos + ref.xpos, ypos + ref.ypos);
//		return pos;
//	}
//};
//
//int main(void)
//{
//	Point pos1(3, 4);
//	Point pos2(10, 20);
//	Point pos3 = pos1 + pos2;
//
//	pos1.ShowPosition();
//	pos2.ShowPosition();
//	pos3.ShowPosition();
//	return 0;
//}




//class Point
//{
//private:
//	int xpos, ypos;
//public:
//	Point(int x = 0, int y = 0) : xpos(x),ypos(y)
//	{ }
//	void ShowPosition()	const {
//		cout << '[' << xpos << ", " << ypos << '] ' << endl;
//	}
//	Point operator+(const Point &ref)
//	{
//		Point pos(xpos + ref.xpos, ypos + ref.ypos);
//		return pos;
//	}
//};
//
//int main(void)
//{
//	Point pos1(3, 4);
//	Point pos2(10, 20);
//	Point pos3 = pos1.operator+(pos2);
//	pos1.ShowPosition();
//	pos2.ShowPosition();
//	pos3.ShowPosition();
//
//	return 0;
//}