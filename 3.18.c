#include <string.h>
void my_strcpy(char* dest,char*src){
    while(*src!='\0'){
        *dest=*src;
        dest++;
        src++;

    }
    *dest=*src;
}
int main(){
    char arr1[20]="xxxxxxxx";
    char arr2[]="hello";
    my_strcpy(arr1,arr2);
    printf("%s\n",arr1);
    return 0;
}





#include <string.h>
void my_strcpy(char* dest, const char*src){
    assert(src!=NULL);//断言
    assert(dest!=NULL);//断言
    while(*dest++=*src++){
        ;//hello的拷贝

    }
    *dest=*src;
}
int main(){
    char arr1[20]="xxxxxxxx";
    char arr2[]="hello";
    my_strcpy(arr1,arr2);//1.目标空间的起始地址2.源空间的起始地址
    printf("%s\n",arr1);
    return 0;
}



int main(){
    // 1.
    // int num = 10;
    // int *p= &num;
    // *p = 20;
    // printf("%d\n",num);


    // 2.
    // const  修饰变量，这个变量就被称为常变量，不能被修改，但本质上还是变量

    const int num = 10;
    int * p = &num;
    // const 修饰指针变量的时候
    // const 如果放在* 的左边修饰的是*p，表示指针指向的内容，是不能通过指针来改变的                                                                                                     
    * p = 20;
    printf("%d\n",num);


}