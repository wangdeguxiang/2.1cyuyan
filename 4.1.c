int main(){
    unsigned int i;
    for(i = 9;i >= 0;i--){
        printf("%u\n",i);
    }
    return 0;

}


int main(){
    char a[1000];
    int i;
    for(i = 0;i < 1000;i++){
        a[i]=-1-i;
       
    }
    printf("%d",strlen(a));
    return 0;

}

unsigned char i = 0;
int main(){
    
    for(i = 0;i < =255;i++){
        printf("hello world");
    }
    
    return 0;

}


int main(){
    int n = 9;
    float *pFloat=(float*)&n;
    printf("%d\n",n);
    printf("%f\n",pFloat);
    pFloat=9.0;
    printf("%d\n",n);
    printf("%f\n",pFloat);
    return 0;
}