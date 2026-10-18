// FUN_00902590 @ 00902590 body=[[00902590, 009025ee]]


undefined4 FUN_00902590(void)

{
  int in_EAX;
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00973bd0();
  if (iVar1 != 0) {
    iVar1 = FUN_009024c0();
    if (iVar1 != 0) {
      FUN_00408ed0(in_EAX + 0x2c,0,0xffffffff);
      uVar2 = FUN_0053ef20(iVar1);
      return uVar2;
    }
  }
  return 0;
}

