#include <iostream>
using namespace std;
int main()
{
    int N, H;
    cin >> N >> H;
    int Width = 0, Hth;
    for (int i = 1; i <= N; i++)
    {
        cin >> Hth;
        if (Hth <= H)
            Width++;
        else
            Width += 2;
    }
    cout << Width;
}