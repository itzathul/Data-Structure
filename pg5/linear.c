#include <stdio.h>

void main(){
int inputarr[100],elementcount,counter,num;
printf("Enter number of elements in Array\n");
scanf("%d",&elementcount);
printf("Enter %d numbers\n",elementcount);
for(counter=0;counter<elementcount;counter++){
scanf("%d",&inputarr[counter]);}
printf("Enter number to search in Array\n");
scanf("%d",&num);

for(counter=0;counter<elementcount;counter++){
if(inputarr[counter]==num){
printf("number %d found at index of %d \n",num,counter);
break;
}
}
if(counter==elementcount){
printf("Number %d not presenr in input array\n",num);
}
getchar();
}


