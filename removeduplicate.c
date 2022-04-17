#include<stdio.h>
void main()
{
  char str[100];
  scanf("%s",str);
  int n=strlen(str);
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
}
  
