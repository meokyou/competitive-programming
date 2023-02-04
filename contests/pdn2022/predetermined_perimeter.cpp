#include <bits/stdc++.h>

using namespace std;

int max_area(float perimeter)
{
    int length = (int)ceil(perimeter / 4);
    int breadth = (int)floor(perimeter /4);
    
    return length * breadth;
}

int main()
{
    int n;
    cin >> n;
    float p;
    for (int i = 0; i < n; i++) {
        cin >> p;
        cout << max_area(p) << endl;
    }
}