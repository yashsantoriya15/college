#include<stdio.h>


int main()
{
    int p1[10][3];
    int p2[10][3];
    int n1,i=0,j=0,k=0,n2=0;
    int sum[20][6];
    printf("Enter number of terms in polynomial1");
    scanf("%d", &n1);
    printf("enter coefficient xpower ypower\n");
    for (int i = 0; i < n1; i++)
    {
      scanf("%d %d %d", &p1[i][0], &p1[i][1] ,&p1[i][2]);
    }

    printf("Enter number of terms in polynomial2");
    scanf("%d", &n2);
    printf("enter coefficient xpower ypower\n");
    for (int i = 0; i < n2; i++)
    {
      scanf("%d %d %d", &p2[i][0], &p2[i][1], &p2[i][2]);
    }

    for (int i = 0; i < n1; i++)
    { 
        for (int j = 0; j < n2; i++)
        {
            if(p1[i][1] == p2[j][1] && p1[i][2] == p2[j][2]  ){
            sum[k][0] =  p1[i][0] + p2[j][0];
            sum[k][1] =  p1[i][1];
            sum[k][2] =  p1[i][2];
            k++;


           
            }
        }
        
       
    }

    printf("\n Resultant polynomial \n");

     for (int i = 0; i < k; i++)
    {
      printf("%dx^%dy^%d", sum[i][0], sum[i][1], sum[i][2]);
    }
    
    

    return 0;
}