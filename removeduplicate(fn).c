#include<stdio.h>
#include<string.h>
int removedup();
void main()
{
  char str[100];
  scanf("%s",str);
  int n=strlen(str);
  removedup(str,n);
}
int removedup(char str[],int n)
{
  for(int i=0;i<n;i++)
  {
    for(int j=i+1;j<n;j++)
    {
      if(str[i]==str[j])
      {
        for(int k=j;k<n;k++)
        {
          str[k]=str[k+1];
        }
      }
    }
  }
  printf("%s",str);
  return 0;
}
  
