#include<stdio.h>
int main(){
char x;
printf("Enter a String: ");
scanf("%c",&x);
int y;
y=x-'0';
printf("Extracted digits: %d",y);
return 0;
}
