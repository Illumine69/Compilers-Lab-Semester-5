// To check pointers functionality

int sum(int *a,int *b){
    return *a+*b;
}

int main(){
    int i;
    int* j;
    i = 10;
    j = &i;
    j = 20;
    printf("%d\n",i);

    int total = sum(&i,j);
    printf("%d\n",total);
}