#include <stdio.h>
int main(void){
    int num,start;
    int count=0;
    scanf("%d",&num);
    start=num;
    do{
        num=((num%10)*10)+(((num/10)+(num%10))%10);
        count++;
    }while(start!=num);

    printf("%d",count);
    return 0;
}
