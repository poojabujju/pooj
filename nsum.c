#include <iostream>
using namespace std;

int main()
{
    int n, s = 0;

    cout << "Enter a positive integer: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) 
	{
        s += i;
    }

    cout << "s = " << s;
    return 0;
}
