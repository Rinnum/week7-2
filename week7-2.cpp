#include <stdio.h>
#include <iostream>
using namespace std;

int fac(int n)
{
    if (n == 0) {
        return 1;
    } else {
        return n * fac(n - 1);
    }
}

int main()
{
    int n;
    printf("Enter a number = ");
    scanf("%d", &n);
    cout << n << "! = " << fac(n) << endl;
    return 0;
}