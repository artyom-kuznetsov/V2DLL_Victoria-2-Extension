// FUN_0049d150 @ 0049d150 body=[[0049d150, 0049d1ad] [0049d1b0, 0049d2f6] [0049d2fa, 0049d36c] [0049d370, 0049d3b2]]


void FUN_0049d150(int param_1)

{
  byte bVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  undefined4 extraout_ECX;
  byte *pbVar9;
  int *piVar10;
  uint uVar11;
  bool bVar12;
  uint local_110 [4];
  undefined4 local_100;
  uint local_fc;
  uint auStack_f4 [4];
  undefined4 uStack_e4;
  uint uStack_e0;
  undefined **appuStack_60 [19];
  void *pvStack_14;
  undefined1 *puStack_10;
  uint local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b5b376;
  pvStack_14 = ExceptionList;
  piVar10 = *(int **)(param_1 + 0x2a78);
  ExceptionList = &pvStack_14;
  do {
    do {
      if ((piVar10 < *(int **)(param_1 + 0x2a78)) || (*(int **)(param_1 + 0x2a7c) <= piVar10)) {
        ExceptionList = pvStack_14;
        return;
      }
      piVar2 = (int *)*piVar10;
      piVar10 = piVar10 + 1;
      piVar5 = (int *)piVar2[0xc];
    } while ((int *)piVar2[0xc] == (int *)0x0);
    do {
      piVar3 = (int *)piVar5[2];
      iVar6 = *piVar5;
      if (iVar6 < *(int *)(param_1 + 0x223c) - *(int *)(param_1 + 0x2238) >> 2) {
        iVar8 = *(int *)(*(int *)(param_1 + 0x2238) + iVar6 * 4);
        if (*(int *)(iVar8 + 0x16c) == 0) {
          *(int **)(iVar8 + 0x16c) = piVar2;
          pbVar7 = (byte *)(**(code **)(*piVar2 + 0x2c))(auStack_f4);
          if (0xf < *(uint *)(pbVar7 + 0x14)) {
            pbVar7 = *(byte **)pbVar7;
          }
          pbVar9 = &DAT_00dfc1d0;
          do {
            bVar1 = *pbVar7;
            bVar12 = bVar1 < *pbVar9;
            if (bVar1 != *pbVar9) {
LAB_0049d350:
              iVar8 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
              goto LAB_0049d355;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar7[1];
            bVar12 = bVar1 < pbVar9[1];
            if (bVar1 != pbVar9[1]) goto LAB_0049d350;
            pbVar7 = pbVar7 + 2;
            pbVar9 = pbVar9 + 2;
          } while (bVar1 != 0);
          iVar8 = 0;
LAB_0049d355:
          if (0xf < uStack_e0) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(auStack_f4[0]);
          }
          uStack_e0 = 0xf;
          uStack_e4 = 0;
          auStack_f4[0] = auStack_f4[0] & 0xffffff00;
          if (iVar8 == 0) {
            *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x2aa4) + iVar6 * 4) + 0x1c) = 1;
          }
        }
        else {
          local_fc = 0xf;
          local_100 = 0;
          local_110[0] = local_110[0] & 0xffffff00;
          FUN_00409350("map.cpp",7);
          local_c = 0;
          uVar4 = FUN_004015b0(local_110,0x566,0x10004);
          local_c = CONCAT31(local_c._1_3_,1);
          FUN_00987d50(uVar4,"Province #",10,0);
          uVar4 = FUN_00455470(uVar4,iVar6,extraout_ECX," assigned to multiple continents.");
          piVar5 = (int *)FUN_00418e30(uVar4);
          FUN_00408be0(piVar5);
          uVar11 = 0;
          if (((*(byte *)(*(int *)(*piVar5 + 4) + 0xc + (int)piVar5) & 6) == 0) &&
             (iVar6 = (**(code **)(**(int **)(*(int *)(*piVar5 + 4) + 0x38 + (int)piVar5) + 0x34))()
             , iVar6 == -1)) {
            uVar11 = 4;
          }
          if (uVar11 != 0) {
            uVar11 = *(uint *)((int)piVar5 + *(int *)(*piVar5 + 4) + 0xc) | uVar11;
            if (*(int *)((int)piVar5 + *(int *)(*piVar5 + 4) + 0x38) == 0) {
              uVar11 = uVar11 | 4;
            }
            FUN_00401120(uVar11,0);
          }
          local_c = local_c & 0xffffff00;
          FUN_00987ac0(appuStack_60);
          appuStack_60[0] = std::ios_base::vftable;
          FUN_00aad52d(appuStack_60);
          local_c = 0xffffffff;
          if (0xf < local_fc) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_110[0]);
          }
        }
      }
      piVar5 = piVar3;
    } while (piVar3 != (int *)0x0);
  } while( true );
}

