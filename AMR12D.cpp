#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    scanf("%d", &t);
    char a[100];
    int flag;
    while (t--) {
        flag = 1;
        scanf("%s", a);
        int n = strlen(a) - 1;
        int i;
        for (i = 0; i <= (n / 2); i++)
            if (a[i] != a[n - i]) {
                flag = 0;
                break;
            }
        if (flag == 0)
            printf("NO\n");
        else
            printf("YES\n");
    }
    return (0);
}
 
