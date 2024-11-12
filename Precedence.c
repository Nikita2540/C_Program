#include <stdio.h>

int main (){
    int x;
    x=7-8*9/5+4%8*2-1; //here both precedence and associativity comes into play
    /*7-8*9/5+4%8*2-1 lets solve this
    1) 7-(8*9/5)+(4%8*2)-1  1st precedence
    2) 7-((8*9)/5)+ ((4%8)*2)-1  2nd left to right associativity
    3) 7-(72/5)+ (4*2)-1
    4) 7-14+8-1 here again left to right associativity
    5) (7-14)+8-1
    6) (-7+8)-1
    7) 1-1 = 0 Amswer*/
    printf("The value of x is %d", x);
    return 0;
}