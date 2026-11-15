#include<stdio.h>
int main(){
    int num;
    printf("Enter the number you want to see is Armstrong or not :");
    scanf("%d",&num);
    int original = num;
    int a = num;
    int new = 0;
    int c = 0;
    while(num>0){
        num/=10;
        c++;
    }
    while (a>0){
        int d = c;
        int e = 1;
        int b = a%10;
        for (int i=0;d>0;d--){
            e*=b; 
        }
        new = new + e;
        a/=10;
    }
    if (new==original)
        printf("Yes the entered number is Armstrong!");
    else
        printf("No the entered number is not an Armstrong");
    return 0;
}
