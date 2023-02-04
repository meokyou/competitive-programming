#include <bits/stdc++.h>

std::map<int, int> cache;
int count = 3;

int main()
{
    int n;
    float k;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cin >> k;
        k = round(k);
        while (cache.find(k)==cache.end()) {
            cache.insert(std::pair<float, int>(round((count-2)*180.0/count),count));
            ++count;
        }
        std::cout << cache[k] << std::endl;
    }
}