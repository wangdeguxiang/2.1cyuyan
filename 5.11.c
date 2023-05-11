struct Book{
    char name[20];
    int price;
    char id[12];

}b4,b5,b6;
int main(){
    struct Book b1;
    struct Book b2;
    struct Book b3;
    return 0;
}




struct {
    char c;
    int i;
    char ch;
    double d;

}s;
struct {
    char c;
    int i;
    char ch;
    double d;

}*ps;

int main(){
    ps=&s;

    return 0;
}





struct A{
    char c;
    int i;
    

};

struct B{
    char c;
    int i;
    double d;
    struct A sa;

};
int main(){
    return 0;
}




struct N{
    
    int d;
    struct N n;

};
int main(){
    return 0;
}



struct Node{
    
    int date;
    struct Node* next;

};
int main(){
    struct N sn;
    return 0;
}




typedef struct{
    int data;
    Node * next;
}Node;
int main(){
    Node n;
    return 0;
}





struct S{
    
    char c;
    int i;

}s1,s2;

struct B{
    
    char c;
    
    double d;
    struct s s;


};
int main(){
     struct S s3={'x',20};
    return 0;
}












