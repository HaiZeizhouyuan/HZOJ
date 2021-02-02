/*************************************************************************
	> File Name: 372_3.cpp
	> Author: zhouyuan
	> Mail: 3294207721@qq.com 
	> Created Time: 2021年02月02日 星期二 15时49分26秒
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;
#define MAX_N 500000

class Queue {
public:
    Queue(int *nums):nums(nums) {}
    void push(int val);
    int empty();
    int size();
private:
    int *nums;
    int que[MAX_N + 5], head, tail;
};

void Queue:: push(int loc) {
    while (!empty() && nums[que[tail - 1]] > nums[loc]) tail--;
    que[tail++] = loc;
    return ;
}

int Queue :: empty() {
    return tail == head;
}

int Queue::size() {
    return tail - head;
}
int n;
int nums1[MAX_N + 5], nums2[MAX_N + 5];
Queue que1(nums1), que2(nums2);

void read() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> nums1[i];
    for (int i = 0; i < n; i++) cin >> nums2[i];
    return ;
}
int main() {
    read();
    int p;
    for (p = 0; p < n; p++) {
        que1.push(p);
        que2.push(p);
        if (que1.size() != que2.size()) break;
    }
    cout << p << endl;
 
    return 0;
}
