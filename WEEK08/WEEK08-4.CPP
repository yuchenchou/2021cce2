#include <stdio.h>
int main()
{
    FILE*fout=fopen("檔案.txt","w+");
    fprintf (fout,"HELLO我在檔案裡哈哈\n");
    printf ("Hello World");
}
