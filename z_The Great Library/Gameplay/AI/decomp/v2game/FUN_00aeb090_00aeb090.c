// FUN_00aeb090 @ 00aeb090 body=[[00aeb090, 00aeb0ae]]


void FUN_00aeb090(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[4] = param_1;
  *(undefined2 *)(in_ECX + 3) = 0xcb;
  return;
}

