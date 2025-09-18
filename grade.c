#include<stdio.h>
int main(){
    int marks;
    printf("enteer youor marks : ");
    scanf("%d",&marks);
    if(marks>=90){
        printf("exellant work you got A grade");
    }
    else if(marks>=70){
        printf("well done you got B grade");
    }
    else if(marks>=50){
        printf("good job you got C grade");
    }
    else if(marks>=33){
        printf("you passed, but you colud do batter your grade is 'D'");
    }
    else if (marks>=0){
        printf("sorry you are faild");
    }
    else if (marks>100){
        printf("invalid input");
    }
    else{
        printf("invalid input");
    }
    return 0;
}