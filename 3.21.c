
// 健壮性
// 鲁棒性

// size_t my_strlen(const char * str){
//     // assert(str != NULL);
//     assert(str);
//     size_t count = 0;
//     while(*str !='\0'){
//         count ++;
//         str ++;
//     }
//     return count;    
// }

//声明外部符号
extern size_t my_strlen(const char * str)


int main(){
    char arr[] = "abc";
    int len = my_strlen(arr);
    printf("%d\n",len);
    return 0;
}                                                                                                                     