// FUN_00b0ef10 @ 00b0ef10 body=[[00b0ef10, 00b0ef25]]


void FUN_00b0ef10(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_00de0084;
  in_ECX[1] = param_1;
  *(undefined1 *)(in_ECX + 2) = 1;
  return;
}

