/*************************************************************************
	> File Name: LG_3371.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年10月27日 星期二 19时24分39秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int n, m, s, arr[1005][1005];

int main() {
    memset(arr, 0x3F, sizeof(arr));
    cin >> n >> m >> s;
    for (int i = 1; i <= n; i++) {
        arr[i][i] = 0;
    }
    for (int i = 0; i < m; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        arr[a][b] = min(arr[a][b], c);
    }

    for (int i = 1;  i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            for (int k = 1; k <= n; k++) {
                arr[j][k] = min(arr[j][k], arr[j][i] + arr[i][k]);
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        if (i != 1) {
            cout << " ";
        }
        if (arr[s][i] == 0x3F3F3F3F) {
            cout << pow(2, 31) - 1;
        } else {
            cout << arr[s][i];
        }
    }
    cout << endl;
 
    return 0;
}
