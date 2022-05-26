#include <iostream>
using namespace std;
string MahmoudandEhabandtheevenoddgame()
{
    long long n;
    cin >> n;
    if (n % 2 == 0 && n != 0)
        return "Mahmoud";
    return "Ehab";
}
int main()
{
    cout << MahmoudandEhabandtheevenoddgame();
}