/*************************************************************************
	> File Name: 213.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue May 19 01:25:55 2020
 ************************************************************************/

#include<iostream>
#include<algorithm>
using namespace std;
int cmp(int a, int b){
    return a > b;
}
inline void check(int *num, int n){
    int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0;
    for (int i = 0; i < n; i++) {
        if (num[i] == 100) a++;
        else if (num[i] >= 90 && num[i] <= 99) b++;
        else if (num[i] >= 80 && num[i] <= 89) c++;
        else if (num[i] >= 70 && num[i] <= 79) d++;
        else if (num[i] >= 60 && num[i] <= 69) e++;
        else if (num[i] < 60) f++;
    }
    cout << a << " " << b << " " << c << " " << d << " " << e << " " << f << endl;

}
int main(){
    int n;
    cin >> n;
    int num[n + 5];
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    sort(num,num + n, cmp);
    for (int i = 0; i < n; i++) {
        cout << num[i] <<endl;
    }
    check(num, n);
    return 0;
}
