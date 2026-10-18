// FUN_00a1e000 @ 00a1e000 body=[[00a1e000, 00a1e033]]


void FUN_00a1e000(undefined4 *param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  uVar1 = DAT_00f092fc;
  *(undefined4 *)(in_ECX + 0x84) = *param_1;
  *(undefined4 *)(in_ECX + 0x88) = param_1[1];
  *(undefined4 *)(in_ECX + 0x8c) = param_1[2];
  *(undefined4 *)(in_ECX + 0x90) = uVar1;
  return;
}

