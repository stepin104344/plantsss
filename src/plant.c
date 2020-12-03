#include<plant.h>
int plant(char a[100]){	
	if(strcmp(a,"Downy mildew")==0)
	{
		return 1;
	}
		else if(strcmp(a,"Powdery mildew")==0)
	{
		return 2;
	}
		else if(strcmp(a,"Anthracnose")==0)
	{
		return 3;
	}
		else if(strcmp(a,"Alternaria blight")==0)
	{
		return 4;	
    	}
    else{
    	printf("**please choose the disease name from the above list of diseases** \n");
	}
}	
