// FUN_00423a50 @ 00423a50 body=[[00423a50, 00423b4d]]


int FUN_00423a50(byte *param_1)

{
  byte bVar1;
  int iVar2;
  int *in_ECX;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  undefined4 *puVar8;
  bool bVar9;
  int local_10;
  int *local_8;
  
  local_8 = (int *)*in_ECX;
  iVar3 = in_ECX[1] - (int)local_8 >> 2;
  local_10 = 0;
  if (0 < iVar3) {
    do {
      iVar2 = *local_8;
      pbVar7 = param_1;
      if (0xf < *(uint *)(param_1 + 0x14)) {
        pbVar7 = *(byte **)param_1;
      }
      pbVar4 = *(byte **)(iVar2 + 4);
      do {
        bVar1 = *pbVar4;
        bVar9 = bVar1 < *pbVar7;
        if (bVar1 != *pbVar7) {
LAB_00423ac0:
          iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_00423ac5;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar9 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_00423ac0;
        pbVar4 = pbVar4 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_00423ac5:
      if (iVar5 == 0) {
        return iVar2;
      }
      iVar5 = 0;
      if (0 < *(int *)(iVar2 + 8)) {
        puVar8 = (undefined4 *)(iVar2 + 0xc);
        do {
          pbVar7 = param_1;
          if (0xf < *(uint *)(param_1 + 0x14)) {
            pbVar7 = *(byte **)param_1;
          }
          pbVar4 = (byte *)*puVar8;
          do {
            bVar1 = *pbVar4;
            bVar9 = bVar1 < *pbVar7;
            if (bVar1 != *pbVar7) {
LAB_00423b07:
              iVar6 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
              goto LAB_00423b0c;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar4[1];
            bVar9 = bVar1 < pbVar7[1];
            if (bVar1 != pbVar7[1]) goto LAB_00423b07;
            pbVar4 = pbVar4 + 2;
            pbVar7 = pbVar7 + 2;
          } while (bVar1 != 0);
          iVar6 = 0;
LAB_00423b0c:
          if (iVar6 == 0) {
            return iVar2;
          }
          iVar5 = iVar5 + 1;
          puVar8 = puVar8 + 1;
        } while (iVar5 < *(int *)(iVar2 + 8));
      }
      local_8 = local_8 + 1;
      local_10 = local_10 + 1;
    } while (local_10 < iVar3);
  }
  return 0;
}

