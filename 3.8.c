
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    printf("%d\n",arr[4]);//[] - 下标引用操作符
    return 0;
}

//函数的定义
int Add(int x ,int y){
    return x + y;
}
void test(){

}
int main{
    int a =10;
    int b =20;
    //函数调用
    int ret= Add(a,b);// () - 函数调用操作符
    test();
    return 0;
}
// 结构成员访问操作符
//.  
//->


// 结构体

// int   float   char     short
// double    long
// 

// 创建了一个自定义类型
struck Book{
    char name[20];
    char id[20];
    int price;


};
int main(){
    int num =10;
    //结构体变量名.成员名
    struct Book b ={"c语言","c20210001",5};
    printf("书名:%s\n",b.name);
    printf("书号:%s\n",b.id);
    printf("定价:%s\n",b.price);
    return 0;

}

int main(){
    int a = 3;
    int b = 5;
    int c = a + b * 7;

}


int main(){
    char a = 3;
    char b = 127;
    char c = a + b;
    printf("%d\n",c)
    
}


int main(){
    char c  =1;
    printf("%u\n",sizeof(c)); //1
    printf("%u\n",sizeof(+c));//4
    printf("%u\n",sizeof(-c));//4
    printf("%u\n",sizeof(!c));//4
    return 0;

}


int main (){
    int a = 3;
    int b = 5;
    short s = 5;
    sizeof(s = a + 3);
    a + b;
    return 0;
}



