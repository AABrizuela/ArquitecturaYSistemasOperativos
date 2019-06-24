#include <stdio.h>
#include <stdin.h>

int main(int argc, char const *argv[])
{
    int num = 50, i;

    for(i = 1; i<=num; i++){

        if(!(num % i)){
            printf("%d", i);
        }
    }
    return 0;
}
