int main(){
    // char*p="abc";
    // char *q="abcdef";

    //strcmp  - 字符串比较大小
    // int ret = strcmp("abbbb","abc");
    int ret = strcmp("aa","aa");
    printf("%d\n",ret)
}




int main(){
    char *p="abc";
    char *q="abcdef";

   
    int ret = strcmp(p,q);
    if(ret > 0){
        printf("p>q\n");
    }else if(ret < 0){
        printf("p<q\n");

    }else{
        printf("p==q\n");

    }
    
}







int my_strcmp(const char *s1,const char *s2){
    while(*s1==*s2){
        if(*s1=='\0'){
            return 0;
        }
        s1++;
        s2++;
    }
    if(*s1>*s2){
        return 1
    }else{
        return -1;
    }
}

int main(){
    char *p="abc";
    char *q="abcdef";

   
    int ret = my_strcmp(p,q);
    if(ret > 0){
        printf("p>q\n");
    }else if(ret < 0){
        printf("p<q\n");

    }else{
        printf("p==q\n");

    }
    
}



// strcpy  - 
// strcat  -
// strcmp  -
// --------长度不受限制的字符串函数

// strncpy  
// strncat
// strncmp
// --------长度受限制的字符串函数







int main(){
    char arr1[20]="abcdef";
    char aee2[]="qwer";
    // strncpy(arr1,arr2);
    strncpy(arr1,arr2,2);
    return 0;
}







int main(){
    char arr1[20]="hello";
    char aee2[]="world";
    
    strncat(arr1,arr2,3);
    printf("%s\n",arr1);
    return 0;
}