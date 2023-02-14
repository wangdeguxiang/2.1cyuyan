
//库函数：

//输入输出函数：printf  scanf    getchar   putchar
//字符串操作函数：strcmp（拷贝字符串） strlen
//字符操作函数：topper  
//内存操作函数：memcpy   memcmp   memset (内存设置)
//时间/日期函数：time
//数学函数：sqrt   pow
//其他库函数：






//strcmp（拷贝字符串）
#include <string.h>
int main(){
    char arr1[20]= {0};
    char arr2[]= "hello bit";
    strcmp(arr1,arr2);//将arr2的字符串拷贝到arr1
    printf("%s",arr1);//打印arr1这个字符串用%s

    return 0;

}


//memset (内存设置)
int main(){
    char arr[]= "hello bit";
    memset(arr,'x',5);

    return 0;
}

