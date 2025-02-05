#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
#include <cassert>
#include <algorithm>
#include <vector>
#include <list>
#include <map>
#include <deque>
#include <numeric>
#include <functional>
#include <iterator>

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

//template <typename Container>
//Container make(const char s[])
//{
//	return Container(&s[0], &s[strlen(s)]);
//}

//int mult(int x, int y) { return x * y; }




int main()
{
	 //cout << "Using reverse_copy, a copying version of the" << " generic reverse algorithm." << endl;

	//int a[1000], b[1000];
	//for (int i = 0; i < 1000; ++i)
	//	a[i] = i;

	//reverse_copy(&a[0], &a[1000], &b[0]);

	//for (int i = 0; i < 1000; ++i)
	//	assert(a[i] == i && b[i] == 1000 - i - 1);
	//cout << "---ok" << endl;





	//cout << "Using an in-place generic sort algorithm." << endl;
	//int a[1000];
	//for (int i = 0; i < 1000; ++i)
	//	a[i] = 1000 - i - 1;

	//sort(&a[0], &a[1000]);
	//for (int i = 0; i < 1000; ++i)
	//	assert(a[i] == i);
	//cout << "---ok" << endl;





	//int a[10] = { 12,3,25,7,11,213,7,123,29,-31 };
	//int *ptr = find(&a[0], &a[10], 7);

	//assert(*ptr == 7 && *(ptr + 1) == 11);

	//list<int> list1(&a[0], &a[10]);
	//list<int>::iterator i = find(list1.begin(), list1.end(),7);

	//assert(*i == 7 && *(++i) == 11);

	//cout << "Type some characters, including an 'x' followed\n" << "by at least one nowhite-spoace character : " << flush;

	//istream_iterator<char> in(cin);
	//istream_iterator<char> eos;

	//find(in, eos, 'x');

	//cout << "The first nonwhite-space character following\n" << "the first 'x' was" << *(++in) << endl;




	//cout << "Demonstrating generic accumulate algorithm with" << "a reverse iterator." << endl;

	//float small = (float) 1.0 / (1 << 26);
	//float x[5] = { 1.0,3 * small,2 * small,small,small };
	//vector<float> vector1(&x[0], &x[5]);
	//cout << "Valuse to be added : " << endl;
	//vector<float>::iterator i;
	//cout.precision(10);
	//for (i = vector1.begin(); i != vector1.end(); ++i)
	//	cout << *i << endl;
	//float sum = accumulate(vector1.begin(), vector1.end(), (float)0.0);
	//cout << "Sum accumulated from left = " << sum << endl;
	//float sum1 = accumulate(vector1.rbegin(), vector1.rend(), (float)0.0);
	//cout << "Sum accumulated from right = " << (double)sum1 << endl;





	//cout << "Using generic accumulate algorithm to compute a product." << endl;
	//int x[5] = { 2,3,5,7,11 };
	//vector<int> V(&x[0], &x[5]);
	//int product = accumulate(V.begin(), V.end(), 1, multiplies<int>());
	//assert(product == 2310);
	//cout << "---ok" << endl;




	//cout << "Using generic accmulate algorithm to compute a product." << endl;
	//int x[5] = { 2,3,5,7,11 };
	//vector<int> vector1(&x[0], &x[5]);
	//int product = accumulate(vector1.begin(), vector1.end(), 2, mult);
	//assert(product == 2310);
	//cout << "---ok" << endl;




	//cout << "Demonstrating the accumulate function." << endl;
	//int x[5] = { 2,3,5,7,11 };
	//vector<int> vector1(&x[0], &x[5]);
	//int sum = accumulate(vector1.begin(), vector1.end(), 0);
	//assert(sum == 28);
	//cout << "---ok" << endl;




	/*cout << "Demonstrating generic find algorithm with a "<<"an array, a list, and a deque." << endl;
	char s[] = "aeiou";
	int len = strlen(s);
	list<char> list1 = make<list<char>>("bcdfghjklmnpqrstvwxyz");
	deque<char> deque1(26, 'x');

	merge(&s[0], &s[len], list1.begin(), list1.end(), deque1.begin());
	assert(deque1 == make<deque<char>>("abcdefghijklmnopqrstuvxyz"));
	cout << "---ok." << endl;
*/



	//cout << "Demonstrating generic find algorithm with a deque." << endl;
	//deque<char> deque1 = make<deque<char>>("C++ is a better C");
	//deque<char>::iterator where = find(deque1.begin(), deque1.end(), 'e');
	//assert(*where == 'e'&&*(where + 1) == 't');
	//cout << "--ok." << endl;




	//cout << "Demonstrating generic find algorithm with a list." << endl;
	//list<char> list1 = make<list<char>>("C++ is a better C");
	//list<char>::iterator where = find(list1.begin(), list1.end(),'e');
	//list<char>::iterator next = where;
	//++next;
	//assert(*where == 'e'&& *next == 't');
	//cout << "---ok." << endl;



	//cout << "Demonstrating generio find algorithm with an array" << endl;
	//vector<char> vector1 = make<vector<char>>("C++ is a better C");
	//vector<char>::iterator where = find(vector1.begin(), vector1.end(), 'e');

	//assert(*where == 'e'&& *(where + 1) == 't');
	//cout << "---ok." << endl;






	return 0;
}