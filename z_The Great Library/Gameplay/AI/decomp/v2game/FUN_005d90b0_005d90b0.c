// FUN_005d90b0 @ 005d90b0 body=[[005d90b0, 005d90cd]]


void FUN_005d90b0(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(*(int *)(param_2 + 0x5c) + 0x80);
  *param_1 = *(undefined4 *)(*(int *)(param_2 + 0x5c) + 0x7c);
  param_1[1] = uVar1;
  return;
}

