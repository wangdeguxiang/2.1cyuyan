
struct S{
    char c1;
    int i;
    char c2;
};

struct S2{
    char c1;
    int i;
    double d;
};



int main(){
    struct S s = {0};
    struct S2 s2 = {0};
    printf("%d\n",sizeof(s));
}







struct S{
    char c1;
    int i;
    char c2;
};

struct S2{
    char c1;
    int i;
    double d;
};



struct S3{
    char c1;
    int i;
    char c2;
};

struct s4{
    char c1;
    int i;
    char c2;
};





int main(){
    struct S s = {0};
    struct S2 s2 = {0};
    struct S3 s3 = {0};
    struct S4 s4 = {0};
    printf("%d\n",sizeof(s));
    printf("%d\n",sizeof(s2));
    printf("%d\n",sizeof(s3));
    printf("%d\n",sizeof(s4));
}


// 1.结构体的第一个成员
// 放在结构体变量在内存中存储位置的0偏移处开始
// 2.从第2个成员往后的所有成员，都放在- - 个对齐数
// (成员的大小和默认对齐数的较小值)的整数的整数倍的地址处
// 3. 结构体的总大小是结构体的所有成员的对齐数中最大的那个对齐数的整数倍。






















