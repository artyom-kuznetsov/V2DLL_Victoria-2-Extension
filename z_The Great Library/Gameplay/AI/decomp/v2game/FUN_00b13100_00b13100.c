// FUN_00b13100 @ 00b13100 body=[[00b13100, 00b13118]]


void FUN_00b13100(undefined4 param_1,undefined1 param_2)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_00de057c;
  in_ECX[1] = param_1;
  *(undefined1 *)(in_ECX + 2) = param_2;
  return;
}

