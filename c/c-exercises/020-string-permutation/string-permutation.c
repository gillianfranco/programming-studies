#include <stdio.h>
#include <string.h>

void swap(char *a, char *b);
void to_permute(char *str, int start, int end);

int main() {
    char str[] = "BCA";
    int size = strlen(str);

    to_permute(str, 0, size - 1);

    return 0;
}

void swap(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

void to_permute(char *str, int start, int end) {
    if (start == end) {
        printf("%s\n", str);
    } else {
        for (int i = start; i <= end; i++){
            swap((str + start), (str + i));
            to_permute(str, start + 1, end);
            swap((str + start), (str + i));
        }
    }
}