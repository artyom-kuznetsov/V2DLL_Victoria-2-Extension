// FUN_00b1de80 @ 00b1de80 body=[[00b1de80, 00b1dea1]]


void FUN_00b1de80(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  *(undefined2 *)(in_ECX + 3) = 1;
  in_ECX[0x74] = 0;
  in_ECX[0x75] = 0;
  return;
}

