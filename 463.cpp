/*************************************************************************
	> File Name: 463.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri Jun 12 16:06:35 2020
 ************************************************************************/

#include<iostream>
using namespace std;

typedef struct windows{
    int x1, x2, y1, y2;
} Windows;

Windows w1, w2;
int init(Windows, Windows);

int main () {
    cin >> w1.x1 >> w1.x2 >> w1.y1 >> w1.y2;
    cin >> w2.x1 >> w2.x2 >> w2.y1 >> w2.y2;
    cout << init(w1, w2) << endl;
    return 0;
}

int init (Windows w1, Windows w2 ) {
    int length ,height;
    if (w1.x1 < w2.x1 && w2.x1 < w1.x2 && w1.x2 < w2.x2 ) length = w1.x2 - w2.x1;
    else if (w1.x1 > w2.x1 && w1.x2 < w2.x2) length = w1.x2 - w1.x1;
    else if (w2.x1 < w1.x1 && w1.x1 < w2.x2 && w2.x2 < w1.x2) length = w2.x2 -w1.x1;
    else if (w2.x1 > w1.x1 && w2.x2 < w1.x2) length = w2.x2- w2.x1;
    else length = 0;
    
    if (w1.y1 < w2.y1 && w2.y1 < w1.y2 && w1.y2 < w2.y2 ) height = w1.y2 - w2.y1;
    else if (w1.y1 > w2.y1 && w1.y2 < w2.y2) height = w1.y2 - w1.y1;
    else if (w2.y1 < w1.y1 && w1.y1 < w2.y2 && w2.y2 < w1.y2) height = w2.y2 -w1.y1;
    else if (w2.y1 > w1.y1 && w2.y2 < w1.y2) height = w2.y2- w2.y1;
    else height = 0;
    return length * height;
}
