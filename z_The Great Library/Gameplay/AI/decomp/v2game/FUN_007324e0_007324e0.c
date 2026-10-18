// FUN_007324e0 @ 007324e0 body=[[007324e0, 0073251e]]


undefined4 FUN_007324e0(void)

{
  uint *in_EAX;
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = DAT_01258a94;
  if (*in_EAX < 0x1269) {
    iVar2 = DAT_01258a98;
  }
  if (iVar2 != 0) {
    uVar1 = FUN_009c1d40(*in_EAX,in_EAX[1]);
    return uVar1;
  }
  return 0;
}

