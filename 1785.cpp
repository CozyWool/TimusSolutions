#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    short n;

    cin >> n;
    if (n <= 4) cout << "few";
    else if (5 <= n && n <= 9) cout << "several";
    else if (10 <= n && n <= 19) cout << "pack";
    else if (20 <= n && n <= 49) cout << "lots";
    else if (50 <= n && n <= 99) cout << "horde";
    else if (100 <= n && n <= 249) cout << "throng";
    else if (250 <= n && n <= 499) cout << "swarm";
    else if (500 <= n && n <= 999) cout << "zounds";
    else cout << "legion";
}
