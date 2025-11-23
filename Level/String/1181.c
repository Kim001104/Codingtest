#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {

    const char* sa = (const char*)a;
    const char* sb = (const char*)b;


    int lenA = strlen(sa); 
    int lenB = strlen(sb);

    if(lenA == lenB) return strcmp(sa,sb);
    return lenA-lenB;
}

int main() {
    int n;
    char str[20000][51] = { 0 };
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%s", str[i]);
    }
    // printf("%s", str);
    qsort(str, n, sizeof(str[0]), compare);

    for(int i =0; i < n; i++) {
        if(strcmp(str[i], str[i+1]) != 0 || i == n -1) {
            printf("%s\n", str[i]);
        }
    }

    return 0;
}