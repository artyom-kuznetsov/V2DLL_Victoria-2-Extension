// FUN_00a490e0 @ 00a490e0 body=[[00a490e0, 00a490fa]]


void FUN_00a490e0(undefined4 *param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  uVar1 = *(undefined4 *)(in_ECX + 0x88);
  *param_1 = *(undefined4 *)(in_ECX + 0x84);
  param_1[1] = uVar1;
  return;
}

