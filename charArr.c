#include <stdio.h>
#include <string.h>
int main() {
    //Your Code goes here!
    char *name="dhanalakshmi";
    //u cannot string edit
   // name[0]='D';
    printf("%20.13s ",name);
    char name_[]="udayakumar";
    name_[0]='U';
    name_[1]='D';
    printf("%s ",name_);
    // char username[3];
    // scanf("%s",username);
    // printf("%s",username);
    // char demo[]={'d','h','a','n','a','\0'};
    //printf("%s",demo);
    
    char *ptr=NULL;
    ptr=name_;
    for(int i=0;i<strlen(name_);i++)
    {
        printf("   %c  ",ptr[i]);
    }
    ptr+=2;
   // printf("%c",*ptr);
    return 0;
}