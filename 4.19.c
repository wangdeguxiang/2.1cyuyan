
int main(){
    int a [3][4]={0}
  
    printf("%d\n",sizeof(a));//48
    printf("%d\n",sizeof(a[0][0]));//4
    printf("%d\n",sizeof(a[0]));//16
    printf("%d\n",sizeof(a[0]+1));//4
    printf("%d\n",sizeof(*a[0]+1));//4
    printf("%d\n",sizeof(a+1));//4
    printf("%d\n",sizeof(*(a+1)));//16
    printf("%d\n",sizeof(&a[0]+1));//4
    printf("%d\n",sizeof(*(&a[0]+1)));//16
    printf("%d\n",sizeof(*a));//16 
    printf("%d\n",sizeof(a[3]));//16
    
    
}


int main(){
    short s =5;
    int a = 4;
     printf("%d\n",sizeof(s=a+6));//2
     printf("%d\n",s);//2
}



int main(){
    int a [5]={1,2,3,4,5};
    int *p=(int*)(&a+1);
    printf("%d ,%d",*(a+1),*(p-1));
    return 0;
}




struct Test{
    int Num;
    char * pcName;
    short sDate;
    char cha[2];
    short sBa[4]l
}

int main(){
    pyintf("%p\n",p+0x1);
    pyintf("%p\n",(unsigned long)p+0x1);
    pyintf("%p\n",(unsigned int *)p+0x1);
    return 0

}