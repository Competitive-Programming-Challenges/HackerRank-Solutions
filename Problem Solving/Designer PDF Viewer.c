#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n1,i1,j1,k1,l1,big=0,ans;
    int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z;
    int ab[25];
    for(i1=0;i1<26;i1++)
    {
        scanf("%d", &ab[i1]);
        //printf("%d", ab[i1]);
    }
    char str[10];
    scanf("%s", str);
    l1=strlen(str);
    str[l1];
    
    a=ab[0];
    b=ab[1];
    c=ab[2];
    d=ab[3];
    e=ab[4];
    f=ab[5];
    g=ab[6];
    h=ab[7];
    i=ab[8];
    j=ab[9];
    k=ab[10];
    l=ab[11];
    m=ab[12];
    n=ab[13];
    o=ab[14];
    p=ab[15];
    q=ab[16];
    r=ab[17];
    s=ab[18];
    t=ab[19];
    u=ab[20];
    v=ab[21];
    w=ab[22];
    x=ab[23];
    y=ab[24];
    z=ab[26];

    for(i1=0;i1<l1;i1++)
    {
    if(str[i1]='a')
    {
      if(ab[0]>big)
      {  
      big=ab[0];
      }
    }
    if(str[i1]='b')
    {
      if(ab[1]>big)
      {
      big=ab[1];
      }
    }
    if(str[i1]='c')
    {
      if(ab[2]>big)
      {
      big=ab[2];
      }
    }
    if(str[i1]='d')
    {
      if(ab[3]>big)
      {  
      big=ab[3];
      }
    }
    if(str[i1]='e')
    {
      if(ab[4]>big)
      {
      big=ab[4];
      }
    }
    if(str[i1]='f')
    {
      if(ab[5]>big)
      {
      big=ab[5];
      }
    }if(str[i1]='g')
    {
      if(ab[6]>big)
      {  
      big=ab[6];
      }
    }
    if(str[i1]='h')
    {
      if(ab[7]>big)
      {
      big=ab[7];
      }
    }
    if(str[i1]='i')
    {
      if(ab[8]>big)
      {
      big=ab[8];
      }
    }if(str[i1]='j')
    {
      if(ab[9]>big)
      {  
      big=ab[9];
      }
    }
    if(str[i1]='k')
    {
      if(ab[10]>big)
      {
      big=ab[10];
      }
    }
    if(str[i1]='l')
    {
      if(ab[11]>big)
      {
      big=ab[11];
      }
    }if(str[i1]='m')
    {
      if(ab[12]>big)
      {  
      big=ab[12];
      }
    }
    if(str[i1]='n')
    {
      if(ab[13]>big)
      {
      big=ab[13];
      }
    }
    if(str[i1]='o')
    {
      if(ab[14]>big)
      {
      big=ab[14];
      }
    }if(str[i1]='p')
    {
      if(ab[15]>big)
      {  
      big=ab[15];
      }
    }
    if(str[i1]='q')
    {
      if(ab[16]>big)
      {
      big=ab[16];
      }
    }
    if(str[i1]='r')
    {
      if(ab[17]>big)
      {
      big=ab[17];
      }
    }if(str[i1]='s')
    {
      if(ab[18]>big)
      {  
      big=ab[18];
      }
    }
    if(str[i1]='t')
    {
      if(ab[19]>big)
      {
      big=ab[19];
      }
    }
    if(str[i1]='u')
    {
      if(ab[20]>big)
      {
      big=ab[20];
      }
    }if(str[i1]='v')
    {
      if(ab[21]>big)
      {  
      big=ab[21];
      }
    }
    if(str[i1]='w')
    {
      if(ab[22]>big)
      {
      big=ab[122];
      }
    }
    if(str[i1]='x')
    {
      if(ab[23]>big)
      {
      big=ab[23];
      }
    }if(str[i1]='y')
    {
      if(ab[24]>big)
      {  
      big=ab[24];
      }
    }
    if(str[i1]='z')
    {
      if(ab[25]>big)
      {
      big=ab[25];
      }
    }
    }
    ans=l1*big;
    printf("%d", ans);
}