#include <bits/stdc++.h>

using namespace std;

int sieve(int n)
{
    int sum = 0;
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));

    for (int p=2; p * p <= n; p++)
        if (prime[p] == true)
            for (int i= p * 2; i <= n; i += p)
                prime[i] = false;
    
    for (int p =2; p <= n; p++)
        if (prime[p])
            sum += p;
    
    return sum;
}

int main()
{
    int n, p;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> p;
        cout << sieve(p) << endl;
    }

}