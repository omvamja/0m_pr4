/*Q,2
	11
	1213
	141516
	17181920
	2122232425*/

  #include<stdio.h>
  #include<conio.h>
  void main(){
int i,j,k=11;
  clrscr();


  for(i=1;i<=5;i++)
 {
	for(j=1;j<=i;j++)
  {
	printf("%d",k++);

  }

    printf("\n");
  }
  getch();}