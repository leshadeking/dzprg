	#include "stdafx.h"
int _tmain(int argc, _TCHAR* argv[])
{
	int n,i;
	bool main = true;
	cout << "Zadaite razmer massiva" << endl;
	cin >> n;
	int *a =new int[n];
	for (int i = 0; i < n; i++)
	a[i]=rand()%100;
	for (int i = 0; i < n; i++)
	if (a[i]<a[i+1])
	{
		main = false;
		cout < "Massiv ne vozrastaet";
		return 1;
	}
	cout << "Massiv vozrast";
	getchar();
	return 0;
}

