#include <stdio.h>

int n, k, cnt, ans_cnt;
char ans[30];

int func(char start) {
    for (char a = start; a <= 'A' + n - 1; a++) {
        printf("start = %c, a = %c, ans_cnt = %d, cnt = %d\n", start, a, ans_cnt, cnt);
        ans[ans_cnt++] = a;
        cnt++;
        for (int i = 0; i < ans_cnt; i++) {
            printf("%c", ans[i]);
        }
        printf("\n");
        if (cnt == k) {
            for (int i = 0; i < ans_cnt; i++) {
                printf("%c", ans[i]);
            }
            return 1;
        }
        printf("have if\n");
        if (func(a + 1)) {
            printf(" flag == 1");
            return 1;
        }
        ans_cnt--;
    }
    return 0;
}

int main() {
    scanf("%d%d", &n, &k);
    func('A');
    printf("\n");
    return 0;
}
 
