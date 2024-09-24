#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double  S, S1 ;
	int n, k;


	S1 = 0;
	n = 1;

	while (n <= 18)

	{
		S = 0;
		k = n;
		while (k <= 20)

		{
			S += sqrt(fabs( 1 - k / n)) / (2 * pow(n,2) + pow(k,2));
			k++;

		}
		S1 += S ;
		n++;

	}
	cout << S1 << endl;


	S1 = 0;
	n = 1;
	do
	{
		S = 0;
		k = n;
		do
		{
			S += sqrt(fabs(1 - k / n)) / (2 * pow(n, 2) + pow(k, 2));
			k++;

		} while (k <= 20);

		S1 += S;
		n++;
	} while (n <= 18);
	cout << S1  << endl;

	S1 = 0;
	for (n = 1; n <= 18; n++)
	{
		S = 0;
		for (k = n; k <= 20; k++)

		{
			S += sqrt(fabs(1 - k / n)) / (2 * pow(n, 2) + pow(k, 2));
		}
		S1 += S; 

	}
	cout << S1 << endl;

	S1 = 0 ;
	for (n = 18; n >= 1; n--)

	{
		S = 0;
		for (k = 20; k >= n; k--)

		{
			S += sqrt(fabs(1 - k / n)) / (2 * pow(n, 2) + pow(k, 2));
			
		}
		S1 += S;
	}
	cout << S1 << endl;
	return 0;
}