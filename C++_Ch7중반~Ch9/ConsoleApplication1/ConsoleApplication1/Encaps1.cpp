//#include<iostream>
//using namespace std;
//
////class SinivelCap
////{
////public:
////	void Take()	const { cout << "�๰ ��" << endl; }
////};
////
////class SneezeCap
////{
////public:
////	void Take()	const { cout << "��ä�� ��" << endl; }
////};
////
////class SnuffleCap
////{
////public:
////	void Take()	const { cout << "�� �ո�" << endl; }
////};
////
////class ColdPatient {
////public:
////	void TakeSinivelCap(const SinivelCap &cap)	const { cap.Take(); }
////	void TakeSneezeCap(const SneezeCap &cap)	const { cap.Take(); }
////	void TakeSnuffleCap(const SnuffleCap &cap)	const { cap.Take(); }
////};
////
////int main(void)
////{
////	SinivelCap scap;
////	SneezeCap zcap;
////	SnuffleCap ncap;
////
////	ColdPatient sufferer;
////	sufferer.TakeSinivelCap(scap);
////	sufferer.TakeSneezeCap(zcap);
////	sufferer.TakeSnuffleCap(ncap);
////
////	return 0;
////}
//
//class Point
//{
//private:
//	int xpos, ypos;
//public:
//	void Init(int x, int y) {
//		xpos = x;
//		ypos = y;
//	}		
//	void ShowPointInfo()	const 
//	{
//		cout << "[" << xpos << ", " << ypos << "]" << endl;
//	}
//};
//
//class Circle
//{
//private:
//	int rad;
//	Point center;
//public:
//	void Init(int x, int y, int r)
//	{
//		rad = r;
//		center.Init(x, y);
//	}
//		void ShowCircleInfo()	const
//		{
//			cout << "radius : " << rad << endl;
//			center.ShowPointInfo();
//		}
//};
//
//
//class Ring {
//private:
//	Circle inCircle;
//	Circle outCircle;
//public:
//	void Init(int inX, int inY, int inR, int outX, int outY, int outR)
//	{
//		inCircle.Init(inX, inY, inR);
//		outCircle.Init(outX, outY, outR);
//	}
//	void ShowRingInfo()	const {
//		cout << "Inner Circle Info" << endl;
//		inCircle.ShowCircleInfo();
//		cout << "Outter Circle Info" << endl;
//		outCircle.ShowCircleInfo();
//	}
//};
//
//int main(void)
//{
//	Ring ring;
//	ring.Init(1, 1, 4, 2, 2, 9);
//	ring.ShowRingInfo();
//	return 0;
//}