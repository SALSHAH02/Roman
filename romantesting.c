// Conversion of the Roman Number into the Digit.
#include <stdio.h>
#include <string.h>

#define MAX_LINE_LENGTH 1000


int convert(char); // Declaration of function
int i = 0, num = 0;	// Global Declaration of the Variables
//char romanNumber[100];
char *romanNumber;	// Pointer of the RomanNumber Variable
int fun();
char Invalid();

int main ()
{
    	FILE    *textfile;
	char    line[MAX_LINE_LENGTH];
	textfile = fopen("input.txt", "r");
        if(textfile == NULL)
        return 1;
        while(fgets(line, MAX_LINE_LENGTH, textfile))
             {
       	//printf(line);
       	romanNumber=line;// Reading Input Line by Line.
       	fun();//Logic of the Conversion
  
             }
     
        fclose(textfile);
        //displaying converted number
        return 0;
}
char Invalid()
{
char *invalidfile ="Invalid.txt";
FILE *ip =fopen(invalidfile,"a+");
if(ip == NULL)
	{
	printf("The File is not opened %s",invalidfile);
	return -1;
	}
fprintf(ip,"%s",romanNumber);
fclose(ip);	
}


int convert(char ch)
{
 int value = 0;
 switch(ch)
 {
   case 'I': value = 1; break;
   case 'V': value = 5; break;
   case 'X': value = 10; break;
   case 'L': value = 50; break;
   case 'C': value = 100; break;
   case 'D': value = 500; break;
   case 'M': value = 1000; break;
   case '\0': value = 0; break;
   default: value = -1;
 }
   return value;
}

int fun(void)
{
  printf("%s",romanNumber);
 // printf("value of i %d\n", i);
  //printf("size of input %ld\n", strlen(romanNumber));
  while(romanNumber[ i+1 ] !='\0')
	     {
              //if condition for checking validity of roman number
              if(convert(romanNumber[ i ]) < 0 )
		 {
		  printf("\nInvalid Roman Number.\n");
            	  Invalid();
            	  return 0;
	         }	

       //if condition for checking validity of roman number
       if((strlen(romanNumber) - i ) > 2)
          {
            if(convert(romanNumber[ i ]) < convert(romanNumber[i + 2]))
               {
                 printf("\nInvalid Roman Number.\n");
                 
                 return 0;
               }
          }

       if(convert(romanNumber[ i ]) >= convert(romanNumber[i + 1]))
          {
            num = num + convert(romanNumber[ i ]);
          }
       else
           {
             num = num + (convert(romanNumber[i + 1]) - convert(romanNumber[ i ]));
             i++;
           }
            i++;
            
}


char *filename ="output.txt";
FILE *fp =fopen(filename,"a+");
if(fp == NULL)
	{
	printf("The File is not opened %s",filename);
	return -1;
	}
fprintf(fp,"%d\n",num);
fclose(fp);



printf("\nEquivalent decimal number: %d\n", num);
printf("\n\n");
num=0;
i=0;
}
