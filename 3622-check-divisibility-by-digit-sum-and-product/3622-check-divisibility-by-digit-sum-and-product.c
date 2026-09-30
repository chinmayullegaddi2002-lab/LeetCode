#include<stdio.h>
#include<stdbool.h>
#include<math.h>
bool checkDivisibility(int n) {
    char nu[10];
    snprintf(nu,sizeof(nu),"%d",n);
    int a=0;
    while(nu[a]!='\0')
    {
        a++;
    }
    if(a>=1&&a<=7)
    {
       int sum=0;
       int pro=1;
        for(int i=0;i<a;i++)
        {
            sum+=nu[i] - '0';
            pro*=nu[i] - '0';
        }
        if(n%(sum+pro)==0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        printf("Not in the limited constraints\n");
    } 
 return false;
}