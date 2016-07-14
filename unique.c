#include<stdio.h>
#include<conio.h>
int main()
{
  int a[100],b[100],n,i,j=1;
  clrscr();
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
   scanf("%d",&a[i]);

  }


  for(i=0;i<n;i++)
  {

       if(a[i]==a[j])
	{

	}
       else  {
	 printf("%d",a[i]);
	 break;
	 }


  }
getch();
return 0;


}
