#include <stdio.h>

main()
{
    int Max, BigData = 0, Data = 0;
    for (Max = 0; Max < 10; Max++)
    {
        printf("Enter your number:");
        scanf("%d", &Data);
        // printf("Enter an integer: %d", c);
        if (Data > BigData)
        {
            BigData = Data;
        }
    };
    printf("farthest value : %d", BigData);
    return 0;
}
