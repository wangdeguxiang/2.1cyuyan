
int my_strlen(const char * str){
    int count = 0;
    assert(str!=NULL);
    while(*str ! = '\0'){
        count++;
        str++;
    }
    return count;

}


int  main(){
    char arr[]={'a','b','c'};
    // char arr[]="abc";
    int len = my_strlen(arr);
    printf("%d",len);
    return 0;/
}






int main(){
    if(strlen("abc")-strlen("abcdef")>0){
        printf(">\n");
    }else{
        printf("<=\n");
    }
}



int main(){
    char arr[20]={0};
    // arr="hello";
    // char arr2[]={'a','b','c'};
    strcpy(str,"hello");
    // strcpy(str,arr2);
    // char * p = "hello world"
    // strcpy(str,p);
    printf("%s",arr)
    return 0;
}


my_strcat(char *dest,const char*src){
    while(*dest){
        dest++;
    }
    while(*dest++=*src++){
        ;
    }
}

int main(){
    char arr1[20]="hello";
    char arr2[]="world";
    my_strcat(arr1,arr2);
    printf("%d\n",arr1);
    return 0;
}












