#include<stdio.h>  
#include<string.h>
#include<fcntl.h>


int i = 0;
int main(int argc, char* argv[]){
      
        FILE *fd;
	int i=0;   
	char roman[4];
	char arr[10][5]={"I","II","III","IV","V","VI","VII","VIII","IX","X"}; 
	
	printf("No of Arguments:%d\n", argc);
	printf("Please give input I to X : ");
	//scanf("%s",roman);
	
	printf("%s\n",argv[1] );
 	
 	flag = 0;	
 	int i=0;
 	char temp[5];
   	strcpy(temp, arr[i]);
   	romantoInt(argv[1],temp);
   	 
 	
 	
 	/*
	for(i=0;i<10;i++){   
    		char temp[5];
   		strcpy(temp, arr[i]); //temp = arr[i];  
    		if(strcmp(argv[1], temp)==0){
       		printf("THE NUMBER IS : %s = %d\n",arr[i],(i+1));
       		fd = fopen("file2.txt","w");
       		fprintf(fd,"%s = %d",arr[i],(i+1));
       		fclose(fd);
       	} 
	}*/    
	return 0;  
}

int romantoInt(argv[1],temp)
 	{

    		if(strcmp(argv[1], temp)==0){
       		printf("THE NUMBER IS : %s = %d\n",arr[i],(i+1));
       		fd = fopen("file2.txt","w");
       		fprintf(fd,"%s = %d",arr[i],(i+1));
       		fclose(fd);
       		flag = 1;
       		return flag;
       	} 
       	else
       	{
       		i++;
       		romantoInt(argv[1],arr[i+1]);
       		flag = 0;
       		return flag;
       	}	
 	}
