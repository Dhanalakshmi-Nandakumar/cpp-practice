#include <stdio.h>
int main() {
    //Your Code goes here!
    FILE *fp=fopen("file1.txt","r");
    
    char storage[100];
    //fgets take 3 parameter , 1-->where to store 2-->maximum size 3-->which address
    //fgets-->it only read first line
   
    while( fgets(storage,100,fp))
    {
     printf("%s",storage);
    }
   
    fclose(fp);
    return 0;
}