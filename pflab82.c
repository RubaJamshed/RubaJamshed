 #include <stdio.h>

int main() {
    int n;
    printf("Enter the starting odd number: ");
    scanf("%d", &n);

    for (int i = n; i >= 1; i -= 2) {
        for (int j = n; j >= i; j -= 2) {
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}