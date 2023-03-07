int main(){
    int a = 13;
    a = a & (1 << 4)

//     0000000000000000001101
//     0000000000000000010000
//     0000000000000000011101

 }

 //赋值操作符
 int main (){
    int a = 100;
    a = a + 100;
    a += 100;
    a = a >> 3;
    a >>= 3;
    return 0;

 }
// 单目操作符      !    -   +     &   sizeof   ~     ++   --      *   (类型)    只有一个操作数 
int main (){
    int flag = 5;
    if(flag){
        printf("hehe\n");
    }
    if(!flxag){
        printf("hahaha\n");
    }


    return 0;
}


int main (){
    int a = 10;
    a = -a;
    a = +a;
    printf("%d\n",a);
    return 0;
}



int main(){
    int a = 10;
    char arr[10]={ 0 };
    printf("%d\n",sizeof(a));//计算a所占空间的大小，单位是字节    //4
    printf("%d\n",sizeof(int));                                 //4
}

int main(){
    int a = -1;
    //10000000000000000000000001   - 原码
    //11111111111111111111111110   - 反码
    //11111111111111111111111111   - 补码
    // ~按位取反
    // 1111111111111111111111111
    // 1111111111111111111111111
    int b = ~a;
    printf("%d",a);
    printf("%d",b);
    return 0;
}

int main(){
    int a = 10;
    int b = a ++;  //后置 ++
    //int b = ++ a; //前置 ++

    //int b = a --;  //后置 --
    //int b = -- a; //前置 --

    printf("%d",a);
    printf("%d",b);
    return 0;

}


int main(){
    int a = 10;
    printf("%p\n",&a); // & - 取地址操作符
    int * pa = &a;     // pa是用来存放地址的 - pa是一个指针变量
    *pa = 20;          //解用操作符  - 间接访问操作符
    printf("%d\n",a);//20
    return 0;                                                                   
}


//关系操作符
// >  >=    <   <=   !=   ==
int main (){
    int a = 3;
    int b = 5;
    // if(a>b)
    // if(a<b)
    // if(a<=b)
    return 0;

}

//   =   赋值          ==   比较相等
//比较两个字符串不能用==

//逻辑操作符   &&  逻辑与                ||   逻辑或



int main (){
    int a = 3;
    int b = 0;
    // if(a && b){
    //      printf("hehe\n");

    // }

    if(a || b){
          printf("ff\n");

    }

    return 0;
}

//条件操作符
int main(){
    int a = 3;
    int b = 0;
    b = a > 5 ? 1 : -1
    return 0;
}


int main(){
    int a = 3;
    int b = 5;
    int c = 0;
    //逗号表达式 - 从左向右
    int d = (c = 5, a = c + 3, b = a -4, c +=d);
    printf("%d",d);
    return 0; 
}