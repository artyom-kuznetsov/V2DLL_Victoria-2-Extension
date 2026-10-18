// FUN_00a1f1c0 @ 00a1f1c0 body=[[00a1f1c0, 00a1f221]]


void FUN_00a1f1c0(undefined4 param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined4 local_10;
  undefined4 uStack_c;
  
  uVar1 = *(undefined8 *)(in_ECX + 0x84);
  uVar2 = *(undefined4 *)(in_ECX + 0x8c);
  FUN_00a20820(param_1);
  local_10 = (undefined4)uVar1;
  *(undefined4 *)(in_ECX + 0x84) = local_10;
  uStack_c = (undefined4)((ulonglong)uVar1 >> 0x20);
  *(undefined4 *)(in_ECX + 0x88) = uStack_c;
  *(undefined4 *)(in_ECX + 0x8c) = uVar2;
  *(undefined4 *)(in_ECX + 0x90) = DAT_00f092fc;
  return;
}

