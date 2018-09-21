#include <stdio.h>
#include <math.h>
int  main()
{
  int n,nn,i;
  printf("Nhap n:");
  scanf("%d",&n);
  nn=abs(n);
  printf("\nCac uoc la: 1 -1 ");
  if (nn%2==0)
      for (i=2;i<=(int)sqrt(nn);i++)
        if (nn%i==0)
          if (i*i!=nn) printf(" %d %d %d %d ",i,-1*i,nn/i,-nn/i);
                else printf(" %d %d ",i,-1*i);
  if (nn%2!=0)
      for (i=3;i<=(int)sqrt(nn);i=i+2)
        if (nn%i==0)
          if (i*i!=nn) printf(" %d %d %d %d ",i,-1*i,nn/i,-nn/i);
              else printf(" %d %d ",i,-1*i);
    printf(" %d %d ",nn,-1*nn);
return 0;

}  
