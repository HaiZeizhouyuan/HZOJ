/*************************************************************************
	> File Name: 372_1.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2021年02月02日 星期二 15时11分28秒
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

class Queue {
public:
    Queue(int *arr) :arr(arr){}
    void push(int i){
        while(tail - head && arr[q[tail - 1]] > arr[i]) --tail;
        q[tail++] = i;
        return ;
    }
  
    void pop() {
        ++head;
    }
    int size() {
        return tail - head;
    }
   
private:
    int *arr;
    int q[MAX_N + 5], head, tail;
};

Queue q1(a), q2(b);
int n;

/*void read() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    return;
}
*/

void read() {
        cin >> n;
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        return ;

}
int main() {
    read();
    int p;
    for (p = 0; p < n; p++) {
        q1.push(p);
        q2.push(p);
        if (q1.size() != q2.size()) break;
    }
    cout << p << endl;
 
    return 0;
}

