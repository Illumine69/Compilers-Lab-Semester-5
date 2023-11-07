// checks basic functioning for floating number operations

int printStr(char *s);
int printFlt(float f);
float readFlt(int *eP);

int main(){
    float a = 1.1;
    float b = 2.2;

    printFlt(a);
    printStr(" + ");
    printFlt(b);
    printStr(" = ");
    printFlt(a+b);
    printStr("\n");
}