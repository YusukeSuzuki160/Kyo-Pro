#include <bits/stdc++.h>
#include <numeric>
using namespace std;

int main()
{
    long long a;
    long long b;
    long long c;
    cin >> a >> b >> c;
    long long n1 = gcd(a, b);
    long long n2 = gcd(b, c);
    long long n = gcd(n1, n2);
    cout << (a / n) + (b / n) + (c / n) - 3 << endl;
}