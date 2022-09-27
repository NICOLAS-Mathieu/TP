#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int nb)
{
	if (nb <= 1)
	{
		return false;
	}
	if (nb == 2)
	{
		return true;
	}
	for (int i = 2; i < ceil(sqrt(nb))+1; i++)
	{
		if (nb % i == 0)
		{
			return false;
		}
	}
	return true;
}


void main()
{
	int nb1;
	int nb2;
	int nb3;
	cout << "ecrivez trois nombre : ";
	cin >> nb1 >> nb2 >> nb3;
	if (isPrime(nb1))
	{
		cout << nb1 << ": le nombre est premier \n";
	}
	else
	{
		cout << nb1 << ": le nombre n'est pas premier \n";
	}
	if (isPrime(nb2))
	{
		cout << nb2 << ": le nombre est premier \n";
	}
	else
	{
		cout << nb2 << ": le nombre n'est pas premier \n";
	}
	if (isPrime(nb3))
	{
		cout << nb3 << ": le nombre est premier \n";
	}
	else
	{
		cout << nb3 << ": le nombre n'est pas premier \n";
	}
}