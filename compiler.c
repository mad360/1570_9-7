#include <stdio.h>

int main() {
   FILE *fp;

   fp = fopen("mad360.txt", "r");

   char *line = NULL;
   fscanf(line ,fp, "%s" );
   printf("%s\n", line);
   fclose(fp);
   return 0;
}