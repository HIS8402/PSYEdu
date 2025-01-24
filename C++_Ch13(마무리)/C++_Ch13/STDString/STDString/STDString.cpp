#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <string>
#include <cstring>
using namespace std;

template <typename T>
class Point
{
private:
	T xpos, ypos;
public:
	Point(T x = 0, T y = 0);
	void ShowPosition()	const;
};

template <typename T>
Point<T>::Point(T x, T y) : xpos(x),ypos(y)
{}

template <typename T>
void Point<T>::ShowPosition() const
{
	cout << "[ " << xpos << ", " << ypos << " ]" << endl;
}

int main(void)
{
	Point<int> pos1(3, 4);
	pos1.ShowPosition();

	Point<double> pos2(2.4, 3.6);
	pos2.ShowPosition();

	Point<char>pos3('P', 'F');
	pos3.ShowPosition();
	return 0;
}



//template <typename T>
//class Point
//{
//private:
//	T xpos, ypos;
//public:
//	Point(T x = 0, T y = 0):xpos(x),ypos(y)
//	{ }
//	void ShowPosition()	const {
//		cout << "[ " << xpos << ", " << ypos << " ]" << endl;
//	}
//};
//
//int main(void)
//{
//	Point<int> pos1(3, 4);
//	pos1.ShowPosition();
//
//	Point<double> pos2(2.4, 3.6);
//	pos2.ShowPosition();
//
//	Point<char>pos3('P', 'F');
//	pos3.ShowPosition();
//	return 0;
//}




//template <typename T>
//T Max(T a, T b)
//{
//	return a > b ? a : b ;
//}
//template<>
//char* Max(char*a, char* b)
//{
//	cout << "char* Max<char*>(const char* a,const char* b)" << endl;
//	return strlen(a) > strlen(b) ? a : b;
//}
//
//template<>
//const char*Max(const char*a, const char*b)
//{
//	cout << "const char* Max<const char*>(const char*a, const char*b)" << endl;
//	return strcmp(a, b) > 0 ? a : b;
//}
//
//int main(void)
//{
//	cout << Max(11, 15) << endl;
//	cout << Max('T', 'Q') << endl;
//	cout << Max(3.5, 3.7) << endl;
//	cout << Max("Simple", "Best") << endl;
//
//	char str1[] = "Simple";
//	char str2[] = "Best";
//	cout << Max(str1, str2) << endl;
//	return 0;
//}



//template <typename T>
//T Max(T a, T b)
//{
//	return a > b ? a : b;
//}
//
//int main(void)
//{
//	cout << Max(11, 15)<<endl;
//	cout << Max('T', 'Q') << endl;
//	cout << Max(3.5, 7.5) << endl;
//	cout << Max("Simple", "Best") << endl;
//	return 0;
//}




//template <typename T>
//T SumArray(T arr[], int len)
//{
//	T sum = (T)0;
//	for (int i = 0; i < len; i++)
//		sum += arr[i];
//	return sum;
//}
//
//int SumArray(int arr[], int len)
//{
//	int sum = 0;
//	for (int i = 0; i < len; i++)
//		sum += arr[i];
//	return sum;
//}
//
//int main(void)
//{
//	int arr1[] = { 10,20,30 };
//	cout << SumArray(arr1, sizeof(arr1) / sizeof(int)) << endl;
//	double arr2[] = { 10.3,20.4,30.5 };
//	cout << SumArray(arr2, sizeof(arr2) / sizeof(double)) << endl;
//
//	return 0;
//}




//class Point
//{
//private:
//	int xpos, ypos;
//public:
//	Point(int x = 0, int y = 0) : xpos(x),ypos(y)
//	{}
//	void ShowPosition()	const
//	{
//		cout << "[ " << xpos << ", " << ypos << " ]" << endl;
//	}
//};
//template <typename T>
//void SwapData(T& data1, T& data2)
//{
//	T temp = data1;
//	data1 = data2;
//	data2 = temp;
//}
//
//int main(void)
//{
//	Point pos1(3, 4);
//	Point pos2(10, 20);
//	SwapData(pos1, pos2);
//	pos1.ShowPosition();
//	pos2.ShowPosition();
//	
//	return 0;
//}





//template <class T1, class T2>
//void ShowData(double num)
//{
//	cout << (T1)num<<" ," << (T2)num << endl;
//}
//
//int main(void)
//{
//	ShowData<char, int>(65);
//	ShowData<char, int>(67);
//	ShowData<short, double>(69.2);
//	ShowData<short, double>(70.4);
//
//	return 0;
//}




