int mian(){
    int a = {1,2,3,4};
    printf("%d\n",sizeof(a));//16 
    printf("%d\n",sizeof(a+0));//4/8   a+0是第一个元素的地址sizeof(a+0)计算的是地址大小
    printf("%d\n",sizeof(*a));//4    *a是数组的第一个元素 sizeof(*a)计算的是第一个元素的大小
    printf("%d\n",sizeof(a[1]));//4   计算的是第二个元素大小
    
    printf("%d\n",sizeof(&a));   //4/8 &a虽然数组的地址但是也是地址sizeof(&a)计算一个地址的大小
    printf("%d\n",sizeof(*&a)); //16 计算数组的大小
    printf("%d\n",sizeof(&a+1));   //4/8 &a+1)是数组后面的空间地址
    printf("%d\n",sizeof(&a[0]));   //4/8 
    printf("%d\n",sizeof(&a[0]+1));  //4/8 
    return 0;

}


int main(){
    char arr[]={'a','b','c','d','e','f'};
    printf("%d\n",sizeof(arr));//6
    printf("%d\n",sizeof(arr+0));//4/8
    printf("%d\n",sizeof(*arr));//1
    printf("%d\n",sizeof(arr[1]));//1
    printf("%d\n",sizeof(&arr));//4/8
    printf("%d\n",sizeof(&arr+1));//4/8
    printf("%d\n",sizeof(&arr[0]+1));//4/8
    

}






int main(){
    char arr[]={'a','b','c','d','e','f'};
    printf("%d\n",strlen(arr));//随机值
    printf("%d\n",strlen(arr+0));//随机值
    printf("%d\n",strlen(*arr));//错
    printf("%d\n",strlen(arr[1]));//错
    printf("%d\n",strlen(&arr));//随机值
    printf("%d\n",strlen(&arr+1));//随机值-6
    printf("%d\n",strlen(&arr[0]+1));//随机值-1
    
}




int main(){
    char arr[]="abcdef";
    //[abcdef\0]
    printf("%d\n",sizeof(arr));//7
    printf("%d\n",sizeof(arr+0));//7
    printf("%d\n",sizeof(*arr));//1
    printf("%d\n",sizeof(arr[1]));//1
    printf("%d\n",sizeof(&arr));//4/8
    printf("%d\n",sizeof(&arr+1));//4/8
    printf("%d\n",sizeof(&arr[0]+1));//4/8
    

}


int main(){
    char arr[]="abddef";
    //[abcdef\0]
    printf("%d\n",strlen(arr));//6
    printf("%d\n",strlen(arr+0));//6
    printf("%d\n",strlen(*arr));//错
    printf("%d\n",strlen(arr[1]));//错
    printf("%d\n",strlen(&arr));//6
    printf("%d\n",strlen(&arr+1));//随机值
    printf("%d\n",strlen(&arr[0]+1));//5
    
}




int main(){
    char *arr[]="abcdef";
 
    printf("%d\n",sizeof(arr));//4/8
    printf("%d\n",sizeof(arr+0));//4/8
    printf("%d\n",sizeof(*arr));//1
    printf("%d\n",sizeof(arr[1]));//1
    printf("%d\n",sizeof(&arr));//4/8
    printf("%d\n",sizeof(&arr+1));//4/8
    printf("%d\n",sizeof(&arr[0]+1));//4/8
    

}




int main(){
    char *arr[]="abddef";
  
    printf("%d\n",strlen(arr));//6
    printf("%d\n",strlen(arr+0));//5
    printf("%d\n",strlen(*arr));//错
    printf("%d\n",strlen(arr[1]));//错
    printf("%d\n",strlen(&arr));//随机值
    printf("%d\n",strlen(&arr+1));//随机值
    printf("%d\n",strlen(&arr[0]+1));//5
    
}
