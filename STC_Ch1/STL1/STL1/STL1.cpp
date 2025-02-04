//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <vector>
//#include <list>
//using namespace std;
//
//class pair_int_char
//{
//public:
//	int first;
//	char second;
//	pair_int_char(int x, char y) :first(x), second(y) { }
//};
//
//class pair_bool_double
//{
//public:
//	bool first;
//	double second;
//	pair_bool_double(bool x, double y) :first(x), second(y) { }
//};
//
//template <typename T1, typename T2>
//class pair_tmp
//{
//public:
//	T1 first;
//	T2 second;
//	pair_tmp(T1 x, T2 y) :first(x), second(y) { }
//};
//
//int intmax(int x, int y)
//{
//	if (x < y)
//		return y;
//	else
//		return x;
//}
//
////template <typename T>
////T max(T x, T y)
////{
////	if (x < y)
////		return y;
////	else
////		return x;
////}
//
//template <typename T>
//const T& max(const T& x, const T&y)
//{
//	if (x < y)
//		return y;
//	else
//		return x;
//}
//
//vector<char> vec(const char s[])
//{
//	return vector<char>(&s[0], &s[strlen(s)]);
//}
//
//list<char> lst(const char s[])
//{
//	return list<char>(&s[0], &s[strlen(s)]);
//}
//
//template <typename Container>
//Container makd(const char s[])
//{
//	return Container(&s[0], &s[strlen(s)]);
//}
//
//template <typename Container>
//Container make(const char s[])
//{
//	return Container(&s[0], &s[strlen(s)]);
//}
//
//int main(void)
//{
//	pair_int_char pair1(13, 'a');
//	cout << pair1.first << endl;
//	cout << pair1.second << endl << endl;
//
//	pair_bool_double pair2(true, 0.1);
//	cout << pair2.first << endl;
//	cout << pair2.second << endl << endl;
//
//	pair_tmp<int, char> pair3(1, 's');
//	cout << pair3.first << endl;
//	cout << pair3.second << endl << endl;
//
//	int u = 3, v = 4;
//	double d = 10.7;
//	cout << max(u, v) << endl;
//	cout << max(d, 9.3) << endl << endl;
//
//	const char* str = "N!";
//	vector<char> result = vec(str);
//	for (char c : result) {
//		cout << c;
//	}
//	cout << endl<<endl;
//
//	const char*str2 = "I!";
//	list<char> resultlist = lst(str2);
//	for (char c : resultlist)
//	{
//		cout << c;
//	}
//	cout << endl << endl;
//
//	const char* str3 = "C!";
//	vector<char> resultvt = makd<vector<char>>(str3);
//	for (char c : resultvt)
//	{
//		cout << c;
//	}
//	cout << endl<<endl;
//
//	const char*str4 = "E!";
//	list<char> resultlt = makd<list<char>>(str4);
//	for (char c : resultlt)
//	{
//		cout << c;
//	}
//	cout << endl << endl;
//
//	vector<char> V = makd<vector<char>>("PINK!");
//	for (char c : V)
//	{
//		cout << c;
//	}
//	cout << endl << endl;
//
//	list<char> L = makd<list<char>>("BREEZE!");
//	for (char c : L)
//	{
//		cout << c;
//	}
//	cout << endl << endl;
//
//	return 0;
//}