//template <typename T>
//T Add(T num1, T num2)
//{
//	cout << "T Add(T num1, T num2)" << endl;
//	return num1 + num2;
//}
//
//int Add(int num1, int num2)
//{
//	cout << "Add(int num1, int num2)" << endl;
//	return num1 + num2;
//}
//
//double Add(double num1, int num2)
//{
//	cout << "Add(double num1, double num2)" << endl;
//	return num1 + num2;
//}
//
//int main(void)
//{
//	cout << Add(5, 7) << endl;
//	cout << Add(3.7, 7.5) << endl;
//	cout << Add<int>(5, 7) << endl;
//	cout << Add<double>(3.7, 7.5) << endl;
//	return 0;
//}



//template <typename  T>
//T Add(T num1, T num2)
//{
//	return num1 + num2;
//}
//
//int main(void)
//{
//	cout << Add<int>(25, 20) << endl;
//	cout << Add<double>(2.9, 3.7) << endl;
//	cout << Add<int>(3.2, 3.2) << endl;
//	cout<<Add<double>(3.14, 2.75) << endl;
//
//	return 0;
//}






//class String
//{
//private:
//	int len;
//	char *str;
//public:
//	String();
//	String(const char *s);
//	String(const String& s);
//	~String();
//	String&operator=(const String& s);
//	String&operator+=(const String& s);
//	bool operator==(const String& s);
//	String operator+ (const String& s);
//
//	friend ostream& operator<<(ostream& os, const String& s);
//	friend istream& operator>>(istream& is, String& s);
//};
//
//String::String()
//{
//	len = 0;
//	str = NULL;
//}
//
//String::String(const char*s)
//{
//	len = strlen(s) + 1;
//	str = new char[len];
//	strcpy(str, s);
//}
//
//String::String(const String& s)
//{
//	len = s.len;
//	str = new char[len];
//	strcpy(str, s.str);
//}
//
//String::~String()
//{
//	if (str != NULL)
//		delete[]str;
//}
//
//String& String::operator=(const String& s) {
//	if (str != NULL)
//		delete[] str;
//	len = s.len;
//	str = new char[len];
//	strcpy(str, s.str);
//	return *this;
//}
//
//String&String::operator+=(const String& s)
//{
//	len += (s.len - 1);
//	char *tempstr = new char[len];
//	strcpy(tempstr, s.str);
//
//	if (str != NULL)
//		delete[]str;
//	str = tempstr;
//	return *this;
//}
//
//bool String::operator== (const String& s)
//{
//	return strcmp(str, s.str) ? false : true;
//}
//
//String String::operator+ (const String& s)
//{
//	char* tempstr = new char[len + s.len - 1];
//	strcpy(tempstr, str);
//	strcat(tempstr, s.str);
//
//	String temp(tempstr);
//	delete[]tempstr;
//	return temp;
//}
//
//ostream& operator<<(ostream& os, const String& s)
//{
//	os << s.str;
//	return os;
//}
//
//istream& operator>>(istream& is, String& s)
//{
//	char str[100];
//	is >> str;
//	s = String(str);
//	return is;
//}
//
//int main(void)
//{
//	String str1 = "I like ";
//	String str2 = "string class ";
//	String str3 = str1 + str2;
//	
//	cout << str1 << endl << str2 << endl << str3 << endl;
//
//	str1 += str2;
//	if (str1 == str3)
//		cout << "동일 문자열!" << endl;
//	else
//		cout << "동일하지 않은 문자열!" << endl;
//	String str4;
//	cout << "문자열 입력 : ";
//	cin >> str4;
//	cout << "입력한 문자열 : " << str4 << endl;
//
//	return 0;
//}


//int main(void)
//{
//	string str1 = "I like ";
//	string str2 = "string class";
//	string str3 = str1 + str2;
//	cout << str1 << endl << str2 << endl << str3 << endl;
//
//	str1 += str2;
//	if (str1 == str3)
//		cout << "동일 문자열!" << endl;
//	else
//		cout << "동일하지 않은 문자열!" << endl;
//
//	string str4;
//	cout << "문자열 입력 : ";
//	cin >> str4;
//	cout << "입력한 문자열 : " << str4 << endl;
//
//	return 0;
//}