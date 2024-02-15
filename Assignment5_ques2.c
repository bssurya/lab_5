#include <stdio.h>
int main(){
    int divs,divid,q=0;
    printf("Enter the dividend");
    scanf("%d",&divid);
    printf("Enter the divisor");
    scanf("%d",&divs);
    while(divid>divs){
        divid-=divs;
        q++;
    }
    printf("Remainder=%d\n",divid);
    printf("Quotient=%d",q);
}