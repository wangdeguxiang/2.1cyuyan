 int main(){
    (*(void(*)())0)();
    // 调用0地址处的函数
    // 该函数无参返回类型是void
    // 1、void(*)()  函数指针类型
    // 2、(void(*)())0  对0地址进行强制类型转换
    // 3、*(void(*)())0 对0地址进行解引用操作
    // 4、(*(void(*)())0)()调用0地址处的函数
    return 0;
 }
void(*signal(int ,void(*)(int)))(int);
// 1.signal和（）先结结合说明是函数名
// 2.指向一个参数为int返回类型为void
// 是一个函数的说明

 int main(){
    return 0

 }







void bubble_sort(int arr[],int sz){
   int i= 0;
   for(i = 0;i<sz-1;i++){
      int j = 0;
      for(j = 0;j < sz -1-i;j++){
         if(arr[j]>arr[j+1]){
            int tmp = arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=tmp;
         }
      }
   }
}

void print_arr(int arr[],int sz){
   int i= 0;
   for(i = 0;i<sz;i++){
      printf("%d",arr[i]);
   }
   printf("\n");
      
}

 int main(){
   int arr[10]={9,8,7,6,5,4,3,2,1,0};
   int sz = sizeof(arr)/sizeof(arr[0]);
   bubble_sort(arr,sz);
   print_arr(arr,sz);
   return 0;
 }









 void qsort(void*base,
            size_t num,
            size_t size,
            int (*cmp)(const void*,const void*)
            );

int cmp_int(const void* e1,const void* e2){
   return *(int*)e1-*(int *)e2;
}

int main(){
   int arr[]= {9,8,7,6,5,4,3,2,1,0};
   qsort(arr,sz,sizeof(arr[0]),cmp_int);
   return 0;                  

}





struct Stu{
   char name[20];
   int age;
};

int sort_by_age(const void*e1,const void* e2){
   return ((struct Stu*)e1)->age((struct Stu*)e1)->age;

}

int sort_by_name(const void*e1,const void* e2){
   return ((struct Stu*)e1)->name((struct Stu*)e1)->name;

}

void test2(){
   struct Stu s [3]={{"wang",30},{"li",34},{"zhang",22}}
   int sz=sizeof(s)/sizeof(s[0]);
   // qsort(s,sz,sizeof(s[0]),sort_by_age);
   qsort(s,sz,sizeof(s[0]),sort_by_name);
  
}



int main(){
   test2();
}












