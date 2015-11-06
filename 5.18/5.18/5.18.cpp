#include "stdafx.h"
int _tmain(int argc, _TCHAR* argv[])
{
	int n,m,i,z;
	cout << "Push N" << endl;
	cin >> n;
	cout << "Push M" << endl;
	cin >> m;
	for (int i = 0; i < m-n ; i++ , m++)
	{
		z=m*m;
		if ((m == z%100)||(m == z%10))
		{
			cout << m << z << endl;
		}
	}
	getch();
	return 0;
}