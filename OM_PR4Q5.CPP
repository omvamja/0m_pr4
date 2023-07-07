/*Q5,	1        1
	12      21
	123    321
	1234  4321
	1234554321 */
  #include<stdio.h>
  #include<conio.h>
  void main(){
int i,j,k,s;
  clrscr();

for(i=1;i<=5;i++){
   for(j=1;j<=i;j++){
   printf("%d",j);
		 }
for(s=i;s<=4;s++) {
printf(" ") ;
}

for(k=i;k<=4;k++){
     printf(" ");
}
	for(j=i;j>=1;j--)
  {
	printf("%d",j);

  }

    printf("\n");
  }
  getch();}