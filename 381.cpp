/*************************************************************************
	> File Name: 381.cpp
	> Author: zhouyuan
	> Mail: 
	> Created Time: 2020年09月02日 星期三 19时56分11秒
 ************************************************************************/

#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;


int sum_mon = 0, max_mon = 0;
string max_name;

int main() {
    int n, score_last, score_cri, num_write;
    string name;
    char b, x;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> name >> score_last >> score_cri >> b >> x >> num_write;
        int my_mon = 0;
        if (score_last > 80 && num_write >= 1)  my_mon += 8000;
        if (score_last > 85 && score_cri > 80) my_mon += 4000;
        if (score_last > 90) my_mon += 2000;
        if (score_last > 85 && x == 'Y') my_mon += 1000; 
        if (score_cri > 80 && b == 'Y') my_mon += 850;
           
        if (my_mon > max_mon) {
            max_mon = my_mon;
            max_name = name;
                    
        }
        sum_mon += my_mon;
            
    }
    cout << max_name << endl << max_mon << endl << sum_mon << endl;
    return 0;

}
