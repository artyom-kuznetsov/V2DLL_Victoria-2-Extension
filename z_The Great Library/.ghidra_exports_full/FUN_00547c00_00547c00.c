// FUN_00547c00 @ 00547c00 body=[[00547c00, 00547c42]]


uint FUN_00547c00(void)

{
  byte *pbVar1;
  uint uVar2;
  int *in_ECX;
  
  pbVar1 = *(byte **)in_ECX[8];
  if ((pbVar1 != (byte *)0x0) && (pbVar1 < pbVar1 + *(int *)in_ECX[0xc])) {
    return (uint)*pbVar1;
  }
  uVar2 = (**(code **)(*in_ECX + 0x1c))();
  if (uVar2 == 0xffffffff) {
    return 0xffffffff;
  }
  (**(code **)(*in_ECX + 0x10))(uVar2);
  return uVar2;
}

