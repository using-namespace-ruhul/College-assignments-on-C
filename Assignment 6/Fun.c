#include<stdio.h>

// & operator is not applicable for registers bcz it doesnt have any adress associated to it.

//auto is the default storage class for all local variables.
//static is the default storage class for all global variables.
int r(){
    static int n = 7;
    return n--;
}

int main(){
    for (r();r();r()){
        printf("%d", r());
    }

    return 0;
}