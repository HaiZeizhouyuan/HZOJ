/*************************************************************************
	> File Name: 509.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed Jun 10 18:49:00 2020
 ************************************************************************/

#include<iostream>
#include<algorithm>
using namespace std;
#define max_n 500
#define max_m 1000

typedef struct game {
    int times, money;
} GAME;

void init(int, int, GAME *);

GAME game[max_n + 5];
int mark[max_n + 5] = {1};

bool cmp(GAME a, GAME b) {
    return a.money > b.money;
}

int main() {
    int m, n;
    cin >> m >> n;
    for (int i = 0; i < n; i++) {
        cin >> game[i].times;
    }
    for (int i = 0; i < n; i++) {
        cin >> game[i].money;
    }
    sort(game, game + n, cmp);
    init(m, n, game);
    return 0;
}

void init(int m, int n, GAME *game) {
    for (int i = 0; i < n; i++) {
        for (int j = game[i].times; j >= 0; j--) {
            if (!mark[j]) {
                mark[j] = 1;
                break;
            }
            if (!j) m -= game[i].money;
        }
    } 
    cout << m << endl;
    return ;
}
