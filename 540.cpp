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

int n, x, ans;
int nums[45], cnt[2][3000005], mark[2];
void func(int rec, int s, int e, int sum) {
    if (sum > x) return ;
    for (int i = s; i < e; i++) {
        sum += nums[i];
        cnt[rec][mark[rec]++] = sum;
        func(rec, i + 1, e, sum);
        sum -= nums[i];
    }
    return ;
}
int main() {
    while(scanf("%d%d", &n, &x)) {
        mark[0] = mark[1] = 0;
        for (int i = 0; i < n; i++) {
            scanf("%d", &nums[i]);
        }
        func(0, 0, n / 2, 0);
        func(1, n / 2, n, 0);
        sort(cnt[1], cnt[1] + mark[1]);
        int flag = 0;
        for (int i = 0; i < mark[0]; i++) {
            int l = 0, r = mark[1] - 1;
            int re = x  - cnt[0][i];
            while(l <= r) {
                int mid = (l + r) / 2;
                if (cnt[1][mid] == re) {
                    printf("YES\n");
                    flag = 1;
                    break;
                }
                if (cnt[1][mid] > re) r = mid - 1;
                else l = mid + 1;
            }
            if (flag) break;
        }
        if (flag == 0) printf("NO");

    }
    return 0;
}
