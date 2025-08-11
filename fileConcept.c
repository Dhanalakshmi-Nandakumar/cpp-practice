#include <stdio.h>
int main() {
    //opened a file in writing mode
    FILE *fp=fopen("file1.txt","w");
    //we write something in the file
    fprintf(fp,"Hi i'm learning file concepts");
    fopen("file1.txt","a");
    // we append something in the file
    fprintf(fp,"\nHi i'm learning file concepts");
    
    fclose(fp);
  

    
    return 0;
}