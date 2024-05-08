#include<stdio.h>
#include<conio.h>
#include<windows.h>
void main()
{
  FILE *fp;
  char fna[20],ch;
  printf("Enter the file Name=");
  scanf("%s",&fna);
  fp=fopen(fna,"r");
  if(fp==NULL)
  printf("File Not Found");
  else
  {
    while(1)
    {
      ch=fgetc(fp); 
      printf("%c",ch);  
      Sleep(10);
      if(ch==EOF)
        break;
     }
  }  
  fclose(fp);
  getch();
}

