#include <bits/stdc++.h>
using namespace std;

int sum() { return 0; }

template <typename... Args>
int sum(int a, Args... args) { return a + sum(args...); }

#define ll long long
#define rep(i, p, q) for (int i = p; i <= q; i++)
#define all(x) (x).begin(), (x).end()

const int Intmax = 2147483647;
const int Intmin = -2147483648;
const int mod = 1e9 + 7;

ll binary_exponentiation(int n, int power)//calculating n^power
{
    ll ans = 1;
    while (power != 0)
    {
        if (power & 1)
            ans *= n;
        n *= n;
        power >>= 1;
    }
    return ans;
}

void solution()
{
}

int main()
{
    // code here
    return 0;
}