#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string a,b;

    getline(cin, a);
    getline(cin, b);
    cout << ((a[3] - '0') % 2 == 0 || (b[3] - '0') % 2 == 1 ? "yes" : "no");
}
