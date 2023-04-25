// 动态内存开辟：
// p=malloc();
// 申请：malloc
// 使用
// 释放：free(p)
// p=null;
// p不会主动置为null

int  find_num(int arr[3][3],int r ,int c ,int k){
    int x = 0;
    int y = c-1;
    while(x<r&&y>=0){
        if(arr[x][y]<k){
            x++;
        }else if(arr[x][y]>k){
            y--;
        }else{
            return 1;
        }
    }
}
int main(){

    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int  k= 17;
    int ret = find_num(arr,3,3,k);
    if(ret==1){
        print("找到了\n");
    }else{
        printf("找不到\n");
    }
    return 0;

}















int  find_num(int arr[3][3],int *px ,int *py ,int k){
    int x = 0;
    int y = *py-1;
    while(x<*px&&y>=0){
        if(arr[x][y]<k){
            x++;
        }else if(arr[x][y]>k){
            y--;
        }else{
            *px=x;
            *py=y;
            return 1;
        }
    }
}
int main(){

    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int  k= 17;
    int x = 3;
    int y = 3;
    int ret = find_num(arr,3,3,k);
    if(ret==1){
        print("找到了\n");
    }else{
        printf("找不到\n");
    }
    return 0;

}