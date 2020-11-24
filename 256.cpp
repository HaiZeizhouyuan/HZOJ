/*************************************************************************
	> File Name: 256.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2020年11月21日 星期六 18时32分56秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;

struct Data {
    int a, b;
    bool operator<(const Data &obj) const {
        return a * b < obj.a * obj.b;
    }
};

vector<Data> arr;

struct BigInt {
    BigInt(int x) {
        num.push_back(x);
        process_dight();
    }
    BigInt(vector<int> &ret) : num(ret){}
    BigInt operator/(int x) {
        int i = num.size(), temp = 0;//temp是余数
        while(i && temp * 10 + num[i - 1] < x) temp = temp * 10 + num[i - 1], i--;
        if (i == 0) return BigInt(0);
        vector<int> ret(i);
        while(i) {
            temp = temp * 10 + num[i - 1];
            ret[i - 1] = temp / x;
            temp %= x;
            i--;
        }
        return BigInt(ret);
    }
    void operator*=(int x) {
        for (int i = 0; i < num.size(); i++) num[i] *= x;
        process_dight();
    }
    void process_dight() {
        for (int i = 0; i < num.size(); i++) {
            if(num[i] < 10) continue;
            if (i + 1 == num.size()) num.push_back(0);
            num[i + 1] += num[i] / 10;
            num[i] %= 10;
        }
        return ;
    }
    bool operator>(const BigInt &obj) {
        if (num.size() - obj.num.size()) return num.size() > obj.num.size();
        for (int i = num.size() - 1; i >= 0; i--) {
            if (num[i] == obj.num[i]) continue;
            return num[i] > obj.num[i];
        }
        return false;
    }
    vector<int> num;
};

ostream &operator<<(ostream &out, const BigInt &obj) {
    for (int i = obj.num.size() - 1; i >= 0; i--) {
        out << obj.num[i];
    }
    return out;
}

int main() {
    int n, a, b;
    cin >> n;
    for (int i = 0; i <= n; i++) {
        cin >> a >> b;
        arr.push_back({a, b});
    }
    sort(arr.begin() + 1, arr.end());
    BigInt p = arr[0].a , ans = 0;
    for (int i = 1; i <= n; i++) {
        if (p / arr[i].b > ans) ans = p / arr[i].b;
        p *= arr[i].a;
    }
    cout << ans << endl;
    return 0;
}
