

void string_roate(char *str,int k){
    int i =0;
    int n =strlen(str);
    for(i = 0; i < k;i++){
        char tmp= *str;
        int j =0;
        for(j = 0;j < n-1; j++){
            *(str + j)=*(str + j +1);

        }
        *(str + n -1)=tmp;
    }
}
int  main(){
    char arr[10]="ABCDEF";
    int k =2;

    string_roate(arr,k);
    printf("%d\n",arr);
    return 0;

}














void reverse(char * left,char *right){
    assert(left);
    assert(right);
    while(left<right){
        char tmp = * left;
        *left = *right;
        *right = tmp;
        left++;
        right--;
    }
}

void string_roate(char *str,int k){
   reverse();
   reverse();
   reverse();
}
int  main(){
    char arr[10]="ABCDEF";
    int k =2;

    string_roate(arr,k);
    printf("%d\n",arr);
    return 0;

}


int is_string_roate(char*str1,char*str2){
     int i =0;
    int n =strlen(str)1;
    for(i = 0; i < k;i++){
        char tmp= *str1;
        int j =0;
        for(j = 0;j < n-1; j++){
            *(str1 + j)=*(str1 + j +1);

        }
        *(str1+ n -1)=tmp;
        if(strcmp(str1,str2)==0){
            return 0;
        }
    }
}



int main(){
    char arr1[]="AABCD";
    char arr2[]="BCDDD";
    int ret = is_string_roate(arr1,arr2);
    if(ret == 1){
        printf("yes\n");

    }else{
        printf("no\n");
    }
}







int main(){
    char arr[20]="hello";
    strcat(arr,"bit");
    printf("%s\n",arr);
    
}