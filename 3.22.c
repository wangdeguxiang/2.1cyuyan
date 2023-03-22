int main(){
    int a, b, c;
    a = 5;
    c =++a;
    b = ++c,c++,++a,a++;
    b+=a++ +c;
    printf("%d\n",b);
    return 0;

}



int NumberOf1(int n){
    int count = 0;
    while(n){
        if(n%2==1){
            count++;
        }
        n/=2;
    }
    return count;

}
int main(){
    int n =10;
    int ret = NumberOf1(n);
    printf("ret=%d\n",ret)
    return 0;
}








int NumberOf1(int n){
    int count = 0;
    int i =0;
    while(n){
        n=n&(n-1);
        count++;
    }
    return count;

}
int main(){
    int n =-1;
    int ret = NumberOf1(n);
    printf("ret=%d\n",ret)
    return 0;
}











int main(){
    int m,n,i,count=0;
    scanf("%d%d",&m,&n);
    for(i = 0;i<32;i++){
        if((m>>i)&1)!=((n>>i)&1){
            count++;
        }

    }
    printf("%d\n",count);
    return 0;
}






int main(){
    int n = 0;
    scanf("%d",&n);
    for(i = 31;i >=1;i-=2){
        printf("%d",(n>>i)&1)
    }
     for(i = 30;i >=0;i-=2){
        printf("%d",(n>>i)&1)
    }
    return 0;
}


int main(){
    int a =10;
    int b =20;
    a =a^b;
    b =a^b;
    printf("%d",a);
    printf("%d",b);
}

