//Zahika Ihsan
#include <iostream>
using namespace std;
int main ()
{
	int N;
    cout << "Enter a positive integer N: ";
    cin >> N;
    while (N > 1) {
    bool isPrime = true;
    for (int i = 2; i * i <= N; ++i) 
	{if (N % i == 0) 
	{ isPrime = false;
    break;
    }
    }
    if (isPrime) 
	{cout << "Largest prime number less than or equal to " << N << " is: " << N <<endl;
    break;
    }
    --N;
    }    
    if (N <= 1) 
	{cout << "No prime number found less than or equal to 1." <<endl;
    }
    return 0;
}