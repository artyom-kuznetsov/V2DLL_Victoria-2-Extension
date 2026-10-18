// FUN_008a42c0 @ 008a42c0 body=[[008a42c0, 008a433f]]


uint FUN_008a42c0(void)

{
  int in_EAX;
  uint uVar1;
  int in_ECX;
  int iVar2;
  
  uVar1 = FUN_00973bd0();
  if (uVar1 != 0) {
    if (*(int *)(in_EAX + 0xc) == 0) {
      if (*(int *)(in_EAX + 0x30) == 0) goto LAB_008a4338;
      uVar1 = *(uint *)(in_EAX + 0x2c);
      iVar2 = *(int *)(in_EAX + 0x30);
    }
    else {
      uVar1 = *(uint *)(in_EAX + 8);
      iVar2 = *(int *)(in_EAX + 0xc);
    }
    iVar2 = *(int *)(*(int *)(DAT_012587e4 + 4) + iVar2 * 4);
    if (iVar2 != 0) {
      FUN_00408ed0(in_ECX + 0x24,0,0xffffffff);
      uVar1 = FUN_0053ef20(iVar2);
      return uVar1;
    }
  }
LAB_008a4338:
  return uVar1 & 0xffffff00;
}

