/*
 * Any value greater than 2 will run default
    code block.
=--==--==--==--==--==--==--==--==--==--==--==--=
*/
int switchStmt(int x){
  int w=1,y=2,z=3;
  switch(x){
    case 1: w = y*z;
            break;
    case 2: w = y-z;
            break;
    default:  w = y;
            break;
  }
}
/*  Compute x raised to non-negative power of p
 *  For every bit set to one it shifts right
 *  Shift and multiply.
=--==--==--==--==--==--==--==--==--==--==--==--=
*/
int ipwr_for(int x, unsigned int p){
  int result;
  for(result = 1; p != 0; p=p>>1){
    if(p & 0x1) result *= x;
    x = x*x;
  }
}
/*
=--==--==--==--==--==--==--==--==--==--==--==--=
*/
int resum(int x){
  int result = 1;
  while( x > 1){
    result *= x;
    x = x-1;
  }
}
/*
=--==--==--==--==--==--==--==--==--==--==--==--=
*/
int absdifv2(int x, int y){

  int result = x>y ? x-y: y-x;
  return result;
}
/* Absolute difference
=--==--==--==--==--==--==--==--==--==--==--==--==
*/
int absdif(int x, int y){
  int result;
    if(x>y) result = x-y;
    else result = y-x;
  return result;
}
/*
=--==--==--==--==--==--==--==--==--==--==--==--==
*/
int gt(int x, int y){
  return x > y;
}

int simplecomparison(int x,int y){
  if(x>y) return 1;
  else { return -1;}
}
int simplebitcomparison(int a, int b){
  if(a&b ==0) return -1;
}
int arith(int x, int y, int z){
  int t1 = x+y;
  int t2 = z+t1;
  int t3 = x+4;
  int t4 = y*48;
  int t5 = t3 + t4;
  int rval = t2*t5;
  return rval;
}
