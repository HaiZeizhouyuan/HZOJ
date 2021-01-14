/*************************************************************************
	> File Name: 372.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2021年01月10日 星期日 21时00分21秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;
#define MAX_N 500000

int a[MAX_N + 5], b[MAX_N + 5];

class Queue{
public:
    Queue(int *arr) : arr(arr){}

    void push(int i) {
        while(tail - head && arr[q[tail - 1]] > arr[i]) --tail;
        q[tail++] = i;
        return ;
    }

    void pop() { ++ head; }
    int size() { return tail - head; }

private:
    int *arr;
    int q[MAX_N + 5], head, tail;
};

int n;

Queue q1(a), q2(b);


void read(){
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) vin >> b[i];
    return ;
}


int main() {
    read();
    cout << << endl;
 
    return 0;
}
