/*************************************************************************
	> File Name: 540.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年09月27日 星期日 09时59分09秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
using namespace std;

int n, x;
int nums[45], ans[2][3000005], mark[2], sum;
void func(int rec, int s, int e) {
    if (sum > x) return ;
    ans[rec][mark[rec]++] = sum;
    for (int i = s; i < e; i++) {
        sum += nums[i];  
        func(rec, i + 1, e);
        sum -= nums[i];
    }
    return ;
}
int main() {
    while(cin >> n >> x ){
        mark[0] = mark[1] = 0;
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }
        func(0, 0, n / 2);//第零组数据
        func(1, n / 2, n);//第一组数据
        sort(ans[1], ans[1] + mark[1]);
        int flag = 0;
        for (int i = 0; i < mark[0]; i++) {
            int l = 0, r = mark[1] - 1;
            int re = x  - ans[0][i];
            while(l <= r) {
                int mid = (l + r) / 2;
                if (ans[1][mid] == re) {
                    cout << "YES" << endl;
                    flag = 1;
                    break;
                }
                if (ans[1][mid] > re) r = mid - 1;
                else l = mid + 1;
            }
            if (flag) break;
        }
        if (!flag) cout << "NO" << endl;

    }
    return 0;
}
