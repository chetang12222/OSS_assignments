#include <stdio.h>
#include <string.h>

int main ()
{
  FILE * ptr;
  int n;
  char myData[100];
  char fname[20]="OSS_Lab1.txt";
  char str;
  char ch;
   
	printf(" Number of lines you want to write in the file -> ");
	scanf("%d", &n);
  printf("\n");
	printf("Your Content : \n");

// To write in the file 
	ptr = fopen (fname,"w"); // w -> write

  scanf("%c",&ch); // input buffer 

	for(int i = 0; i < n; i++)
		{
		fgets(myData, sizeof myData, stdin);
		fputs(myData, ptr);
		}
  fclose (ptr);


// To read from the file 

	ptr = fopen (fname, "r");  // r -> read
	printf("\nThe content of the file is  :\n");
	str = fgetc(ptr);
	while (str != EOF)
		{
			printf ("%c", str);
			str = fgetc(ptr);
		}
    printf("\n");
    fclose (ptr);
    return 0;
}
