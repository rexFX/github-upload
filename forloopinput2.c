#include <stdio.h>

int main(void)
{
    int smallestNumber, biggestNumber;
    printf("Smallest number: ");
    scanf("%d", &smallestNumber); // Input smallest number from which a number line should start.
    printf("Biggest number: ");
    scanf("%d", &biggestNumber);  // Input biggest number at which a number line should end.

    while (smallestNumber != biggestNumber)  // Numbers will keep printing as long as this condition is met.
    {
        printf("%d\n", smallestNumber);
        smallestNumber++;
    }

    printf("%d\n", smallestNumber); // Extra condition because here while-loop doesn't print the final number.

    return 0;
}
