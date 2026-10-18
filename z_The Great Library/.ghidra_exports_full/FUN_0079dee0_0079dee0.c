// FUN_0079dee0 @ 0079dee0 body=[[0079dee0, 0079df26]]


int FUN_0079dee0(void)

{
  int in_EAX;
  int iVar1;
  
  iVar1 = DAT_01258a94;
  if (*(uint *)(in_EAX + 4) < 0x1269) {
    iVar1 = DAT_01258a98;
  }
  if (iVar1 != 0) {
    iVar1 = FUN_009c1d40(*(uint *)(in_EAX + 4),*(undefined4 *)(in_EAX + 8));
    if (iVar1 != 0) {
      return iVar1 + -8;
    }
  }
  return 0;
}

