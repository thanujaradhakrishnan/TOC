#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int i = 0, j, n, ok = 1;

    scanf("%s", s);
    n = strlen(s);

    while (s[i] == '0') i++;
    j = i;
    while (s[j] == '1') j++;

    if (j != n || i % 2 != 0) ok = 0;

    printf(ok ? "Accepted" : "Rejected");
    return 0;
}