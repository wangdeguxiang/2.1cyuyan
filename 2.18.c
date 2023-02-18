int main(){
    int n = 0;
    scanf("%d",&n);

    int i = 0;
    int ret = 1;
    //迭代

    for(i = 1; i <= n; i++){
        ret = ret * i;

    }
    printf("%d\n",ret);
    return 0;
}





int Fac(int n){
    if(n <= 1){
        return 1;
    }else{
        return n * Fac(n-1);
    }

}
int main(){
    int n = 0;
    scanf("%d",&n);

    int ret = Fac(n);

    printf("%d\n",ret);
    return 0;
}





int Fid(int n){
    if(n <= 2){
        return 1;
    }else{
        return Fid(n-1) + Fid(n-2);
    }

}
int main(){
    int n = 0;
    scanf("%d",&n);

    int ret = Fid(n);

    printf("%d\n",ret);
    return 0;
}