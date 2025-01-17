//#include<iostream>
//#include "Point.h"
//#include "Rectangle.h"
//using namespace std;
//
//
////class Point
////{
////public:
////	int x, y;
////};
////
////class Rectangle
////{
////public:
////	Point upLeft, LowRight;
////
////public:
////	void ShowRecInfo()
////	{
////		cout << "좌 상단 : " << '[' << upLeft.x << ", ";
////		cout << upLeft.y << ']' << endl;
////		cout << "우 하단 : " << '[' << LowRight.x << ", ";
////		cout << LowRight.y << ']' << endl << endl;
////	}
////};
//
////int main(void) {
////	Point pos1 = { -2,4 };
////	Point pos2 = { 5,9 };
////	Rectangle rec = { pos2,pos1 };
////	rec.ShowRecInfo();
////	return 0;
////}
//
//int main(void) {
//	Point pos1;
//	if (!pos1.InitMembers(-2, 4))
//		cout << "초기화 실패" << endl;
//	if (!pos1.InitMembers(2, 4))
//		cout << "초기화 실패" << endl;
//
//	Point pos2;
//	if (!pos2.InitMembers(5, 9))
//		cout << "초기화 실패" << endl;
//
//	Rectangle rec;
//	if (!rec.InitMembers(pos2, pos1))
//		cout << "직사각형 초기화 실패" << endl;
//
//	if (!rec.InitMembers(pos1, pos2))
//		cout << "직사각형 초기화 실패" << endl;
//
//	rec.ShowRecInfo();
//	return 0;
//}