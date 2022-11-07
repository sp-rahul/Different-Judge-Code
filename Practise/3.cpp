#include <stdio.h>
int main() {
   FILE *f = fopen("new.txt", "r");
   int c = getc(f);
   while (c != EOF) {
      putchar(c);
      c = getc(f);
   }
   if (feof(f))
   printf("Reached to the end of file.");
   else
   printf("Failure.");
   fclose(f);
   getchar();
   return 0;
}