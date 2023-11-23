#include <cs50.h>
#include <stdio.h>


int main(void)
{
    // get input
    int size;
    do
    {
        size = get_int("Size Of Pyramid: ");
    }
    while (size < 1 | size > 8);

    // choose pyramid size
    if (size == 8)
        {
            printf("       #\n");
            printf("      ##\n");
            printf("     ###\n");
            printf("    ####\n");
            printf("   #####\n");
            printf("  ######\n");
            printf(" #######\n");
            printf("########\n");
        }
        if (size == 7)
        {
            printf("      #\n");
            printf("     ##\n");
            printf("    ###\n");
            printf("   ####\n");
            printf("  #####\n");
            printf(" ######\n");
            printf("#######\n");
        }
        if (size == 6)
        {
            printf("     #\n");
            printf("    ##\n");
            printf("   ###\n");
            printf("  ####\n");
            printf(" #####\n");
            printf("######\n");
        }
        if (size == 5)
        {
            printf("    #\n");
            printf("   ##\n");
            printf("  ###\n");
            printf(" ####\n");
            printf("#####\n");
        }
        if (size == 4)
        {
            printf("   #\n");
            printf("  ##\n");
            printf(" ###\n");
            printf("####\n");
        }
        if (size == 3)
        {
            printf("  #\n");
            printf(" ##\n");
            printf("###\n");
        }
        if (size == 2)
        {
            printf(" #\n");
            printf("##\n");
        }
        if (size == 1)
        {
            printf("#\n");
        }
}