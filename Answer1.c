#include<stdio.h>
int main()
{
    int n;

    printf("No. of characters:\n");
    scanf("%d",&n);
    n=n;
    char a[n];
    printf("Enter the character:\n");
    int i,j;
    for(i=0;i<n+3;i++)
    {
        scanf("%c",&a[i]);
    }
    //scanning word
    printf("Enter the Word:\n");
    char word[n];
    scanf("%s",&word);
    //converting word into integer
    int k[n];
    for(i=0;i<n;i++)
    {
        k[i]=word[i];
    }
    //converting input character into integer
    int l[n];
    for(i=0;i<n;i++)
    {
        l[i]=a[i];
    }
    //making ascending order of inputs word that is for ordering no.
    int m=0;
    for(i=0;i<n;i++)
        for(j=1;j<n;j++)
    {
                if(k[i]>k[j])
                {
                     m++;
                    int t=k[i];
                    k[i]=k[j];
                    k[j]=t;

            }

    }
    printf("%d",m);

    return 0;
}
