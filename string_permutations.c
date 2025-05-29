


#include <stdio.h>
#include <string.h>

void swap(char *x, char *y) {
    char temp = *x;
    *x = *y;
    *y = temp;
}

void permute(char *str, int l, int r) {
    if (l == r) {
        printf("%s\n", str);
    } else {
        for (int i = l; i <= r; i++) {
            swap(&str[l], &str[i]);         // Swap current index with l
            permute(str, l + 1, r);         // Recur
            swap(&str[l], &str[i]);         // Backtrack
        }
    }
}

int main() {
    char str[] = "ABCDEF";  // Length 6
    int n = strlen(str);
    
    printf("All permutations of %s:\n", str);
    permute(str, 0, n - 1);

    return 0;
}
