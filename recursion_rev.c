#include <stdio.h>

int reverse(int num, int rev) {
    if (num == 0) {
        return rev;
    }
    
    return reverse(num / 10, rev * 10 + num % 10);
}

int main() {
    int num, result;
    
    printf("Enter an integer: ");
    scanf("%d", &num);
   
    result = reverse(num, 0);
    
    printf("Reversed number = %d\n", result);
    
    return 0;
}
