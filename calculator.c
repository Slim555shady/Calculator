#include <stdio.h>
#include <ctype.h>
int main(){
    int a,b,res;
    char c;
    scanf("%d%d",&a,&b);
    scanf("\n%c",&c);
    switch(c){
    case '+':
    res=a+b;
    printf("%d",res);
    break;

    case '-':
    res=a-b; 
    printf("%d",res);
    break;

    case '*':
    res=a*b; 
    printf("%d",res);
    break;

    case '/':
    res=a/b; 
    printf("%d",res);
    break;

    default:
    printf("Invalid Choice");
    }
    
    return 0;
}