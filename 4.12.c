
void print(int * ptr,int sz){
    int i = 0;
    for(i = 0;i < sz;i++){
        printf("%d",*(p+i));
    }
}
void test(char*p){


}

int main(){
    int arr[10]{1,2,3,4,5,6,7,8,9,10};
    int *p=arr;
    int sz=sizeof(arr)/sizeof(arr[0]);
    print(p,sz);
    char ch='w';
    test(&ch);
    return 0;
}





void test(int**pa){
    **pa=20;
}

int main(){
    int a = 10;
    int *pa=&a;//pa是一级指针
    int **ppa=&pa;//ppa是二阶指针

    test(ppa);
    test(&pa);
    int*arr[10]={0};
    test(arr);
    printf("%d",a)

    return 0;
}











int Add(int x , int y){
    return x+ y;
}




int main(){
    int a = 10;
    int *pa=&a;
    char ch='w';
    char*pc=&ch;

    
    int*arr[10]={0};
    int (*parr)[10]=&arr;//取出数组的地址
    // 函数指针-存放函数地址的指针
    // &函数名——取到的就是函数的地址
    printf("%p",&Add);

    return 0;
}






int main(){
    (*(void)(*)()0)();
    return 0;
// 调用0地址处的函数
// 无参  返回类型是void
// 1.void(*)()-函数指针类型
// 2.(void(*)())0-对0进行强制类型转换，被解释为一个函数地址
// 3.*(void(*)())0-对0地址进行了解引用操作
// 4.((void(*)())0)()-调用0地址处的函数

  
}




void (*signl(int ,void(*)(int))(int));
void (*)(int)signal(int ,void(*)(int))
// 1.signal和（）先结结合说明是函数名
// 2.指向一个参数为int返回类型为void
// 是一个函数的说明

int main(){
    return 0;
}










int Add(int x,int y){
    return x + y;
}
int Sub(int x,int y){
    return x - y;
}

int main(){

    int(*pf1)(int,int )=Add;
    int(*pf2)(int,int )=Sub;
    int(*pfArr[2])(int,int )={Add,Sub};
    return 0;

}



















