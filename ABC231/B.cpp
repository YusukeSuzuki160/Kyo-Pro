#include <cstdio>
#include <string>
#include <cstring>
using namespace std;

int main() {
    int n;
    int f = 0;
    int m = 0;
    int l = 0;
    int check = 0;
    char data[100][50];
    char name[100][50];
    int flag[100];
    for (int i = 0; i < 100; i++) {
        flag[i] = 0;
    }
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", data[i]);
    }
    for (int i = 0; i < n; i++) {
        strcpy(name[m], data[i]);
        for (int j = i + 1; j < n; j++) {
            if (!strcmp(data[i], data[j])) {
                flag[m]++;
            }
            else if (check == 0) {
                f = j;
                l = 1;
                check = 1;
            }
        }
        if (l == 0) {
            m++;
            break;
        }
        if (l == 1) {
            i = f - 1;
            l = 0;
            check = 0;
        }
        m++;
    }
    int max = flag[0];
    int g = 0;
    for (int i = 0; i < m; i++) {
        if (max < flag[i]) {
            max = flag[i];
            g = i;
        }
    }
    printf("%s", name[g]);
    return 0;





}