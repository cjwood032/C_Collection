#include <stdio.h>
#include <ctype.h>
int main() {
    char c;
    int i=0;
    int count;
    FILE * fp=NULL;
    FILE * fp2=NULL;
    fp = fopen("file.txt", "r");
    fp2 = fopen("file2.txt", "w");
    if (!fp)
        return -1;
    else
    {
        fseek(fp, 0, SEEK_END);
        count = ftell(fp);
        while( i < count)
        {
            i++;
            fseek(fp, -i, SEEK_END);
            fputc(fgetc(fp), fp2);
        }
        fclose(fp);
        fclose(fp2);
        
        
    }
    
    return 0;
}