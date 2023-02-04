#include <bits/stdc++.h>

using namespace std;

int compare_float(float f1, float f2)
{
    float precision = 0.00001;
    if (((f1 - precision) < f2) && ((f1 + precision) > f2))
        return 1;
    else
        return 0;
}

float operate(float a, float b, char k)
{
    switch (k)
    {
        case '+':
            return a + b;
        case '-':
            return a - b;
        case '*':
            return a * b;
        case '/':
            return a / b;
    }
    return 0;
}

int main()
{
    int n;
    float n1, n2, n3;
    char o1, o2;
    string s;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> n1 >> o1 >> n2 >> o2 >> n3;
        if (o1 == '=')
            cout << (n1 == operate(n2, n3, o2) ? "true" : "false") << endl;
        else
            cout << (n3 == operate(n1, n2, o1) ? "true" : "false") << endl;
    }
}