// memcpy  函数应该拷贝不重叠的内存
// memmove  函数可以处理内存重叠的情况


// 可以把源数据从前向后拷贝也可以从后向前拷贝
void * my_memmove(void * dest,const void *src,size_t num){
    assert(dest && src);
    if(dest < src){
        while(num--){
            // 前-》后
            *(char*)dest=*(char*)src;
            dest=(char*)dest+1;
            src=(char*)src+1;

        }
    }else{
        // 后-》前
         while(num--){
           
            *((char*)dest+num)=*((char*)src+num);
            

    }
}

int main(){
    int arr1[10]={1,2,3,4,5,6,7,8,9,10};
    my_memmove(arr1+2,arr1,20);
    memmove(arr1+2,arr1,20);

    return 0;
}










int main(){
    float arr1[]={1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0,9.0,10.0};
    float arr2[]={1.0,2.0};
    
    int ret = memcpy(arr1+2,arr1,20);
    printf("%d",reet)

    return 0;
}






int main(){
    float arr1[10]={0};
    memset(arr1,1,20);
   
    return 0;
}