/*************************************************************************
	> File Name: 240_1.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2021年02月09日 星期二 16时32分52秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;
 
char ans[5000][5000];
int nums[10] = {0, 1};

void func(int x, int y , int n) {
    if (n == 1) {
        ans[x][y] = 'X';
        return ;
    }

    func(x, y, n - 1);
    func(x, y + nums[n] / 3 * 2, n - 1 );
    func(x + nums[n] / 3  * 2, y, n - 1);
    func(x + nums[n] / 3 * 2, y + nums[n] / 3 * 2, n - 1);
    func(x + nums[n] / 3, y + nums[n] / 3, n - 1);
} 


int main() {
    for (int i = 2; i <= 7; i++) {
        nums[i] = nums[i - 1] * 3;
    }
    func(1, 1, 7);

    int n ;
    while(cin >> n) {
        if (n == -1) {
            break;
        }
        for (int i; i <= nums[n]; i++) {
            for (int j = 1; j <= nums[n]; j++) {
                if (ans[i][j] == 'X') {
                    cout << 'X';
                } else {
                    cout << " ";
                }
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
