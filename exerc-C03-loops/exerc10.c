#include <stdio.h>
#include <string.h>

int main()
{
    
    int result;
    
    for (int i = 1; i <= 50; i++) {
        result += i*2;
    }
    
    printf("%d", result);

    return 0;
}