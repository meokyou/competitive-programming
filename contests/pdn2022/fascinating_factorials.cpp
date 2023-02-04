#include <bits/stdc++.h>
int main()
{
    int x, p, n;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std:: cin >> x;
        p = 1;
        while (x != 1) {
            x /= p;
            p++;
        }
        std::cout << p - 1 << std::endl;
    }
    
}