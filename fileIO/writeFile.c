#include <stdio.h>
int main() {

    FILE * fp=NULL;
    fp = fopen("outfile.txt", "w+");
    if (!fp)
        return -1;
    else
    {
        fprintf(fp, "%s %s %d", "Execute", "order", 66);
        fclose(fp);
    }
    return 0;
}