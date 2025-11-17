#include <iostream>
#include <stdio.h>
#include <vector>


int main(void)
{
    int array[] = { 4,2,7,4,7,5,7,4,7,6 };
    int length = sizeof(array) / sizeof(int);;
    int occurrences = 0;
    int max_occurrences = 0;
    int max_value = 0;

    for (int i = 0; i < length; i++)
    {
        occurrences = 0;
        for (int j = 0; j < length; j++)
        {
            if (array[j] == array[i])
            {
                occurrences++;
            }
        }
        if (occurrences > max_occurrences)
        {
            max_occurrences = occurrences;
            max_value = array[i];
        }
    }


    printf("max_occurrences: %d\n", max_occurrences);
    printf("max_value: %d\n", max_value);

    return 0;
}