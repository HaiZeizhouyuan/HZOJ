/*************************************************************************
	> File Name: test_537.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年09月19日 星期六 09时38分47秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

int l, c, cnt, ans_cnt, ycnt, fcnt;
char let[30], ans[30];

int func(int s, int left) {
    if (left == 0) {
                if (!(ycnt >= 1 && fcnt >= 2)) return 0;
        for (int i = 0; i < l; i++) {
                        cout << ans[i];
                    
        }
                cnt ++;
                cout << " " << cnt << endl;
                if (cnt == 25000) return -1;
                return 0;
            
    }
    for (int i = s; i < c; i++) {
                ans[ans_cnt++] = let[i];
                int flag = 0;
                if (let[i] == 'a' ||
                               let[i] == 'e' ||
                               let[i] == 'o' ||
                               let[i] == 'i' ||
                    let[i] == 'u') {
                                    ycnt++;    
                                
                    } else {
                                    fcnt++;
                                    flag = 1;
                                
                    }
        if (func(i + 1, left - 1) == -1) {
                        return -1;
                    
        }
        if (flag == 1) {
                        fcnt--;
                    
        } else {
                        ycnt--;
                    
        }
                ans_cnt--;
                    
    }

}

    int main() {
            cin >> l >> c;
        for (int i = 0; i < c; i++) {
                    cin >> let[i];
                
        }
            sort(let, let + c);
            func(0, l);
            return 0;

    }
