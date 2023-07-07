/*Q,3    5
	45
       345
      2345
    12345  */
  #include<stdio.h>
  #include<conio.h>
  void main(){
int i,j,k;
  clrscr();


  for(i=5;i>=1;i--)
 { for(k=2;k<=i;k++){
     printf(" ");
 }
	for(j=i;j<=5;j++)
  {
	printf("%d",j);

  }

    printf("\n");
  }
  getch();}