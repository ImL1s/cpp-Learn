/*
 * Author: ImL1s
 * email: aa22396584@gmail.com
 * created in 2017/07/29
 */

#include <iostream>
using namespace std;

// �w�q�@�Ӫx�����, T�N��Y�ӶǤJ������
template <typename T>
void myswap(T &a, T &b)
{
	T c;
	c = a;
	a = b;
	b = c;
}

void main()
{
	cout << "start" << endl;

	{
		int a = 1;
		int b = 2;
		myswap(a, b);			// �۰���������
		myswap<int>(a, b);		// �㦡�ե�
		printf("a: %d, b: %d\n", a, b);
	}

	{
		char a = 2;
		char b = 3;
		myswap(a, b);
		myswap<char>(a, b);
		printf("a: %d, b: %d\n", a, b);
	}

	cout << "end" << endl;
	getchar();
}

/* out:
 * 
 * start
 * a: 1, b: 2
 * a: 2, b: 3
 * end
 */