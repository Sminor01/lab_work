#include <iostream>
#include <fstream>
#include <time.h>
#include <stdlib.h>
#include <conio.h>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	int temp;
	int* MAS;
	srand(time(NULL));
	const int N = 5;
	vector<int> vec;
	short* m = new short[N];
	for (int i = 0; i < N; i++)
	{
		m[i] = rand() % 90 + 10;
		cout << endl;
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; i < N - j - 1; j++)
		{
			if (m[i] > m[j + 1])
			{
				temp = m[j];
				m[j] = m[j + 1];
				m[j + 1] = temp;
			}
		}
	}

	ofstream fout("cppstudio.txt");
	for (int i = 0; i < N; i++) {
		fout << m[i] << " " << "   ";
	}
	for (int i = 0; i < N; i++)
	{
		vec.push_back(m[i]);
	}
	sort(vec.begin(), vec.end());
	for (int i = 0; i < N; i++)
	{
		fout << " " << vec[i] << " ";
		cout << endl;
	}

	MAS = new int[2 * N - 1];
	int k = 0;
	for (int i = 0; i < 2 * N - 1; i++)
	{
		if (i % 2 == 0)
		{
			MAS[i] = vec[k];
			k += 1;
		}
	}
	for (int i = 1; i < 2 * N - 1; i += 2)
	{
		MAS[i] = MAS[i - 1] + 1;
	}
	fout << endl;
	for (int i = 0; i < 2 * N - 1; i++)
	{
		fout << MAS[i] << " ";
		//fout << endl;
	}
	fout.close();
	delete[] m;
	return 0;
}