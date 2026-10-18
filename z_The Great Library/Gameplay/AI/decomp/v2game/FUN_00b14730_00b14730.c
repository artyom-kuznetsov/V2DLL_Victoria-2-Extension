// FUN_00b14730 @ 00b14730 body=[[00b14730, 00b1473c] [00b14740, 00b147aa]]


uint FUN_00b14730(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 *in_ECX;
  bool bVar4;
  
  pbVar2 = param_1;
  do {
    bVar1 = *pbVar2;
    pbVar2 = pbVar2 + 1;
  } while (bVar1 != 0);
  if (in_ECX[1] != (int)pbVar2 - (int)(param_1 + 1)) {
    return (int)pbVar2 - (int)(param_1 + 1) & 0xffffff00;
  }
  pbVar2 = (byte *)*in_ECX;
  if (pbVar2 == (byte *)0x0) {
    return (uint)(param_1 == (byte *)0x0);
  }
  while( true ) {
    bVar1 = *pbVar2;
    bVar4 = bVar1 < *param_1;
    if (bVar1 != *param_1) break;
    if (bVar1 == 0) {
      return 1;
    }
    bVar1 = pbVar2[1];
    bVar4 = bVar1 < param_1[1];
    if (bVar1 != param_1[1]) break;
    pbVar2 = pbVar2 + 2;
    param_1 = param_1 + 2;
    if (bVar1 == 0) {
      return 1;
    }
  }
  iVar3 = (1 - (uint)bVar4) - (uint)(bVar4 != 0);
  return CONCAT31((int3)((uint)iVar3 >> 8),iVar3 == 0);
}

