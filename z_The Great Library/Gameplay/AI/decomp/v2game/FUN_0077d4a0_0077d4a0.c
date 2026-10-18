// FUN_0077d4a0 @ 0077d4a0 body=[[0077d4a0, 0077d4f7]]


undefined4 FUN_0077d4a0(void)

{
  int iVar1;
  int in_EAX;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = *(int *)(in_EAX + 0x2c);
  if (iVar1 == 0) {
    return 0;
  }
  iVar3 = DAT_01258a94;
  if (*(uint *)(iVar1 + 0xc) < 0x1269) {
    iVar3 = DAT_01258a98;
  }
  if (iVar3 != 0) {
    uVar2 = FUN_009c1d40();
    *(undefined4 *)(iVar1 + 8) = uVar2;
    return uVar2;
  }
  *(undefined4 *)(iVar1 + 8) = 0;
  return 0;
}

