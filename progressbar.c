#include<stdio.h>
#include<unistd.h>
void update_bar(int i);
int main()
{
    for(int i=1; i<=33; i++)
    {
        update_bar(i);
        usleep(200000);
    }
    printf("\n");
    return 0;
}

void update_bar(int i)
{
    int total=33,remaining=total-i,k;
    printf("\r[");
    for(k=0; k<i; k++)
        printf("▣");
    for(k=0; k<remaining; k++)
    {
        printf(".");
    }
    printf("\033[0;37m");
    printf("]%d%%",i*3+1);
    fflush(stdout);
}