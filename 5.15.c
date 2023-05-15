
// 默认对齐数是8
// 把默认对齐数改为2
#pragma pack(2)

struct s{
    char c1;//0
    // 1-3
    int i;//4-7
    char c2;//8
    // 9-11
};
#pragma pack()
// 默认对齐数取消掉
int main(){
    
    printf("%d\n",sizeof(struct s));
   
}






struct s{
    char c1;//
    int i;//
    char c2;//
};

int main(){
    
    printf("%d\n",offsetof(struct s,c1));
    printf("%d\n",offsetof(struct s,c2));
    printf("%d\n",offsetof(struct s,i));
    return 0;
   
}



struct s{
    int data[1000];
    int num;
}
struct S s={{1,2,3,4},1000};
// 结构体传参
void print1(struct S s){
    printf("%d\n",s.num);
}
// 结构体地址传参
void print2(struct S* ps){
    printf("%d\n",ps->num);
}
int main(){
    print1(s);
    print2(&s);
    return 0;
}

struct A{
//  int 占4个字节  32bit位
    int _a:2;//_a占2个bit位
    int _b:5;
    int _c:10;
    int _d:30;


}
int main(){
    printf("%d\n",sizeof(struct A));
    return 0;
}





struct S{
    char a:3;
    char a:3;
    char a:3;
    char a:3;
};
struct S s={0};
s.a=10;
s.b=12;
s.c=3;
s.d=4;






























































