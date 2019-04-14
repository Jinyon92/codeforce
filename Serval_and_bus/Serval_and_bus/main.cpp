#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
using namespace std;

vector< pair<int, int> > bus;

int main()
{
    int n,t;
    scanf("%d %d", &n, &t);
    for(int i=0; i<n; i++)
    {
        int val1, val2;
        scanf("%d %d", &val1, &val2);
        bus.push_back(make_pair(val1, val2));
    }
    int ans = 0;
    bool isStop = true;
    while(isStop)
    {
        int cnt = 0;
        for(int i=0; i<bus.size(); i++)
        {
            if(t == bus[i].first)
            {
                ans = i+1;
                isStop = false;
                break;
            }
            if(t > bus[i].first)
            {
                bus[i].first += bus[i].second;
            }
            if(t < bus[i].first)
            {
                cnt += 1;
                if(cnt == n)
                {
                    isStop = false;
                }
            }
        }
    }
    if(ans == 0)
    {
        int key = bus[0].first;
        ans = 1;
        for(int i=1; i<n; i++)
        {
            if(key > bus[i].first)
            {
                ans = i+1;
                key = bus[i].first;
            }
        }
    }
    printf("%d", ans);
    return 0;
}
