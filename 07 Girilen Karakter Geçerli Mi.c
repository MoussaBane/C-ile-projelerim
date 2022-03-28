#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

  char izinliler[62+1];
  int i;
  for(int i=0;i<26;i++)
        izinliler[i]=65+i;

  for(int i=0;i<26;i++)
        izinliler[26+i]=97+i;

  for(int i=0;i<10;i++)
        izinliler[52+i]=48+i;

  puts(izinliler);
  printf("\n\n");

  //kullanici * karakterini girince program bitecek

  char girdi;
  while(1)
  {
      girdi=getch();
      if(girdi=='*')
        break;
      else
      {
        for(int i=0;i<62;i++)
        {
            if(girdi==izinliler[i])
            {
                break;
            }
        }

        if(i==62)
        {//aradýðýmý bulamadým
            ;
        }
        else
            putch(girdi);
       /* if(i!=62)
        {//aradýðýmý bulamadým
            putch(girdi);
        }*/
      }
  }










    return 0;
}
