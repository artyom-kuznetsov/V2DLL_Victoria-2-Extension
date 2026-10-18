// FUN_0081edb0 @ 0081edb0 body=[[0081edb0, 0081f0c9] [0081f0cd, 0081f0fc] [0081f100, 0081f25d] [0081f261, 0081f2dc] [0081f2e0, 0081f3ae]]


int FUN_0081edb0(int param_1,undefined4 *param_2,int *param_3)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  char *pcVar14;
  uint uVar15;
  bool bVar16;
  undefined8 uVar17;
  int local_28;
  int local_1c;
  int *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b52cbc;
  local_10 = ExceptionList;
  iVar12 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x34) * 4);
  local_18 = (int *)*param_3;
  local_1c = 0;
  local_28 = 0;
  iVar6 = DAT_0131bb34;
  ExceptionList = &local_10;
  if (local_18 != (int *)0x0) {
    ExceptionList = &local_10;
    FUN_00401000(0x453b8800);
    iVar6 = FUN_00b31c00();
    do {
      piVar2 = (int *)local_18[2];
      iVar3 = *local_18;
      iVar7 = __alldiv((longlong)iVar6 * (longlong)*(int *)(iVar3 + 0x22c),1000,0);
      iVar8 = __alldiv((longlong)iVar6 * (longlong)*(int *)(iVar3 + 0x228),1000,0);
      uVar17 = __allmul(*(int *)(iVar3 + 0x23c),*(int *)(iVar3 + 0x23c) >> 0x1f,iVar6,iVar6 >> 0x1f)
      ;
      iVar9 = __alldiv(uVar17,1000,0);
      local_14 = __alldiv((longlong)
                          (iVar9 + *(int *)(iVar3 + 0x234) + *(int *)(iVar3 + 0x230) +
                                   *(int *)(iVar3 + 0x240) + iVar8 + iVar7) *
                          (longlong)*(int *)(iVar3 + 0x238),1000,0);
      uVar15 = *(uint *)(iVar3 + 0x1c);
      if (uVar15 < 0x10) {
        pbVar10 = (byte *)(iVar3 + 8);
      }
      else {
        pbVar10 = *(byte **)(iVar3 + 8);
      }
      pcVar14 = "guard";
      do {
        bVar1 = *pbVar10;
        bVar16 = bVar1 < (byte)*pcVar14;
        if (bVar1 != *pcVar14) {
LAB_0081eef0:
          iVar7 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
          goto LAB_0081eef5;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar10[1];
        bVar16 = bVar1 < (byte)pcVar14[1];
        if (bVar1 != pcVar14[1]) goto LAB_0081eef0;
        pbVar10 = pbVar10 + 2;
        pcVar14 = pcVar14 + 2;
      } while (bVar1 != 0);
      iVar7 = 0;
LAB_0081eef5:
      if (iVar7 == 0) {
        uVar17 = __allmul(local_14,local_14 >> 0x1f,1000,0);
        local_14 = __alldiv(uVar17,2000,0);
      }
      iVar7 = DAT_012588e8;
      if (uVar15 < 0x10) {
        pbVar10 = (byte *)(iVar3 + 8);
      }
      else {
        pbVar10 = *(byte **)(iVar3 + 8);
      }
      pcVar14 = "irregular";
      do {
        bVar1 = *pbVar10;
        bVar16 = bVar1 < (byte)*pcVar14;
        if (bVar1 != *pcVar14) {
LAB_0081ef50:
          iVar8 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
          goto LAB_0081ef55;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar10[1];
        bVar16 = bVar1 < (byte)pcVar14[1];
        if (bVar1 != pcVar14[1]) goto LAB_0081ef50;
        pbVar10 = pbVar10 + 2;
        pcVar14 = pcVar14 + 2;
      } while (bVar1 != 0);
      iVar8 = 0;
LAB_0081ef55:
      if (iVar8 == 0) {
LAB_0081f00b:
        if (*(char *)(iVar12 + 0x12d0) == '\0') {
          local_14 = local_14 + 8000;
        }
        else {
          local_14 = 0;
        }
      }
      else {
        if (uVar15 < 0x10) {
          pbVar10 = (byte *)(iVar3 + 8);
        }
        else {
          pbVar10 = *(byte **)(iVar3 + 8);
        }
        pcVar14 = "cavalry";
        do {
          bVar1 = *pbVar10;
          bVar16 = bVar1 < (byte)*pcVar14;
          if (bVar1 != *pcVar14) {
LAB_0081ef90:
            iVar8 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
            goto LAB_0081ef95;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar10[1];
          bVar16 = bVar1 < (byte)pcVar14[1];
          if (bVar1 != pcVar14[1]) goto LAB_0081ef90;
          pbVar10 = pbVar10 + 2;
          pcVar14 = pcVar14 + 2;
        } while (bVar1 != 0);
        iVar8 = 0;
LAB_0081ef95:
        if (iVar8 == 0) goto LAB_0081f00b;
        iVar8 = DAT_012588e8 + 0xb4;
        if (*(int *)(DAT_012588e8 + 0xa74) == 0) {
          FUN_009b7700();
        }
        iVar9 = *(int *)(iVar7 + 0xa74);
        uVar15 = *(uint *)(iVar8 + iVar9 * 4);
        uVar15 = uVar15 ^ (int)uVar15 >> 0xb;
        uVar15 = uVar15 ^ (uVar15 & 0xff3a58ad) << 7;
        uVar15 = uVar15 ^ (uVar15 & 0xffffdf8c) << 0xf;
        uVar15 = (uVar15 ^ (int)uVar15 >> 0x12) & 0x80000007;
        *(int *)(iVar7 + 0xa74) = (iVar9 + 1) % 0x270;
        if ((int)uVar15 < 0) {
          uVar15 = (uVar15 - 1 | 0xfffffff8) + 1;
        }
        local_14 = local_14 + uVar15 * 1000;
      }
      iVar7 = __alldiv((longlong)*(int *)(iVar3 + 0xb4) * (longlong)local_14,1000,0);
      if (local_28 < iVar7) {
        local_28 = iVar7;
        local_1c = iVar3;
      }
      local_18 = piVar2;
    } while (piVar2 != (int *)0x0);
    iVar6 = DAT_0131bb34;
    if (local_1c != 0) {
      piVar2 = (int *)*param_2;
      while (piVar2 != (int *)0x0) {
        iVar3 = *piVar2;
        piVar2 = (int *)piVar2[2];
        if (iVar6 == 0) {
          iVar6 = FUN_00aae9af(0x188);
          local_8 = 0;
          if (iVar6 == 0) {
            iVar6 = 0;
          }
          else {
            iVar6 = FUN_0041a160();
          }
          iVar7 = DAT_0131bb34;
          local_8 = 1;
          if ((iVar6 != DAT_0131bb34) && (DAT_0131bb34 != 0)) {
            FUN_0096dd80(DAT_0131bb34);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(iVar7);
          }
          local_8 = 0xffffffff;
          DAT_0131bb34 = iVar6;
        }
        local_28 = 0;
        iVar7 = *(int *)(iVar6 + 0x10) - *(int *)(iVar6 + 0xc) >> 2;
        if (0 < iVar7) {
          local_18 = (int *)0x0;
          do {
            iVar6 = *(int *)(*(int *)(iVar3 + 0x194) + (int)local_18);
            while (iVar8 = iVar6, iVar8 != 0) {
              iVar6 = *(int *)(iVar8 + 0x27c);
              if (*(char *)(*(int *)(iVar8 + 0x68) + 0x42) != '\0') {
                iVar9 = FUN_00965930(0);
                iVar11 = FUN_00965870(iVar8,0);
                if ((iVar9 < iVar11) && (cVar5 = FUN_005141d0(iVar12,iVar3), cVar5 != '\0')) {
                  iVar12 = FUN_00aae9af(0x68);
                  local_8 = 2;
                  if (iVar12 == 0) {
                    uVar13 = 0;
                  }
                  else {
                    uVar13 = FUN_0057d1b0(iVar12,local_1c,*(undefined4 *)(iVar3 + 0x58),iVar8,
                                          *(undefined4 *)(param_1 + 0x30),
                                          *(undefined4 *)(param_1 + 0x34));
                  }
                  local_8 = 0xffffffff;
                  iVar12 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
                  (**(code **)(**(int **)(iVar12 + 0x38) + 0x18))(uVar13);
                  ExceptionList = local_10;
                  return iVar3;
                }
              }
            }
            local_18 = (int *)((int)local_18 + 0x10);
            local_28 = local_28 + 1;
            iVar6 = DAT_0131bb34;
          } while (local_28 < iVar7);
        }
      }
    }
  }
  piVar2 = (int *)*param_2;
  do {
    if (piVar2 == (int *)0x0) {
      ExceptionList = local_10;
      return 0;
    }
    iVar3 = *piVar2;
    piVar2 = (int *)piVar2[2];
    if (iVar6 == 0) {
      iVar6 = FUN_00aae9af(0x188);
      local_8 = 3;
      if (iVar6 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = FUN_0041a160();
      }
      iVar7 = DAT_0131bb34;
      local_8 = 4;
      if ((iVar6 != DAT_0131bb34) && (DAT_0131bb34 != 0)) {
        FUN_0096dd80(DAT_0131bb34);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(iVar7);
      }
      local_8 = 0xffffffff;
      DAT_0131bb34 = iVar6;
    }
    local_28 = 0;
    iVar7 = *(int *)(iVar6 + 0x10) - *(int *)(iVar6 + 0xc) >> 2;
    if (0 < iVar7) {
      local_18 = (int *)0x0;
      do {
        iVar6 = *(int *)(*(int *)(iVar3 + 0x194) + (int)local_18);
        while (iVar8 = iVar6, iVar8 != 0) {
          iVar6 = *(int *)(iVar8 + 0x27c);
          if (*(char *)(*(int *)(iVar8 + 0x68) + 0x42) != '\0') {
            iVar9 = FUN_00965930(0);
            iVar11 = FUN_00965870(iVar8,0);
            if (iVar9 < iVar11) {
              puVar4 = (undefined4 *)*param_3;
              while (puVar4 != (undefined4 *)0x0) {
                uVar13 = *puVar4;
                puVar4 = (undefined4 *)puVar4[2];
                cVar5 = FUN_005141d0(iVar12,iVar3);
                if (cVar5 != '\0') {
                  iVar12 = FUN_00aae9af(0x68);
                  local_8 = 5;
                  if (iVar12 == 0) {
                    uVar13 = 0;
                  }
                  else {
                    uVar13 = FUN_0057d1b0(iVar12,uVar13,*(undefined4 *)(iVar3 + 0x58),iVar8,
                                          *(undefined4 *)(param_1 + 0x30),
                                          *(undefined4 *)(param_1 + 0x34));
                  }
                  local_8 = 0xffffffff;
                  iVar12 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
                  (**(code **)(**(int **)(iVar12 + 0x38) + 0x18))(uVar13);
                  ExceptionList = local_10;
                  return iVar3;
                }
              }
            }
          }
        }
        local_18 = (int *)((int)local_18 + 0x10);
        local_28 = local_28 + 1;
        iVar6 = DAT_0131bb34;
      } while (local_28 < iVar7);
    }
  } while( true );
}

