#include <stdio.h>
int main() {
    char c;
    
    int count=1;//the final line won't have a newline.
    FILE * fp=NULL;
    fp = fopen("file.txt", "r+");
    if (!fp)
        return -1;
    else
    {
        while((c=fgetc(fp))!=EOF)
        {
            
            if (c=='\n')
                count++;
        }
        fclose(fp);
    }
    printf("there are %i lines!\n", count);
    return 0;
}