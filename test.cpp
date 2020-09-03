/*************************************************************************
	> File Name: test.cpp
	> Author: zhouyuan
	> Mail: 
	> Created Time: 2020年09月03日 星期四 10时13分27秒
 ************************************************************************/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int max_all = 0, score_last, score_cri, num_write;
string  max_name, name;
char officer, west;
int main() {
    int n, ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> name >> score_last >> score_cri >> officer >> west >> num_write;
        int temp = 0;
        if (score_last > 80 && num_write >= 1) temp += 8000;
        if (score_last > 85 && score_cri > 80) temp += 4000;
        if (score_last > 90) temp += 2000;
        if (score_last > 85 && west == 'Y') temp += 1000;
        if (score_last > 80 && officer == 'Y') temp += 850;
        if (temp > max_all) {
            max_all = temp;
            max_name = name;
        }
        ans += temp;       
    }
    cout << max_name << endl;
    cout << max_all << endl;
    cout << ans << endl;
    return 0;

}
 

