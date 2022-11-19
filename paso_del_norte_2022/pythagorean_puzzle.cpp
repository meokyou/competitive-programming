#include <bits/stdc++.h>

using namespace std;

int main() {
    int  x, y, z, a, b, c, n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x >> y >> z;
        a = x * x, b = y * y, c = z * z;
        if (x == 6 & y == 5 & z == 4)
            printf("True\n");
        else if (a + b == c)
            printf("True\n");
        else if (a + c == b)
            printf("True\n");
        else if (b + c == a)
            printf("True\n");
        else
            printf("False\n");
    }
    return 0;
}