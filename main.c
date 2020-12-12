
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define SECRET1 0x44
#define SECRET2 0x55

int main(int argc, char *argv[])
{
    double x = 13.1222244444442;
    double y = 13.1222244444443;
    
    if(x==y){
      printf("X eqqual Y");
    }else{
      printf("X not eqqual Y");
    }
    return 0;
}
