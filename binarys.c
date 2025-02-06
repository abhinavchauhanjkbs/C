#include<stdio.h>
int BS(int ar[], int n, int ele)
{
    int beg=0, end=n-1, mid, pos=0;
    while(beg<=end)
    {
        mid=(beg+end)/2;
        if(ar[mid]==ele)
        {
            pos=mid+1;
            break;
        }
        elseif(ele>ar[mid])
        beg=mid+1;
        elseend=mid-1;
        }
    }
    int main()
    {
        printf("enter size of an array\n")
        scanf("%d",&ar[i]);
    }
    printf("enter the element you wanna search")
    }