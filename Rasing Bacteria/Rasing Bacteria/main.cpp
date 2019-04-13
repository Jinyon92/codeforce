#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    long long num;
    cin >> num;
    
    int cnt = 0;
    for (int i = 0 ; i < log2((double)num)+1 ; i++)
    {
        if (num & (1 << i))
        {
            cnt++;
        }
    }
    cout << cnt;
    
    return 0;
}
