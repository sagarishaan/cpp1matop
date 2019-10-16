#include<iostream.h>
#include<conio.h>
#include<process.h>
void main()
{
clrscr();
int i,j,n1,m1,ch,a[100][100];
cout<<"\n\tEnter the row and columns of array";
cin>>n1>>m1;
if(cin.fail())
{
 cin.clear();
 cin.ignore();
cout<<"\n\tYou have entered wrong input"<<"\n";
exit(0);
}
cout<<"\n\tEnter the array";
for(i=0;i<n1;i++)
{
 for(j=0;j<m1;j++)
 {
  cin>>a[i][j];
  if(cin.fail())
{
 cin.clear();
 cin.ignore();
cout<<"\n\tYou have entered wrong input"<<"\n";
exit(0);
}
  }
}
cout<<"\n\tEnter the operation you want to perform";
cout<<"\n\t1.Transpose of the matrix";
cout<<"\n\t2.Sum of major and minor diagonal elements";
cout<<"\n\t3.Sum of each row and column";
cout<<"\n\t4.Find the largest and smallest element in each";
cout<<"\n\trows separately and overall smallest and largest element of matrix\n";
cin>>ch;
if(cin.fail())
{
 cin.clear();
 cin.ignore();
cout<<"\n\tYou have entered wrong input"<<"\n";
exit(0);
}
switch(ch)
{
case 1:cout<<"\n\tTranspose of a matrix is \n";
       for(i=0;i<m1;i++)
	{
	 for(j=0;j<n1;j++)
	  {
	   cout<<a[j][i]<<" ";
	   }
	   cout<<"\n";
	 }
	 break;
case 2:if(n1==m1)
       {
       int sum;
       cout<<"\n\tMajor diagonal is";
       for(i=0;i<n1;i++)
	{
	 for(j=0;j<m1;j++)
	 { sum=0;
	  if(i==j)
	  {
	   cout<<a[i][j]<<" ";
	   sum+=a[i][j];
	   }
	   cout<<"\n\tSum of major diagonal: "<<sum;
	   sum=0;
	   cout<<"\n\tMinor diagonal elements: " ;
	   if(i+j==(n1-1))
	   {
	   cout<<a[i][j]<<" ";
	   sum+=a[i][j];
	   }
	   cout<<"\n\tSum of Minor diagonal elements is"<<sum;
       }}}
       else
       {
       cout<<"\n\tThe matrix is not a square matrix";
       }
       break;
case 3: int sum=0;
	i=0;
	while(i<n1)
	{
	 for(j=0;j<m1;j++)
	 {
	 cout<<"\n\tThe sum of row "<<i+1;
	   sum+=a[i][j];
	   }
	  cout<<sum;
	 i++;
	 }
	 sum=0;
	 j=0;
	while(j<m1)
	{
	 for(i=0;i<n1;i++)
	 {
	 cout<<"\n\tThe sum of column "<<j+1;
	   sum+=a[i][j];
	   }
	  cout<<sum;
	 j++;
	 }
	 break;
case 4:int max=0,min=0;
	i=0;
	while(i<n1)
	{
	 cout<<"\n\t Maximum and minimum of"<<i+1<<" row: ";
	 max=a[i][0];
	 for(j=0;j<m1;j++)
	 {
	  max=(a[i][j]>max?a[i][j]:max);
	 }
	 cout<<max<<" ";
	 min=a[i][0];
	 for(j=0;j<m1;j++)
	 {
	  min=(a[i][j]<min?a[i][j]:min);
	 }
	 cout<<min<<" ";
	 i++;
	}
	j=0;
	while(j<m1)
	{
	 cout<<"\n\t Maximum and minimum of "<<j+1<<" column :";
	 max=a[0][j];
	 for(i=0;i<n1;i++)
	 {
	  max=(a[i][j]>max?a[i][j]:max);
	  }
	  cout<<max<<" ";
	 min=a[0][j];
	 for(i=0;i<n1;i++)
	 {
	  min=(a[i][j]<min?a[i][j]:min);
	  }
	  cout<<min<<" ";
	  j++;
	 }
	 cout<<"\n\tMaximum and minimum in the matrix is: ";
	 max=a[0][0];
	 min=a[0][0];
	 for(i=0;i<n1;i++)
	  {
	   for(j=0;j<m1;j++)
	    {
	     max=(a[i][j]>max?a[i][j]:max);
	     min=(a[i][j]<min?a[i][j]:min);
	    }
	   }
	  cout<<max<<" "<<min;
	  break;
default: cout<<"\n\tEnter correct choice";
}
getch();
}
