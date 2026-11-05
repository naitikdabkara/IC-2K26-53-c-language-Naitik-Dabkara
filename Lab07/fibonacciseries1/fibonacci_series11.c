#include<stdio.h>
int main(){
    int a=0,b=1,c,n;
    printf("Enter the number of terms you want to see of the series");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        if(a%2==0)
            printf("%d ",a);
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}
