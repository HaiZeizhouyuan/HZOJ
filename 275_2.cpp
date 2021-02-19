/*************************************************************************
	> File Name: 275_2.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2021年02月04日 星期四 08时52分16秒
 ************************************************************************/

#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
#include<vector>
#include<stdlib.h>
#include<queue>
#include<map>
#include<vector>
#include<math.h>
const int INF = 0x3f3f3f3f;
using namespace std;
typedef long long ll;
typedef double ld;
typedef unsigned long long ull;
const int N = 1000010,base=131;///131进制的数来表示
int l,r;
int x,y;
char str[N];
ull h[N],p[N];
 
ull slove(int l,int r)
{
    return h[r]-h[l-1]*p[r-l+1];
}
int main()
{
    scanf("%s",str+1);
    int n=strlen(str+1);
    p[0]=1;///131的0次方为1.
    for(int i=1; i<=n; i++)
    {
        h[i]=h[i-1]*base+str[i]-'a'+1;
        p[i]=p[i-1]*base;
    }
    int q;
    cin>>q;
    while(q--)
    {
        cin>>l>>r>>x>>y;
        ull ans1=slove(l,r);
        ull ans2=slove(x,y);
         if(l==x&&r==y)
        {
            cout<<"Yes"<<endl;
            continue;
        }
        if(ans1==ans2)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}
