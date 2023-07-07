/*Q6, 	5
       454
      34543
     2345432
    123454321 */
  #include<stdio.h>
  #include<conio.h>
  void main(){
int i,j,k,s;
  clrscr();

for(i=5;i>=1;i--){

	for(k=i;k>=1;k--){
	printf(" ");
	}
	for(j=i;j<=5;j++){
	printf("%d",j);
	}
	for(s=5-1;s>=i;s--){
	printf("%d",s);}


    printf("\n");
  }
  getch();}