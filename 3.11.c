int main(){
    int a =4;
    int b =5;
    int c = a + b * 7;

    return 0;
}


int main(){
    char x []="abcdefg";
    char y []={'a','b','c','d','f','g'};
  
    return 0;
}


int main(){
    int  *pa;
    char *pc;
    float *pf;
    printf("%d\n",sizeof(pa));
    printf("%d\n",sizeof(pc));
    printf("%d\n",sizeof(pf));
    return 0;
}



//指针类型的意义
// 指针类型决定了：指针解引用的权限有多大
// 指针类型决定了，指针走一步，能走多远（步长）
int main(){
    int a = 0x11223344;
    // int *pa =&a;
    // *pa = 0;
    char * pc=&a;
    *pc = 0;
    return 0;
}


int main(){
    int arr[10]={ 0 };
    int *p =arr;
    char *pc =arr;
    printf("%p\n",p);
    printf("%p\n",p+1);

    printf("%p\n",pc);
    printf("%p\n",pc+1);

}




int main(){
    int arr[10]={ 0 };
    int *p =arr;
    int i = 0;
    for( i = 0; i < 10; i++){
        *(p+i) = 1;
        return 0;
   }

}
 

 int main(){
    //野指针
    int * p;//p是一个局部的指针变量，局部变量不初始化的话，默认是随机值
    * p =20;//非法访问内存了


    // 越界访问
    int arr[10]={ 0 };
    int *p =arr;
    int i = 0;
    for( i = 0; i < 10; i++){
        *p = i;
        p++;
   }
 }
//指针指向的空间释放
int *test(){
    int a = 10;
    return &a;
}
int main(){

    int * p =test();
    * p =20;
 }




 int main(){
    int arr[10]={ 1,2,3,4,5,6,7,8,9,10};
    int *p =arr;
    int *pend = arr +9;
    while(p<=pend){
        printf("%d\n",*p);
        p++;
    }
    
 }





 int main(){
    int arr[10]={ 1,2,3,4,5,6,7,8,9,10};
    printf("%d\n",&arr[9]-&arr[0]);
    int *p =arr;
    int *pend = arr +9;
    while(p<=pend){
        printf("%d\n",*p);
        p++;
    }
    
 }


