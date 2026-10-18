// FUN_00aaa9c0 @ 00aaa9c0 body=[[00aaa9c0, 00aaaa08]]


undefined4 FUN_00aaa9c0(byte *param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  
  while( true ) {
    bVar1 = *param_1;
    bVar3 = bVar1 < *param_2;
    if (bVar1 != *param_2) break;
    if (bVar1 == 0) {
      return 0;
    }
    bVar1 = param_1[1];
    bVar3 = bVar1 < param_2[1];
    if (bVar1 != param_2[1]) break;
    param_1 = param_1 + 2;
    param_2 = param_2 + 2;
    if (bVar1 == 0) {
      return 0;
    }
  }
  iVar2 = (1 - (uint)bVar3) - (uint)(bVar3 != 0);
  return CONCAT31((int3)((uint)iVar2 >> 8),iVar2 < 0);
}

