#include<stdio.h>
int main(){
    int x[1000];
    int i;
    for(i=0;i<1000;i++)
    {
        scanf("%d",&x[i]);
        if(x[i]==1)
            break;
    }
   for(i=0;i<1000;i++)
    {
        if(x[i]==1)
            break;
        printf("%c",x[i]);
    }
    return 0;
}
