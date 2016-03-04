#include <stdio.h>
#include <cs50.h>

int main (void)

{
    int height, rows, spaces, hashes;

    do
    {
        printf("Height: ");
        height = GetInt();
    }
    while ((height < 0) || (height > 23));
    
    for (rows = 1; rows <= height; rows++)
    {
            
        for (spaces = (height - rows); spaces > 0; spaces--)
        {
            printf(" ");
        }
        
        for (hashes = 1; hashes <= (rows + 1); hashes++)
        {
             printf("#");
        }
                
        printf("\n");
    }
    return 0;
}