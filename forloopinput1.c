#include <stdio.h>

int main(void)
{
    int i = 1, biggestNumber;
    printf("Biggest number you wanna create a number line to is: ");  //Input number upto which you want a number line.
    scanf("%d", &biggestNumber);

    while (i != biggestNumber)      //Numbers will keep printing as long as it is not equal to the biggest number.
    {
        printf("%d\n", i);
        i++;
    }

    printf("%d\n", i);  //Extra printf because here while-loop doesn't print the final number.

    return 0;
}
