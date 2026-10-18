// FUN_00aaaf60 @ 00aaaf60 body=[[00aaaf60, 00aaafe7]]


undefined4 * FUN_00aaaf60(undefined4 *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 uVar6;
  int in_ECX;
  byte *pbVar7;
  bool bVar8;
  undefined4 local_c;
  undefined4 local_8;
  
  puVar2 = param_1;
  iVar3 = FUN_00aaac00(param_1);
  if (iVar3 != *(int *)(in_ECX + 4)) {
    pbVar7 = *(byte **)(iVar3 + 0xc);
    pbVar4 = (byte *)*puVar2;
    do {
      bVar1 = *pbVar4;
      bVar8 = bVar1 < *pbVar7;
      if (bVar1 != *pbVar7) {
LAB_00aaafa0:
        iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
        goto LAB_00aaafa5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar8 = bVar1 < pbVar7[1];
      if (bVar1 != pbVar7[1]) goto LAB_00aaafa0;
      pbVar4 = pbVar4 + 2;
      pbVar7 = pbVar7 + 2;
    } while (bVar1 != 0);
    iVar5 = 0;
LAB_00aaafa5:
    if (-1 < iVar5) {
      return (undefined4 *)(iVar3 + 0x10);
    }
  }
  local_c = *puVar2;
  local_8 = 0;
  uVar6 = FUN_00aa8280(&local_c);
  FUN_00aaadc0(&param_1,iVar3,uVar6);
  return param_1 + 4;
}

