#include<stdio.h>
#include<stdlib.h>
int main(void){
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,x,y,b=0,j,c=1;
        scanf("%d",&n);
        int a[n],k[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d",&a[i]);
            k[i]=a[i];
        }
        

        for (int i = 0; i < n; i++) //1
        {   
            for (int j = i+1; j < n; j++)
            {
            calculation(i,j,n);
            if ((x%2) != (y%2))
            {
                if (b==0)
                {
                    printf("%d\n",b);
                    printf("0 0\n");
                }else{
                
                    printf("%d\n",b);
                    printf("%d %d\n",i+1,c+1);  }          
            }else{
                printf("-1\n");  
            }

            }
                
            
            b++;
        
        }
        
        
    }
    
}




calculation(int i, int j, int n){
    int x,y,a[n],c; 
        x = a[i] & a[i+1];
        y = a[i] | a[i+1];
         //b = b + 1;

        a[i]=a[i] ^ a[j]; 
        c=j;

        return i;
        return j;
        return n;
        return x;
        return y;
        return c;
}