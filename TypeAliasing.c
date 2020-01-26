int *p;
 double = 0.0;

 int *faa(double *g);

 void foo(double f){
   p = faa(&f);
   f += 1.0;
   printf("f=%x\n", *p);
 }
 int *faa(double *g) { return (int*) g; }

 int main(){
   foo(d);
 }
