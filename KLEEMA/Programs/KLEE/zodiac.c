//This program is zodiac.c
#include<stdio.h>
#ifdef LLBMC
#include <llbmc.h>
#else
#include <klee/klee.h>
#endif
int kappa;
int main()
{
kappa=0;
int  date,ch;

printf("ENTER DATE OF BIRTH AND THEN MONTH NO. codewithc");
//scanf("%d %d",&date,&ch);

klee_make_symbolic(&date, sizeof(int), "date");
klee_make_symbolic(&ch, sizeof(int), "ch");

if (((date>=21)  && (ch==3)) || ((date<=20 )))
printf("YOU ARE A ARIES AND YOUR BIRTHSTONE IS BLOODSTONE");


return 0;
}
