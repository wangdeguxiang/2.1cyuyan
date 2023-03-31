int main(){
    //写代码判断当前机器的字节序
    int a =1;
    char *p=(char*)&a;
    if(*p==1){
        printf("小端");

    }else{
        printf("大端");
    }
    return 0;

}



int check_sys(){
    int a = 1;
    char *p=(char*)&a;
    return *p;//返回1表示小端，返回0表示大端

}
int main(){

    //写代码判断当前机器的字节序
    int ret= check_sys();
    if(ret==1){
        printf("小端");

    }else{
        printf("大端");
    }
    return 0;
}

// 输出什么
int main(){
    char a = -1;
    signed char b =-1;
    unsigned char c =-1;
    printf("%d%d%d",a,b,c);
    return 0;
}

int main(){
    char a = -128;
    printf("%u",a);
    return 0;
}


int main(){
    char a = -128;
    printf("%u",a);
    return 0;
}



int main(){
    int i =-20;
    unsigned int j =10;
    printf("%d",i+j);
   
    return 0;
}

