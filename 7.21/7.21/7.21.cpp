#include "stdafx.h"
int _tmain(int argc, _TCHAR* argv[])
{
	int n,i,summ,v;
	summ=0;
	cout << "Zadaite razmer massiva" << endl;
	cin >> n;
	int *a =new int[n];
	for (int i = 0; i < n; i++)
		a[i]=rand()%100-50;
//	    cin >> a[i];
	int i1,i2;
	i1=i2=0;
	for (int i = 0; i < n; i++)
	{
		if (a[i]<0)
		{
			i1=i;
			break;
		}
	}
	if (i1==0) 
	{
		cout << "V massive net otricatelnih chisel" << endl;
		getch();
		return 2;
	}
	for (int i = n-1;  i > 0; i--)
	{
		if (a[i]<0)
		{
			i2=i;
			break;
		}
	}
	if (i1==i2)
	{ 
		cout << "V massive odno otricatelnoe chislo" << endl;
		getch();
		return 1;
	}
	for (int i = i1; i < i2; i++)
		summ+=a[i];
	cout << "Iskomaya summa = " << summ;
	getch();
	return 0;
}
