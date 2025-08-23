#include <stdio.h>
#include <string.h>

int main() {
    char str[100], reversed[100];
    int len, i, flag = 1;

    printf("Enter a string: ");
    scanf("%s", str);  

    len = strlen(str);

    
    for(i = 0; i < len; i++) {
        reversed[i] = str[len - 1 - i];
    }
    reversed[len] = '\0';  

   
    if(strcmp(str, reversed) == 0) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
