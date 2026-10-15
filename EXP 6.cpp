#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int i, n, ok = 1;

    scanf("%s", s);
    n = strlen(s);

    if (n % 2 != 0) ok = 0;
    else {
        for (i = 0; i < n/2; i++)
            if (s[i] != '0' || s[n-1-i] != '1')
                ok = 0;
    }

    printf(ok ? "Accepted" : "Rejected");
    return 0;
}