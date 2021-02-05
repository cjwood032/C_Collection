#include <stdio.h>
#include <ctype.h>
int main() {
    char c;
    FILE * fp=NULL;
    FILE * fp2=NULL;
    fp = fopen("file.txt", "r");
    fp2 = fopen("file2.txt", "w");
    if (!fp)
        return -1;
    else
    {
        while((c=fgetc(fp))!=EOF)
        {
            if(c!='\n')
                if (!isupper(c))
                    fputc(toupper(c),fp2);
                else
                    fputc(tolower(c),fp2);
            else
                fputc(c,fp2);
        }
        fclose(fp);
        fclose(fp2);
        
        remove("file.txt");
        rename("file2.txt", "file.txt");
    }
    
    return 0;
}