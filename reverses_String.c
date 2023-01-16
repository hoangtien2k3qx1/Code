
// Reverse a string in C (Pallindrome) : đảo ngược chuỗi trong C

// cách 1: function "strrev()"
// #include<stdio.h>
// #include<string.h>

// void reverses_String (char str[40]) {
//     printf ("Nhap vao string : ");
//     gets(str);
//     printf ("\nPalindrome :%s", strrev(str));

// }

// int main() {
//     char str[40];
//     reverses_String (str);
//     return 0;
// }

//Cách 2: function without using the library function
#include<stdio.h>
#include<string.h>

void reverse_String (char * str) {
    for (int i = 0; i < strlen(str)/2; i++) {
        if (str[i] == '(') {
            
        }
        int temp = str[i];
        str[i] = str[strlen(str)-i-1];
        str[strlen(str)-i-1] = temp;
    }
    
}

int main() {
    char str[30];
    printf ("Nhap vao str : ");
    gets(str);
    reverse_String (str);
    puts (str);
    

    return 0;
}