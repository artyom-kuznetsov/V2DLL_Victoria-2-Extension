// FUN_00aee0e0 @ 00aee0e0 body=[[00aee0e0, 00aee0fc]]


void FUN_00aee0e0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_00dddac0;
  in_ECX[1] = param_1;
  in_ECX[2] = param_2;
  *(undefined1 *)(in_ECX + 3) = 0;
  return;
}

