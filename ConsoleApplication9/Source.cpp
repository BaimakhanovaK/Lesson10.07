#include<iostream>

using namespace std;

void main() {

	setlocale(LC_ALL, "Rus");

	/*const int n = 5;

	double a[n] = { 1, 20, 3, 17, 11 };
	double at, bt;

	bt = a[0];

	for (int i = 1; i < n - 1; i++)
	{
		at = a[i];
		a[i] = (bt+a[i+1])/2;
		bt = at;
	}

	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;*/

	/*const int n = 8;
	double a[n] = { 4,7,20,3,17,11,1,18 };
	double min_e, max_e;
	int imax, imin, begin, end;
	double p = 1;

	min_e = a[0]; max_e = a[0];
	for (int i = 0; i < n; i++)
	{
		if (min_e < a[i])
		{
			min_e = a[i];
			imin = 1;
		}
		if (max_e > a[i])
		{
			max_e = a[i];
			imax = i;
		}

		begin = imin < imax ? imin : imax;
		end=imin > imax ? imax : imin;

		for(int i= begin+1; i < end; i++)
		p*= a[i];

		cout<<endl;



	}*/

	//***пузырьковая сортировка --> выставляет массив по порядку

	/*const int n = 8;

	double a[n] = { 4,7,0,20,17,11,1,18 };

	for (int pass = 0; pass < n - 1; pass++)
	{
		for (int i = 0; i < n - 1; i++)
		{
			if (a[i] > a[i + 1])
				swap(a[i], a[i + 1]);
		}
	}

	for (int i = 0; i < n; i++)
		cout << a[i] << " ";

	cout << endl;
		system("pause");*/

	////***сортировка со вставками -->
	/*const int n = 8;
	double a[n] = { 4,7,0,20,17,11,1,18 };

	int i = 0;
	for (int pass = 1; pass < n; pass++)
	{
		i = pass;

		while ((a[i] < a[i - 1]) && i > 0)
		{
			swap(a[i], a[i - 1]);
			i--;
		}
	}

	for (int i = 0; i < n; i++)
		cout << a[i] << " ";*/


	//***сортировка с выбором-->
	//ЗАПИСАТЬ ДОМА

	//poisk vo mnozhestve 


	/*bool f = false;

	for(int i=0;i<n;i++)
		if (a[i] == 3)
		{
			f = true;
			break;
		}*/

	//binarnij poisk - nachinaet sravnivat s seredini.
	//primenim k otsortirovannim massivam

	const int n = 8;
	double key = 1;
	int  low, high, middle;

	double a[n] = { 4,7,0,20,17,11,1,18 };

	int i = 0;
	for (int pass = 1; pass < n; pass++)
	{
		i = pass;

		while ((a[i] < a[i - 1]) && i > 0)
		{
			swap(a[i], a[i - 1]);
			i--;
		}
	}
	low = 0;
	high = n - 1;

	while (low <= high)
	{
		middle = (low + high) / 2;
		if (key > a[middle])
			low = middle + 1;
		else if (key < a[middle])
			high = middle - 1;
		else
			break;
	}
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
	cout << middle << endl;
	system("pause");

}