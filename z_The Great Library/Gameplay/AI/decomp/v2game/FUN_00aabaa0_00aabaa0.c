// FUN_00aabaa0 @ 00aabaa0 body=[[00aabaa0, 00aabac8]]


void FUN_00aabaa0(void)

{
  int *in_ECX;
  
  if ((*in_ECX != 0) && (in_ECX[1] != -2)) {
    luaL_unref(*in_ECX,0xffffd8f0,in_ECX[1]);
  }
  in_ECX[1] = -2;
  return;
}

