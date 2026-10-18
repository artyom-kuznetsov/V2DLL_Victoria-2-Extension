// FUN_009bffd0 @ 009bffd0 body=[[009bffd0, 009c0062]]


bool FUN_009bffd0(void)

{
  int iVar1;
  int in_ECX;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_1c;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 local_8;
  
  iVar1 = *(int *)(in_ECX + 0x144);
  local_28 = *(undefined8 *)(iVar1 + 0xf0);
  local_20 = *(undefined4 *)(iVar1 + 0xf8);
  local_10 = *(undefined4 *)(iVar1 + 0xfc);
  uStack_c = *(undefined4 *)(iVar1 + 0x100);
  local_1c = *(undefined8 *)(iVar1 + 0xfc);
  local_14 = *(undefined4 *)(iVar1 + 0x104);
  local_8 = local_14;
  iVar1 = FUN_009ec900(&local_28);
  return iVar1 != 1;
}

