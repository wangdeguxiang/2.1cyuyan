int main(){
    int a [4]={1,2,3,4};
    int * ptr1=(int *)(&a + 1);
    int * ptr2=(int *)((int )a + 1);
    printf("%x %x ",ptr1[-1],*ptr2);
    return 0;
}



int main(){

    int a [3][2]={{0,1},{2,3},{4,5}};
    int *p;
    p=a[0];
    printf("%d",p[0]);
    return 0;
}


int main(){
    int a [5][5];
    int (*p)[4];
    p=a;
    printf("%p ,%d\n",&p[4][2]-&a[4][2],&p[4][2]-&a[4][2]);
    return 0;
}




int main(){
    int aa[2][5]={1,2,3,4,5,6,7,8,9,10};
    int *ptr1=(int *)(&aa+1);
    int *ptr2=(int *)((aa+1));
    printf("%d,%d",*(ptr1-1),*(ptr2-1));
    return 0;
}