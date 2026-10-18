// FUN_005c0370 @ 005c0370 body=[[005c0370, 005c03be]]


undefined4 FUN_005c0370(void)

{
  uint uVar1;
  int in_EAX;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = *(uint *)(in_EAX + 0x7c);
  if ((uVar1 != 0) || (*(int *)(in_EAX + 0x80) != 0)) {
    iVar3 = DAT_01258a94;
    if (uVar1 < 0x1269) {
      iVar3 = DAT_01258a98;
    }
    if (iVar3 != 0) {
      uVar2 = FUN_009c1d40(uVar1,*(undefined4 *)(in_EAX + 0x80));
      return uVar2;
    }
  }
  return 0;
}

