#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //Ask and get name
    string name = get_string("What's your name?\n");
    
    //Say hello with name
    printf("hello, %s\n", name);
}