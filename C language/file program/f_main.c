#include<stdio.h>
main()
{
    char ch;
    FILE *fp;
    fp=fopen("simple.txt","r");
    if(fp==NULL)
    {
        printf("Cannot open file");
        exit(1);
    }
    ch=fgetc(fp);
    while(!feof(fp))
    {
        printf("%c",ch);
        ch=fgetc(fp);
    }
    fclose(fp);
    getch();
}

