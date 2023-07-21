#include<stdio.h>
int main()
{
    int n;
    int i,j;
    printf("print size:");
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            int temp;
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }


    }

    for(i=0; i<2; i++)
    {
        printf("%d\n",a[i]);
    }

    return 0;
}
