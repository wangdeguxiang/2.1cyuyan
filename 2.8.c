/*
    if(表达式)
    语句;

    if(表达式)
    语句1;
    else
    语句2;

    
    if(表达式){
       语句列表1;
    }
    
    else{
        语句列表2;
    }
    



 */

//结构体可以让c语言创建新的类型
//创建一个学生类型
struct Stu{
    char name[20];
    int age;
    double score;
}; 
int main(){
    struct Stu s={"王道",44,34}//结构体的创建和初始化
    printf("%s %d %lf\n",s.name,s.age,s.score);//结构体.成员变量    //方法1
    struct Stu * ps= &s;
    printf("%s %d %lf\n",(*ps).name,(*ps).age,(*ps).score);//方法2
    printf("%s %d %lf\n",ps->name,ps->age,ps->score);//方法3
    return 0; 
}

int main(){
    int a=10;
    if(a>18)
    printf("成年\n");
    else
    printf("未成年\n");
}