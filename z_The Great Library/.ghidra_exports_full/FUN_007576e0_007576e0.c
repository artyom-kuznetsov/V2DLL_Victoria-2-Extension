// FUN_007576e0 @ 007576e0 body=[[007576e0, 007576fa]]


void FUN_007576e0(undefined4 *param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  uVar1 = *(undefined4 *)(in_ECX + 0x1bc);
  *param_1 = *(undefined4 *)(in_ECX + 0x1b8);
  param_1[1] = uVar1;
  return;
}

