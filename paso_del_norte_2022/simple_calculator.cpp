#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    int x, y;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        if (1.0 * x / y < 1)
            printf("%d %d %d .%d\n", x + y, x * y, x - y, int(ceil(1.0 * x / y * 100)));
        else
            printf("%d %d %d %.2f\n", x + y, x * y, x - y, 1.0 * x / y);
    }
    return 0;
}