/*************************************************************************
	> File Name: arr.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年10月27日 星期二 18时13分06秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
using namespace std;
 
int n, m, arr[105][105];

int main() {
    memset(arr, 0x3F, sizeof(arr));//数大，　且＊２为正
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        if (arr[a][b] > c) {
            arr[a][b] = c;
            arr[b][a] = c;
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (arr[i][j] == 0x3F3F3F3F) 
                cout << 0 << " ";
            else
                cout << arr[i][j] << " ";
        }
        cout << endl;
        
    }
 
    return 0;
}
