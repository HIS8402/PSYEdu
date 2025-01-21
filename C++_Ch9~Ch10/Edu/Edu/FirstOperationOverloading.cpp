#include <iostream>
using namespace std;

class Point
{
private:
	int xpos, ypos;
public:
	Point(int x=0,int y=0): xpos(x),ypos(y)
	{ }
	void ShowPosition()	const {
		cout << "[ " << xpos << " ," << ypos << " ]" << endl;
	}
	Point operator~(const Point& pos) {
		Point newPos(~pos.xpos, ~pos.ypos);
		return newPos;
	}
	friend Point operator~(const Point &);
};

int main(void)
{
	Point pos1(9, -7);
	pos1.ShowPosition();
	Point pos2 = -pos1;
	pos2.ShowPosition();
	(~pos2).ShowPosition();
	pos2.ShowPosition();
	return 0;
}




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