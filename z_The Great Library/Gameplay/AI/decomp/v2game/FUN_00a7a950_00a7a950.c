// FUN_00a7a950 @ 00a7a950 body=[[00a7a950, 00a7a967]]


void FUN_00a7a950(undefined4 *param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  uVar1 = *(undefined4 *)(in_ECX + 0x80);
  *param_1 = *(undefined4 *)(in_ECX + 0x7c);
  param_1[1] = uVar1;
  return;
}

