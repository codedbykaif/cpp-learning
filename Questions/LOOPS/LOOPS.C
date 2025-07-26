#include <stdio.h>

int main() {
    int n;

    // Taking input from the user
    printf("Enter the number of times to print 'hello world': ");
    scanf("%d", &n);

    // Loop to print "hello world" n times
    for(int i = 0; i < n; i++) {
        printf("hello world\n");
    }

    return 0;
}
