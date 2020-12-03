#include<stdio.h>
#include<string.h>
#include "plant.h"
int main()
{
	char a[10];
	int plants=0;
	printf("ENTER DISEASE NAME AMONG THESE \n Downy mildew \n Powdery mildew \n Anthracnose \n Alternaria blight \n ");
	printf("*******ENTER DISEASE NAME******* \n ");
	scanf("%s",a);
	plants=plant(a);
	if(plants==1){
		printf("SYMPTOMS:: \n ");
		printf("Symptoms of this disease are frequently confused with those of powdery mildew. Infected leaves develop pale yellow-green lesions which gradually turn brown. Severely infected leaves often drop prematurely. \n ");
		printf("***TREATMENT SUGGESTED*** \n ");
		printf("Penn State Extension recommends spraying grapevines with a fungicide just before blossoms open, seven to 10 days later, and 10 to 14 days after that, followed by a final application three weeks later \n ");
	}
	if(plants==2){
		printf("SYMPTOMS:: \n ");
		printf("Diseased leaves appear whitish gray, dusty, or have a powdery white appearance. Petioles, cluster stems, and green shoots often look distorted or stunted.  \n ");
		printf("***TREATMENT SUGGESTED*** \n ");
		printf("Apply a 1-2% oil treatment to the vines within 2 days of the water application. In general, petroleum-based oils work better than plant-based oils. Thorough spray coverage is essential for good results. Forget using bicarbonate products; they do not work when the powdery mildew pressure is very high. \n ");
	}
	if(plants==3){
		printf("SYMPTOMS:: \n ");
		printf("The disease appears first as dark red spots on the berry. Later, these spots are circular, sunken, ashy-gray and in late stages these spots are surrounded by a dark margin which gives it the “bird’s-eye rot” appearance. The spots vary in size from 1/4 inch in diameter to about half the fruit.\n ");
		printf("***TREATMENT SUGGESTED*** \n ");
		printf("Remove and destroy any infected plants in your garden. For trees, prune out the dead wood and destroy the infected leaves. \n You can try spraying your plants with a copper-based fungicide, though be careful because copper can build up to toxic levels in the soil for earthworms and microbes.\n ");
	}
	if(plants==4){
		printf("SYMPTOMS:: \n ");
		printf("Symptoms in the form of dark brown-purplish patches appear on the infected berries, rachis and bunch stalk with the shoots. \n ");
		printf("***TREATMENT SUGGESTED*** \n ");
		printf("Treatment for alternaria requires fungicide to be sprayed directly on infected plants, as well as improvements in sanitation and crop rotation to prevent future outbreaks.\n Organic gardeners are limited to sprays of captan or copper fungicides, making control much more challenging. \n ");
	}
	return 0;
}
