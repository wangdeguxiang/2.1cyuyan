/*
typedef  类型重命名
static  -静态的
1、修饰局部变量   改变了局部变量的生命周期（本质上改变了变量的存储类型）
2、修饰全局变量   使得这个变量只能在自己所在的源文件内部使用
3、修饰函数       使得函数只能在自己所在的源文件内部使用

*/

/*
#define 定义常量和宏
define是一个预处理指令
1、定义符号
2、定义宏
*/



//1、定义符号
#define MAX 100
int main(){

    printf("%d\n",MAX);

    return 0;

}


//2、定义宏
#define ADD(x,y)  x+y
int main(){

    printf("%d\n",ADD(2,3));

    return 0;

}


int main(){
    int a=10;//a在内存中要分配4个字节
    printf("%p\n",&a);//%p专门打印地址
    int * pa=&a;//pa是用来存放地址的，在c语言中pa是指针变量
    //*说明pa是指针变量
    //int 说明pa执行的对象是int类型的
  
    return 0;    

}



int main(){
    int a=10;
   
    int * pa=&a;
    *pa=20;//*解引用操作  *pa是通过pa里的地址，找到a
    printf("%d\n",a);
    return 0;    

}



int main(){
    printf("%d\n",sizeof(char*));
    printf("%d\n",sizeof(short*));
    printf("%d\n",sizeof(int*));
    printf("%d\n",sizeof(long*));
    printf("%d\n",sizeof(long long*));
    printf("%d\n",sizeof(float*));
    printf("%d\n",sizeof(double*));
    //都为4
    //32位  32bit  4byte
    //64位  64bit  8byte
    //指针大小都为4个字节
    return 0;    

}