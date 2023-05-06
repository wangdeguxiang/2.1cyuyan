
char * my_strstr(const char *str1,const char *str2){
    assert(str1 & & str2);
    const char *s1=str1;
    const char *s=str2;
    char *cp=str1;
    while(*cp){
        s1=cp;
        s2=str2;
        while(*s1==*s2){
            s1++;
            s2++;

        }
        if(*s2=='\0'){
            return cp;

        }
        cp++;

    }
    return NULL;
}

  
int main(){
    char arr2[]="abc";
    char arr1[]="abcdef";

   
    char * ret = my_strstr(arr1,arr2);
    if(ret ==NULL){
        printf("找到了\n");

    }else{
        printf("没找到\n");

    }
    return 0;
    
}






int main(){
    char arr[]="qweer@er.ytt";
    char * p ="@.";
    char tmp [20]={ 0 };


    strcpy(tmp,arr);
    char * ret =NULL;
     
    ret = strtok(tmp,p);
    printf("%s\n",ret);

    ret = strtok(NULL,p);
    printf("%s\n",ret);


    ret = strtok(NULL,p);
    printf("%s\n",ret);




}






int main(){
    printf("%s\n",strerror(0));
    printf("%s\n",strerror(1));
    printf("%s\n",strerror(2));
    printf("%s\n",strerror(3));
    printf("%s\n",strerror(4));
    printf("%s\n",strerror(5));

    FILE*pf=fopen("teest.txt","rr");
    if(pf==NULL){
        printf("%s",strerror(errno));
        return 1;
    }
    fclose(pf);
    pf=NULL;
    return 0;
}