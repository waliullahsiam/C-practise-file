#include<stdio.h>
#include<string.h>
int main()
{
    //arrange a string according to their frequency so that the largest one comes first and followed by the others

    //YOU MAKE ME A BELIEVER 

    // char arr[100];

    // char temp;

    // gets(arr);
    // int len=strlen(arr);

    // char dummy_arr[101]={0};

    // for(int i=0;i<len;i++)
    // {
    //     dummy_arr[arr[i]]++;
    // }

    // for(int i=0;i<len-1;i++)
    // {
    //     for(int j=i+1;j<len;j++)
    //     {
    //         if(dummy_arr[arr[i]]<dummy_arr[arr[j]])
    //         {
    //             temp=arr[i];
    //             arr[i]=arr[j];
    //             arr[j]=temp;
    //         }
    //     }
    // }

    // puts(arr);



     //check pallindrome

    //CHLORINE (TWENTYONEPILOTS)

    // char chlorine[100];

    // gets(chlorine);

    // int len=strlen(chlorine);

    // for(int i=0;i<len/2;i++)
    // {
    //     if(chlorine[i]!=chlorine[len-i-1])
    //     {
    //         printf("NO\n");
    //         return 0;
    //     }

    //     else
    //     {
    //       continue;
    //     }
    // }

    // printf("YES\n");


    //sum of two matrices
    //FADED();

    // int a,b;
    // scanf("%d%d",&a,&b);


    // int arr1[a][b],arr2[a][b];
    // int res[a][b];


    // for(int i=0;i<a;i++)
    // {
    //     for(int j=0;j<b;j++)
    //     {
    //         scanf("%d",&arr1[i][j]);
    //     }
    // }


    //    for(int i=0;i<a;i++)
    // {
    //     for(int j=0;j<b;j++)
    //     {
    //         scanf("%d",&arr2[i][j]);
    //     }
    // }

    //    for(int i=0;i<a;i++)
    // {
    //     for(int j=0;j<b;j++)
    //     {
    //         res[i][j]=arr1[i][j]+arr2[i][j];
    //     }
    // }


    //    for(int i=0;i<a;i++)
    // {
    //     for(int j=0;j<b;j++)
    //     {
    //         printf("%d ",res[i][j]);
    //     }
    //     printf("\n");
    // }

    // return 0;


    // int n;
    // scanf("%d",&n);
    // int arr[n][2];


    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<2;j++)
    //     {
    //         scanf("%d",&arr[i][j]);
    //     }
    // }

    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<2;j++)
    //     {
    //         if(arr[i][j]==i+1 )
    //         {
    //             continue;
    //         }
    //         else

    //         {
    //             printf("%d %d",i+1,j+1);
    //             printf("\n");
    //         }
        
    //     }
    // }


//transpose

int a,b;
scanf("%d%d",&a,&b);
int arr[a][b];
int res[a][b];

for(int i=0;i<a;i++)
{
    for(int j=0;j<b;j++)
    {
        scanf("%d",&arr[i][j]);
    }
}

for(int i=0;i<a;i++)
{
    for(int j=0;j<b;j++)
    {
        res[i][j]=arr[j][i];
    }
}


for(int i=0;i<a;i++)
{
    for(int j=0;j<b;j++)
    {
        printf("%d ",res[i][j]);
    }
    printf("\n");
}




     





 






}