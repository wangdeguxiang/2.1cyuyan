int i;
int main(){
    i--;
    if(i > sizeof(i)){
        printf(">\n");

    }else{
        printf("<\n");
    }
    return 0;
}


int main(){
    int a = 0;
    int n = 0;
    scanf("%d%d",&a,&n);
    int i = 0;
    int sum = 0;
    int ret = 0;
    for(i = 0;i < n ; i++){
        ret = ret *10 + 1;
        sum = sum + ret;
    }
    printf("%d",sum);
    return 0;
}






int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int * p= arr;
    int sz =sizeof(arr)/sizeof(arr[0]);
    for(i = 0;i < sz; i++){
        printf("%d",*(p+i));
    }
    return 0;
}








int main(){
    int i = 0;
    for(i = 0;j <=10000;i++){
        int n =1;
        int tmp = i;
        while(tmp/10){
            n++;
            tmp=tmp/10;
        }
        tmp = i;
        while(tmp){
            sum+=pow(tmp%10,n);
            tmp=tmp/10;
        }
    }
    return 0;
}




void reverse(char * str){
    assert(str);
    int len = strlen(str);
    char * left = str;
    char * right = str + len -1;
    while(left<right){
        char tmp = * left;
        * left= * right;
        *right = tmp;
        left ++;
        right--;
    }
}
int main(){
    char arr[]="abcdef";
    reverse(arr);
    printf("%s",arr);
    return 0;

}