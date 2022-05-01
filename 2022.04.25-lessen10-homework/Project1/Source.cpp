#include<iostream>
#include"LinkedList.h"

using namespace std;

int main()
{
	LinkedList s;
	s.pushTail(0);
	s.pushTail(1);
	s.pushTail(2);
	s.pushTail(3);
	s.pushTail(4);
	s.pushTail(5);
	s.pushTail(6);
	cout << s;
	s.insert(9, 9);
	cout << endl << s << endl;
	s.extract(10);
	cout << s << endl;
	s.swap(2, 3);
	cout << s;
	return EXIT_SUCCESS;
}