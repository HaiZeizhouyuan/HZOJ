/*************************************************************************
	> File Name: 270.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue Jun 23 20:00:15 2020
 ************************************************************************/

#include<iostream>
using namespace std;

#define max_n 300000

int s[max_n + 5], m, n;
int q[max_n + 5], head, tail;

void read() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> s[i];
        s[i] += s[i - 1];
    }
}

int slove() {
    head = tail = 0;
    q[tail++] = 0;
    int ans = s[1];
    for (int i = 1; i <= n; i++) {
        if (i - q[head] > m) head++;
        ans = max(ans, s[i] - s[q[head]]);
        while ((tail - head) && s[i] < s[q[tail - 1]]) tail--;
        q[tail++] = i;
    }
    return ans;

}


int main () {
    read();
    cout << slove() << endl;
    return 0;
}
