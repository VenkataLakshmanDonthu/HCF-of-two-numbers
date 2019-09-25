#include <stdio.h> 

int max(int y,int a)
{
  int x,b;
  if(x>b)
  {return x;}
  else{
  return b;}
}


int main() 
{ 
int n,m,hcf,i,lar;
printf("enter the numbers");
scanf("%d%d",&n,&m);
  lar=max(n,m);
  for(i=1;i<lar;i++)
  {
   if(n%i==0&&m%i==0)
   {
   hcf=i;
   }
  }
  printf("%d is the hcf of the two number",hcf);
	return 0; 
} 