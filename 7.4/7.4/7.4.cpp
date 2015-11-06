#include "stdafx.h"
int _tmain(int argc, _TCHAR* argv[])
{
	int n,i,k;
	cout << "Zadaite razmer massiva" << endl;
	cin >> n;
	int *a =new int[n];
	for (int i = 0; i < n; i++)
	a[i]=rand()%100;
	int max = a[0];
	cout << "Push 'k'" << endl;
	cin >> k;
	for (i=1; i<n; i++)
	{
		if (a[i]%k==0)
		{
			cout << i << endl;
			if (a[i]>max) 
			{
				max=a[i];
			}
		}
	}
	cout << max;
	getch();
	return 0;
}

