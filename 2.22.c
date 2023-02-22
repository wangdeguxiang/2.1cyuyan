int main(){
    int cha[10] = {1,2,3,4,5,6,7,8,9,10};//完全初始化
    int cha1[10] = {1,2,3,4};//不完全初始化


    char gh1[] = "bit";
    //[bit\0]
    char gh2[] ={'b','i','t'};
    //[bit]
    printf("%d\n",strlen(gh1));//3
    printf("%d\n",strlen(gh2));//随机

    return 0;
}



int main(){
    int arr[10]={ 0 };
    arr[4] = 5;
    int i = 0;
    int sz = sizeof(arr)/sizeof(arr[0]);
    for(i = 0;i < sz; i++){
        printf("%d\n",arr[i]);

    }
    return 0;
}


int main (){
    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    return 0;


}




int main (){
    int arr[3][4] = {{1,2},{3,4},{4,5}};
    int i , j = 0;
    for( i = 0; i < 3; i ++){
        for( j = 0; j < 4; j++){
            printf("%d",arr[i][j]);
        }
    }
    return 0;
}




//二维数组在数组中存储
int main (){
    int arr[3][4] = {{1,2},{3,4},{4,5}};
    int i , j = 0;
    for( i = 0; i < 3; i ++){
        for( j = 0; j < 4; j++){
            printf("&arr[%d][%d]=%p\n",i,j,&arr[i][j]);
           
        }
    }
    return 0;
}





void bubble_sort(int arr[]){
    //计算元素个数
    int sz = sizeof(arr)/sizeof(arr[0]);
    int i = 0;
    for( i = 0; i < sz - 1; i++){
        int j = 0;
        for( j = 0; j < sz - 1 - i; j++){
            if(arr[j]>arr[j + 1]){
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;

            }
        }
    }
}
int main(){
    int arr[] = {9,8,7,6,5,4,3,2,1,0};
    //计算元素个数
    int sz = sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr,sz);//升序
    return 0;
}