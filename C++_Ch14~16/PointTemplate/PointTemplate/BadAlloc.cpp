//#include<iostream>
//#include<new>
//using namespace std;
//
//int main(void)
//{
//	int n = 0;
//
//	try
//	{
//		while (1)
//		{
//			n++;
//			cout << n << "번재 할당 시도" << endl;
//			new int[1000][1000];
//		}
//	}
//	catch (bad_alloc &bad)
//	{
//		cout << bad.what() << endl;
//		cout << "더 이상 할당 불가!" << endl;
//	}
//	return 0;
//}