// FUN_00967f10 @ 00967f10 body=[[00967f10, 00967f4f]]


undefined4 FUN_00967f10(void)

{
  int in_EAX;
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = DAT_01258a94;
  if (*(uint *)(in_EAX + 4) < 0x1269) {
    iVar2 = DAT_01258a98;
  }
  if (iVar2 != 0) {
    uVar1 = FUN_009c1d40(*(uint *)(in_EAX + 4),*(undefined4 *)(in_EAX + 8));
    return uVar1;
  }
  return 0;
}

