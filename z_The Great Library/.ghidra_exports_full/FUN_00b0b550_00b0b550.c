// FUN_00b0b550 @ 00b0b550 body=[[00b0b550, 00b0b5ac]]


uint FUN_00b0b550(undefined4 *param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 *in_ECX;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  uVar2 = 0;
  if (in_ECX[1] != 0) {
    puVar6 = (undefined4 *)*in_ECX;
    do {
      pbVar5 = (byte *)*param_1;
      if ((byte *)*param_1 == (byte *)0x0) {
        pbVar5 = &DAT_00ded94d;
      }
      pbVar3 = (byte *)*puVar6;
      do {
        bVar1 = *pbVar3;
        bVar7 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_00b0b592:
          iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_00b0b597;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar7 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_00b0b592;
        pbVar3 = pbVar3 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_00b0b597:
      if (iVar4 == 0) {
        return uVar2;
      }
      uVar2 = uVar2 + 1;
      puVar6 = puVar6 + 3;
    } while (uVar2 < (uint)in_ECX[1]);
  }
  return 0xffffffff;
}

