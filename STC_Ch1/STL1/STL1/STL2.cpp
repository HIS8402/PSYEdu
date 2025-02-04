#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
#include <cassert>
#include <algorithm>
#include <vector>
#include <list>
#include <map>
using namespace std;

//template <typename Container>
//Container make(const char s[])
//{
//	return Container(&s[0], &s[strlen(s)]);
//}


//template <typename Container>
//Container make(const char s[])
//{
//	return Container(&s[0], &s[strlen(s)]);
//}


int main()
{



	//cout << "Deonsting generic reverse algorithm on a list" << endl;
	//list<char> list1 = make<list<char>>("mark twain");
	//assert(list1 == make<list<char>>("mark twain"));
	//cout << "---ok" << endl;




	//cout << "Using reverse algorithm with a vector" << endl;
	//vector<char>vector1 = make<vector<char>>("mark twain");
	//reverse(vector1.begin(), vector1.end());
	//assert(vector1 == make<vector<char>>("niawt kram"));
	//cout << "---ok" << endl;

	


	//cout << "Using reverse algorithm with a string" << endl;
	//string string1 = "mark twain";
	//reverse(string1.begin(), string1.end());
	//assert(string1 == "niawt kram");
	//cout << "---ok." << endl;

	//cout << "Using reverse algorithm with an array" << endl;
	//char array1[] = "mark twain";
	//int N1 = strlen(array1);
	//reverse(&array1[0], &array1[N1]);
	//assert(string(array1) == "niawt kram");
	//cout << "---ok." << endl;

	return 0;
}