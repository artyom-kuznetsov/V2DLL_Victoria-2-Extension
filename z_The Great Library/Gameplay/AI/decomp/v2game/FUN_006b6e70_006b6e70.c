// FUN_006b6e70 @ 006b6e70 body=[[006b6e70, 006b6ee7] [006b6ef0, 006b6f8a] [006b6f8e, 006b709c]]


void FUN_006b6e70(undefined4 param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  void *_Dst;
  int iVar7;
  byte *pbVar8;
  char *pcVar9;
  bool bVar10;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b61fce;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (DAT_0125ce80 == (undefined4 *)0x0) {
    ExceptionList = &local_10;
    iVar4 = FUN_00aae9af(0x3c);
    local_8 = 0;
    if (iVar4 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_004dada0();
    }
    local_8 = 0xffffffff;
    FUN_004dc340(uVar5);
  }
  local_14 = 1;
  iVar4 = (int)(DAT_0125ce80[4] - DAT_0125ce80[3]) >> 2;
  if (1 < iVar4) {
    do {
      if (DAT_0125ce80 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)FUN_00aae9af(0x3c);
        local_8 = 1;
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          puVar6[1] = 0x1ff;
          *puVar6 = 0;
          _Dst = (void *)FUN_00aad56b(0x7fc);
          puVar6[2] = _Dst;
          _memset(_Dst,0,puVar6[1] * 4);
          puVar6[3] = 0;
          puVar6[4] = 0;
          puVar6[5] = 0;
          puVar6[7] = 0;
          puVar6[8] = 0;
          puVar6[9] = 0;
        }
        puVar3 = DAT_0125ce80;
        local_8 = 2;
        if ((puVar6 != DAT_0125ce80) && (DAT_0125ce80 != (undefined4 *)0x0)) {
          FUN_004dadf0(DAT_0125ce80);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(puVar3);
        }
        local_8 = 0xffffffff;
        DAT_0125ce80 = puVar6;
      }
      iVar2 = *(int *)(DAT_0125ce80[3] + local_14 * 4);
      if (*(char *)(iVar2 + 0xe0) != '\0') {
        if (*(char *)(*(int *)(param_2 + 0x5c) + 0xd8) == '\0') {
          pbVar8 = (byte *)(iVar2 + 0x20);
          if (0xf < *(uint *)(iVar2 + 0x34)) {
            pbVar8 = *(byte **)pbVar8;
          }
          pcVar9 = "naval_base";
          do {
            bVar1 = *pbVar8;
            bVar10 = bVar1 < (byte)*pcVar9;
            if (bVar1 != *pcVar9) {
LAB_006b6ff6:
              iVar7 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
              goto LAB_006b6ffb;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar8[1];
            bVar10 = bVar1 < (byte)pcVar9[1];
            if (bVar1 != pcVar9[1]) goto LAB_006b6ff6;
            pbVar8 = pbVar8 + 2;
            pcVar9 = pcVar9 + 2;
          } while (bVar1 != 0);
          iVar7 = 0;
LAB_006b6ffb:
          if (iVar7 == 0) {
            FUN_004b6120(0,0);
            goto LAB_006b7056;
          }
        }
        if (*(char *)(iVar2 + 0x131) != '\0') {
          iVar2 = *(int *)(*(int *)(param_2 + 0x118) + *(int *)(iVar2 + 0x134) * 4);
          *(undefined4 *)(iVar2 + 0x20) = 1000;
          iVar7 = *(int *)(*(int *)(iVar2 + 0x18) + 0xc4) * 1000;
          if (iVar7 < 1000) {
            *(int *)(iVar2 + 0x20) = iVar7;
          }
          if (*(int *)(iVar2 + 0x20) < 0) {
            *(undefined4 *)(iVar2 + 0x20) = 0;
          }
          *(undefined4 *)(iVar2 + 0x24) = *(undefined4 *)(iVar2 + 0x20);
        }
      }
LAB_006b7056:
      local_14 = local_14 + 1;
    } while (local_14 < iVar4);
  }
  FUN_006be8a0(param_2);
  FUN_006be9d0(param_2);
  FUN_006bea70(param_1,param_2);
  *(undefined1 *)(*(int *)(param_2 + 0x5c) + 0x28) = 1;
  ExceptionList = local_10;
  return;
}

