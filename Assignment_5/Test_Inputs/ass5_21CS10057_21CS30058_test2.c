//testing function call\s and nested if else 

void foo()
{
int i;
for(i=0 ;i<=656;i+=2)
{
if(i>='A'&& i<='Z')
  i=24+i;
  else
  if(i>='a'&& i<='z')
  i=32;
}

}

void main()
{
int p;

p=foo();
}
