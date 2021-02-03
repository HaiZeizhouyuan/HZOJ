/*************************************************************************
	> File Name: 271_2.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2021年02月03日 星期三 08时43分07秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;
#define MAX_N 300000

int n, k;
int nums[MAX_N + 5];
int que[MAX_N + 5], head, tail;

void read() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> nums[i];
    }
    return ;
}

int empty() {
    return tail == head;
}

void get_min() {
    head = tail = 0;
    for (int i = 1; i <= n; i++) {
        while(!empty() && nums[que[tail - 1]] > nums[i]) tail--;
        que[tail++] = i;
        if (i - que[head] >= k) head++;
        if (i >= k) {
            int front_loc = que[head];
            (i - k) && cout << " ";
            cout << nums[front_loc];
        }  
    }
    cout << endl;
    return  ;
}

void get_max() {
    head = tail = 0;
    for (int i = 1; i <= n; i++) {
        while(!empty() && nums[que[tail - 1]] < nums[i]) tail--;
        que[tail++] = i;
        if (i - que[head] >= k) head++;
        if (i >= k) {
            int front_loc = que[head];
            (i - k) && cout << " ";
            cout << nums[front_loc];
        }
    }
    cout << endl;
    return ;
}


int main() {
    read();
    get_min();
    get_max();
 
    return 0;
}
