int main(){
    int arr[10]={0};
    //数组名代表首元素地址
    printf("%p\n",arr);
    printf("%p\n",&arr[0]);
    return 0;

}


 int main(){
    int arr[10]={ 0 };
    int *p =arr;
    int i = 0;
    for( i = 0; i < 10; i++){
        printf("%p %p\n",&arr[i],p+i);
   }
    return  0;
 }
 


 
 int main(){
    int arr[10]={ 0 };
    int *p =arr;
    printf("%d\n",arr[2]);
    printf("%d\n",2[arr]);
   //arr[2] <==> *(p+2) <==> *(2+p) <==> *(2+arr)
   //2[arr] <==> *(2+arr)
    return  0;
 }
 

 int main(){
    int a = 10;
    int *pa=&a;//pa是指针变量，一级指针
    int * *ppa=&pa;//pa也是变量
    return 0;
 }


 struct Stu{
    char name [20];
    int age;
    char id[20];

 };
 int main(){
    struct Stu s;
    return 0;
 }


int Add(int x ,int y){
    int z = 0;
    z = x + y;
    return 0;
}
 int main(){
    int a = 3;
    int b = 5;
    int c = 0;
    c = Add(a,b);
    return 0;
 }