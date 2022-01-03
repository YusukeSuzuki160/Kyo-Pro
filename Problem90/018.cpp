#include <bits/stdc++.h>
using namespace std;

int main()
{
    const long double PI = 3.14159265358979L;
    long double t;
    cin >> t;
    long double l, x, y;
    cin >> l >> x >> y;
    long double q;
    cin >> q;
    vector<long double> e(q);
    for (int i = 0; i < q; i++)
    {
        cin >> e[i];
    }
    for (int i = 0; i < q; i++)
    {
        long double l1 = sqrt((y + (long double)l / 2.0 * sin(2.0 * e[i] / t * PI)) * (y + (long double)l / 2.0 * sin(2.0 * e[i] / t * PI)) + x * x);
        long double l2 = (long double)l / 2.0 * (1.0 - cos(2 * (e[i] / (long double)t) * PI));
        printf("%.12Lf\n", atan2(l2, l1) / PI * 180.0L);
    }
    return 0;
}