#include <stdio.h>
#include <stdlib.h>


int main(int argc, char **argv)
{
    
    FILE *fp;
    fp=fopen("testdaf.txt", "w");
    
    fprintf(fp, "Testing...\n");
    
    fclose(fp);
    
    return 0; 
}
