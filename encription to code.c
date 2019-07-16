#include<stdio.h>
int main(){

    FILE *fp;
    fp=fopen("file.c","r");
    int c;

    while((c=getc(fp))!=EOF)
        printf("%d ",c);
    fclose(fp);

}

