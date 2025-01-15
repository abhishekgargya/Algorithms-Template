#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

template <class T>
using oset = tree<T, null_type, less<T>,                           // less,greater,less_equal
                  rb_tree_tag, tree_order_statistics_node_update>; // find_by_order,order_of_key

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