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
////		cout << "�� ��� : " << '[' << upLeft.x << ", ";
////		cout << upLeft.y << ']' << endl;
////		cout << "�� �ϴ� : " << '[' << LowRight.x << ", ";
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
//		cout << "�ʱ�ȭ ����" << endl;
//	if (!pos1.InitMembers(2, 4))
//		cout << "�ʱ�ȭ ����" << endl;
//
//	Point pos2;
//	if (!pos2.InitMembers(5, 9))
//		cout << "�ʱ�ȭ ����" << endl;
//
//	Rectangle rec;
//	if (!rec.InitMembers(pos2, pos1))
//		cout << "���簢�� �ʱ�ȭ ����" << endl;
//
//	if (!rec.InitMembers(pos1, pos2))
//		cout << "���簢�� �ʱ�ȭ ����" << endl;
//
//	rec.ShowRecInfo();
//	return 0;
//}