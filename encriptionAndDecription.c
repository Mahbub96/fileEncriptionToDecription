#include<stdio.h>
#include<windows.h>
#include<conio.h>

void encription();
void decription();

int main(){
    char choice;
    printf("\n\n\n\n\n\t 1.Encription \t 2.Decription \t 0.Exit \n\t Enter your choice: ");
    do{
        choice=getch();
        if(choice=='1')
            encription();
        else if(choice=='2')
            decription();
            else if(choice=='0')
            {
                system("cls");
                printf("\n\tBye...");
                Sleep(3000);
                exit(0);
            }



    }while(1);
    return 0;
}


void decription(){
    int x[1000];
    int i;
    printf("\n\n\n Enter your Code:");
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
    getch();
    main();
}


void encription(){
    FILE *fp;
    fp=fopen("file.txt","r");
    int c;
    printf("\n\n\n\n\n your code is :\'");
    while((c=getc(fp))!=EOF)
        printf("%d ",c);
        printf("\'");
    fclose(fp);
    getch();
    main();

}
