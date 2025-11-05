#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

#define ll long long 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n;
    vector<ll> input;

    while (cin >> n)
    {
        input.push_back(n);
    }
    for (ll i = input.size() - 1; i >= 0; --i)
    {
        cout << fixed << setprecision(4) << pow(input[i], 0.5) << "\n";
    }
}
