// FUN_004e18b0 @ 004e18b0 body=[[004e18b0, 004e18ef]]


undefined4 FUN_004e18b0(void)

{
  int in_EAX;
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = DAT_01258a94;
  if (*(uint *)(in_EAX + 0x78) < 0x1269) {
    iVar2 = DAT_01258a98;
  }
  if (iVar2 != 0) {
    uVar1 = FUN_009c1d40(*(uint *)(in_EAX + 0x78),*(undefined4 *)(in_EAX + 0x7c));
    return uVar1;
  }
  return 0;
}

