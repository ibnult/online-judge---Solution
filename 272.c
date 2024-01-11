#include<stdio.h>
int main (){
     char x;
     int tracker ;
     while(scanf("%c", &x)==1){
        if(x=='"'){
            tracker ++;
            if (tracker%2){
                printf("``");
            }
                else{
                    printf("''");
                }
            }
                else{
                    printf("%c",x);
                }
            }
        return 0;
     }


