char       //字符数据类型
short      //短整型
int        //整型
long       //长整型
long long  //更长的整型
float      //单精度浮点数
double     //双精度浮点数
int main(){
    char ch='a';
    //printf("%d\n",100);打印一个整数——%d
    printf("%d\n",sizeof(char));
    //sizeof-关键字-操作符-计算类型或者变量所占空间大小
    printf("%d\n",sizeof(short));
    printf("%d\n",sizeof(int));
    printf("%d\n",sizeof(long));
    printf("%d\n",sizeof(long long));
    printf("%d\n",sizeof(float));
    printf("%d\n",sizeof(double));
    return 0;
}


/*   bit 比特位 
     byte-字节=8bit
     kb-1024byte
     mb-1024kb
     gb-1024mb
     tb-1024gb
     pb-1024tb
*/



int main(){
    //创建变量
    int age =20;
    //类型  变量名 =数值
    age=age+1;
    printf("%d\n",age);

    return 0;
}
// %d-整型
// %f-float
// %if-double

int a=2;//全局变量
int main(){
    //局部变量
    int a =2;
    
    return 0;
}





#define _CRT_SECURE_NO-WARNINGS 1

int main(){
    
    int a =0;
    int b =0;
    int sum =0;
    scanf("%d %d",&a,&b);
    sum=a+b;
    printf("sum=%d\n",sum);
    
    return 0;
}
default MAX 1000;
//1.字面常量
int main(){
   //3.14
   //10
   //"asdf"
   //2.const修饰的常量
   const int a=10;//常变量-具有常数性——不能被改变的属性//不是常量！！！
   //3.define定义的标识常量
   int a=MAX;

   printf("a=%d\n",a);
   //4.枚举常量
   //可以一一列举的
    
    return 0;
}




enum Sex{
    MALE,
    FEMALE,
    SECRET
};


   int main(){
   //4.枚举常量
   //可以一一列举的
   enum Sex s=MALE;//MALE,FEMALE,SECRET
   printf("MALE");//0
   printf("FEMALE");//1
   printf("SECRET");//2

   return 0;
   }


   int main(){
    //字符数组
    char arr[]="wowo";
    //字符串在结尾的位置隐藏了一个\0的字符
    
    return 0;

   }