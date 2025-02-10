#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
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

//class GreaterThan50
//{
//public:
//	bool operator()	(int x) const { return x > 50; }
//};

//void print_list(string s)
//{
//	cout << s << endl;
//}

//template <typename T>
//class calc_square {
//	T i;
//public:
//	calc_square() :i(0) {	}
//	T operator()() { ++i; return i * i; }
//};

//bool above40(int n) { return (n > 40); }

////template <typename Container>
////Container make(const char s[])
////{
////	return Container(&s[0], &s[strlen(s)]);
////}

//template <typename Container>
//Container make(const char s[])
//{
//	return Container(&s[0], &s[strlen(s)]);
//}

//int sum(int vall, int val2) { return val2 + vall; }

class comp_last {
public:
	bool operator() (int x, int y) const
	{
		return x % 10 < y % 10;
	}
};


int main()
{
	cout << "Illustrating the generic sort, stable_sort, and partial)sort algorithms." << endl;
	const int N = 20;
	vector<int> vector0;
	for (int i = 0; i < N; ++i)
		vector0.push_back(i);
	vector<int> vector1 = vector0;
	ostream_iterator<int>out(cout, " ");
	cout << "Before sorting : \n";
	copy(vector1.begin(), vector1.end(), out);
	cout << endl;
	sort(vector1.begin(), vector1.end(), comp_last());
	cout << "After sorting by lase digits with sort :\n";
	copy(vector1.begin(), vector1.end(), out);
	cout << endl << endl;





	//cout << "Illustrating the generic unique algorithm." << endl;
	//const int N = 11;
	//int array1[N] = { 1,2,0,3,3,0,7,7,7,0,8 };
	//vector<int> vector1;
	//for (int i = 0; i < N; ++i)
	//	vector1.push_back(array1[i]);

	//vector<int>::iterator new_end;
	//new_end = unique(vector1.begin(), vector1.end());

	//assert(vector1.size() == N);
	//vector1.erase(new_end, vector1.end());
	//copy(vector1.begin(), vector1.end(), ostream_iterator<int>(cout, " "));
	//cout << endl;



	//cout << "Illustrating the generic transform algorithm." << endl;
	//int array1[5] = { 0,1,2,3,4 };
	//int array2[5] = { 6,7,8,9,10 };
	//ostream_iterator<int> out(cout, " ");
	//transform(&array1[0], &array1[5], &array2[0], out, sum);
	//cout << endl;






	//cout << "Illustrating the generic swap_ranges algorithm." << endl;
	//vector<char> vector1 = make<vector<char>>("HELLO");
	//vector<char> vector2 = make < vector<char>> ("THERE");

	//vector<char> temp1 = vector1, temp2 = vector2;
	//swap_ranges(vector1.begin(), vector1.end(), vector2.begin());
	//for (char c : vector1)
	//	cout << c;
	//cout << endl;
	//for (char f : vector2)
	//	cout << f;
	//cout << endl;

	//assert(vector1 == temp2 && vector2 == temp1);
	//cout << "---ok." << endl;






	//cout << "Illustrating the generic swap algorithm." << endl;
	//int high = 250, low = 0;

	//swap(high, low);
	//assert(high == 0 && low == 250);
	//cout << "---ok." << endl;

	//vector<int>vector1(100, 1), vector2(200, 2);
	//swap(vector1, vector2);


	//assert(vector1 == vector<int>(200, 2), vector2 == vector<int>(100, 1));







	//cout << "Illustrating the generic rotate algorithm." << endl;
	//string s("Software Engineering ");
	//vector<char>vector1(s.begin(), s.end());
	//for (char c : vector1)
	//	cout << c;
	//cout << endl;

	//rotate(vector1.begin(), vector1.begin() + 9, vector1.end());
	//for (char c : vector1)
	//	cout << c;
	//cout << endl;

	//assert(string(vector1.begin(), vector1.end()) == string("Engineering Software "));
	//cout << "---ok." << endl;






	//cout << "Illustrating the generic replace algorithm." << endl;
	//string s("FERRARI");
	//vector<char> vector1(s.begin(), s.end());
	//for (char c : vector1)
	//	cout << c;
	//cout << endl;
	//replace(vector1.begin(), vector1.end(), 'R','S');
	//for (char c : vector1)
	//	cout << c;
	//	cout << endl;

	//assert(string(vector1.begin(), vector1.end()) == string("FESSASI"));
	//cout << "---ok." << endl;




	//cout << "Illustrating the generic remove algorithm." << endl;
	//const int N = 11;
	//int array1[N] = { 1,2,0,3,4,0,5,6,7,0,8 };
	//vector<int> vector1;
	//for (int i = 0; i < N; ++i)
	//	vector1.push_back(array1[i]);

	//vector<int>::iterator new_end;
	//new_end = remove(vector1.begin(), vector1.end(), 0);

	//assert(vector1.size() == N);

	//vector1.erase(new_end, vector1.end());

	//assert(vector1.size() == N - 3);

	//for (int i = 0; i < (int)vector1.size(); ++i)
	//	assert(vector1[i] == i + 1);
	//cout << "---ok." << endl;






	//cout << "Illustrating the random_shyffle algorithm." << endl;
	//const int N = 20;
	//vector<int>vector1(N);
	//for (int i = 0; i < N; ++i)
	//	vector1[i] = i;
	//for (int j = 0; j < 3; ++j) {
	//	random_shuffle(vector1.begin(), vector1.end());
	//	copy(vector1.begin(), vector1.end(), ostream_iterator<int>(cout, " "));
	//	cout << endl;
	//}







	//cout << "Illustrating the generic partition and" << " stable_partition algorithms." << endl;
	//const int N = 7;
	//int array0[N] = { 50,30,10,70,60,40,20 };
	//int array1[N];
	//copy(&array0[0], &array0[N], &array1[0]);
	//ostream_iterator<int>out(cout, " ");

	//cout << "Original sequence :				";
	//copy(&array1[0], &array1[N], out);
	//cout << endl;

	//int *split = partition(&array1[0], &array1[N], above40);
	//cout << "Result of (unstable) partitioning : ";
	//copy(&array1[0], split, out);
	//cout << "| ";
	//copy(split, &array1[N], &array1[0]);
	//copy(&array0[0], &array0[N], &array1[0]);
	//split = stable_partition(&array1[0], &array1[N], above40);
	//cout << "Result of stable partitioning :		";
	//copy(&array1[0], split, out);
	//cout << "|";
	//copy(split, &array1[N], out);
	//cout << endl;






	//cout << "Illustrating the generic generate algorithm." << endl;
	//vector<int> vector1(10);

	//generate(vector1.begin(), vector1.end(), calc_square<int>());
	//for (int j = 0; j < 10; ++j)
	//	assert(vector1[j] == (j + 1)*(j + 1));
	//for (int c : vector1)
	//	cout << c << endl;
	//cout << "---ok." << endl;






	//cout << "Illustrating the generic fill and fill_n algorithms." << endl;
	//string s("Hello there");
	//vector<char> vector1(s.begin(), s.end());

	//fill(vector1.begin(), vector1.begin() + 5, 'X');
	//for (char c : vector1)
	//	cout << c;

	//assert(string(vector1.begin(), vector1.end()) == string("XXXXX there"));
	//cout << endl;

	//fill_n(vector1.begin() + 5, 3, 'Y');
	//for (char c : vector1)
	//	cout << c ;
	//cout << endl;
	//assert(string(vector1.begin(), vector1.end()) == string("XXXXXYYYere"));
	//cout << "---ok." << endl;




	//cout << "Illustrating the generic copy and copy_backward algorithms." << endl;
	//string s("abcdefghijklmnopqrstuvxyz");
	//vector<char> vector1(s.begin(), s.end());
	//vector<char> vector2(vector1.size());

	//copy(vector1.begin(), vector1.end(), vector2.begin());

	//assert(vector1 == vector2);

	//copy(vector1.begin() + 4, vector1.end(), vector1.begin());

	//assert(string(vector1.begin(), vector1.end()) == string("efghijklmnopqrstuvxyz"));

	//copy_backward(vector1.begin(), vector1.end() - 2, vector1.end());

	//assert(string(vector1.begin(), vector1.end()) == string("efghijklmnopqrstuvxyz"));
	//cout << "---ok." << endl;





	//cout << "Illustrating the generic search algorithm." << endl;
	//vector<int> vector1(20);
	//deque<int> deque1(5);
	//for (int i = 0; i < 20; ++i)
	//	vector1[i] = i;
	//for (int i = 0; i < 5; ++i)
	//	deque1[i] = i+5;

	//vector<int>::iterator k = search(vector1.begin(), vector1.end(), deque1.begin(), deque1.end());
	//cout << *k << endl;

	//for (int i = 0; i < 5; ++i)
	//	assert(*(k + i) == i+5);

	//cout << "---ok." << endl;



	//cout << "Illustrating the generic equal and mismatch algorithms." << endl;
	//list<string> driver_list;
	//vector<string> vec;
	//deque<string> deq;

	//driver_list.insert(driver_list.end(), "Clark");
	//driver_list.insert(driver_list.end(), "Rindt");
	//driver_list.insert(driver_list.end(), "Senna");

	//vec.insert(vec.end(), "Clark");
	//vec.insert(vec.end(), "Rindt");
	//vec.insert(vec.end(), "Senna");
	//vec.insert(vec.end(), "Berger");

	//deq.insert(deq.end(), "Clark");
	//deq.insert(deq.end(), "Berger");

	//assert(equal(driver_list.begin(), driver_list.end(), vec.begin()));	// driver_list와 vec의 처음 3개의 원소가 서로 일치
	//assert(!equal(deq.begin(), deq.end(), driver_list.begin()));		// deq와 driver_list의 처음 2개의 원소가 서로 일치하지 않음

	//pair<deque<string>::iterator, list<string>::iterator>				// deq와 driver_list에서 서로 일치하지 않는 첫 번째 원소의 위치를 찾음
	//	pair1 = mismatch(deq.begin(), deq.end(), driver_list.begin());
	//
	//if (pair1.first != deq.end())
	//	cout << "First disagreement in deq and driver_list:\n " << *(pair1.first) << " and " << *(pair1.second) << endl;






	//cout << "Illustrating the generic for_each algorithm." << endl;
	//list<string> dlist;
	//dlist.insert(dlist.end(), "Clark");
	//dlist.insert(dlist.end(), "Rindt");
	//dlist.insert(dlist.end(), "Senna");
	//for_each(dlist.begin(), dlist.end(), print_list);






	//cout << "Illustrating the generic count algorithm." << endl;
	//int a[] = { 0,0,0,1,1,1,2,2,2 };
	//int final_count = count(&a[0], &a[9], 1);
	//assert(final_count == 3);
	//final_count = count_if(&a[0], &a[9], bind2nd(not_equal_to<int>(), 1));
	//assert(final_count == 6);
	//cout << "---ok." << endl;




	//cout << "Illustracting the generic adjacent_find=algorithm" << endl;
	//deque<string> player(5);
	//deque<string>::iterator i;
	//player[0] = "Pele";
	//player[1] = "Platini";
	//player[2] = "Maradona";
	//player[3] = "Maradona";
	//player[4] = "Rossi";
	//i = adjacent_find(player.begin(), player.end());
	//assert(*i == "Maradona" && *(i + 1) == "Maradona");
	//i = adjacent_find(player.begin(), player.end(), greater<string>());
	//assert(*i=="Platini" && *(i + 1) == "Maradona");
	//cout << "---ok" << endl;




	/*cout << "Illustrating the generic find_if algorithm." << endl;
	vector<int> vector1;
	for (int i = 0; i < 13; ++i)
	{
		vector1.push_back(i*i);
		for (int num : vector1) {
			cout << num << endl;
		}
	}
	vector<int>::iterator where;
	where = find_if(vector1.begin(), vector1.end(), GreaterThan50());

	assert(*where == 64);
	cout << "---ok" << endl;*/

	return 0;
}