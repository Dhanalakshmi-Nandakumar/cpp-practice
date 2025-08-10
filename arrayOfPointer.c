#include <stdio.h>

int main() {
   char a='U',b='K',c='U',d='D';
   char *soul[]={&a,&b,&c,&d};
   int n=sizeof(soul)/sizeof(char);
   for(int i=0;i<n;i++)
   {
      printf("MINE %C ):\n",*soul[i]);

   }
    
    return 0;
}