int main(){
    float f = 9.0f;
    int *p = (int *)&f;
    printf("%d\n",*p);
    return 0;
}




int main(){
    int a =10;
    int *pa =&a;
    char ch = 'w';
    char *pc =&ch;
    int arr[10] ={1,2,3,4,5};
    int(*parr)[10] = &arr;
    //parr就是一个数组指针
    return 0;
}




int main(){
    int a =10;
    int *pa =&a;
    char ch = 'w';
    char *pc =&ch;
    double *d[5];
    double*(*pd)[5]=&d;//pd就是一个指针
    return 0;
}




int main(){
    int arr[10] ={0};
    printf("%d\n",arr);
    printf("%d\n",&arr);

    int *p1=arr;
    int (*p2)[10]=&arr;
    printf("%p\n",p1);
    printf("%p\n",p1+1);

    printf("%p\n",p2);
    printf("%p\n",p2+1);
}

int main(){
    int arr[10] ={1,2,3,4,5,6,7,8,9,10};
    
    int(*pa)[10] = &arr;
    int i =0;
    for(i = 0; i < 10; i++){
        printf("%d",*((*pa)+i));
    }
    return 0;
}












void print(int arr[3][5],int r,int c){
    int i = 0;
    int j = 0;
    for( i =0; i < r; i++){
        for( j = 0; j < c; j++){
            print("%d",arr[i][j]);
        }
    }
}


void print2(int(*p)[5],int r,int c){
    int i = 0;
    int j = 0;
    for( i =0; i < r; i++){
        for( j = 0; j < c; j++){
            print("%d",*(*p+i)+j);
        }
        printf("\n");
    }
}

int main(){
    int arr[3][5]={ {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7}};
    //print(arr,3,5);
    print2(arr,3,5);
}