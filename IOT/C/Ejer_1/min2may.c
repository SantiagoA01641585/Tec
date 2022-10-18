#include <stdio.h>
#include <ctype.h>
#include <unistd.h>

int main(){
    char c;
    char may;
    int n = 0;
    int is_vowel = 0;

    do{
        is_vowel = 0;
        n = read(STDIN_FILENO, &c, 1);
        may = tolower(c);
        if(may == 'a' || may == 'e' || may == 'i' || may == 'o' || may == 'u')  is_vowel = 1;
        if(is_vowel) write(STDOUT_FILENO, &c, 1);
    } while(n != 0);

    return 0;
}