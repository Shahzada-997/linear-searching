#include<stdio.h>
int main() {
int i,n,key,a[20];

printf("enter your array size:");
scanf("%d",&n);

printf("Enter your array element:");
for (i=0;i<n;i++){
scanf("%d",&a[i]);
}

printf("search:");
 scanf("%d",&key);

for(i=0;i<n;i++){
if (a[i]==key){
printf("found\n");
       break;
}
}
if (i==n){
    printf("not found");
}
if(i<n){
    printf("index number:%d",i );
}
return 0;
}
