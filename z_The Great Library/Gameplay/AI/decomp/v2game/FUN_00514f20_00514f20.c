// FUN_00514f20 @ 00514f20 body=[[00514f20, 00515049] [0051504d, 005150a5] [005150b0, 005152ef]]


/* WARNING: Removing unreachable block (ram,0x0051513b) */
/* WARNING: Removing unreachable block (ram,0x00515148) */

int FUN_00514f20(int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  int local_50;
  int local_4c;
  int local_40;
  uint local_34;
  undefined8 local_30;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b513ce;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  iVar5 = FUN_00514ea0();
  piVar9 = *(int **)(param_1 + 0x9d8);
  uVar10 = *(uint *)(*(int *)(DAT_012586dc + 0x20) + 0x14);
  local_4c = 0;
  local_30 = 0;
  uVar11 = __alldiv(uVar10 << 0x1e,
                    (((int)uVar10 >> 0x1f) << 0xf | uVar10 >> 0x11) << 0xf | (uVar10 & 0x1ffff) >> 2
                    ,0x1f40000,0);
  iVar6 = DAT_0131bb34;
  do {
    do {
      if ((piVar9 < *(int **)(param_1 + 0x9d8)) || (*(int **)(param_1 + 0x9dc) <= piVar9)) {
        if (param_2 != '\0') {
          local_34 = local_34 & 0xffffff00;
          FUN_0054c520(*(int *)(param_1 + 0x15dc),*(int *)(param_1 + 0x15e0),
                       *(int *)(param_1 + 0x15e0) - *(int *)(param_1 + 0x15dc) >> 2,local_34);
          if (*(int *)(DAT_012588e8 + 0xb60) == *(int *)(param_1 + 0x20)) {
            *(undefined4 *)(*(int *)(*(int *)(DAT_012588e8 + 0xb24) + 0x24) + 0x20) = 1;
          }
        }
        ExceptionList = local_14;
        return local_4c;
      }
      iVar1 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *piVar9 * 4);
      piVar9 = piVar9 + 1;
    } while ((*(int *)(iVar1 + 0x134) != *(int *)(param_1 + 0x20)) ||
            (0 < *(int *)(*(int *)(iVar1 + 0x188) + 0x84)));
    iVar2 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(*(int *)(iVar1 + 0x188) + 0x268) * 4)
    ;
    if (iVar6 == 0) {
      iVar6 = FUN_00aae9af(0x188);
      local_c = 0;
      if (iVar6 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = FUN_0041a160();
      }
      iVar3 = DAT_0131bb34;
      local_c = 1;
      if ((iVar6 != DAT_0131bb34) && (DAT_0131bb34 != 0)) {
        FUN_0096dd80(DAT_0131bb34);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(iVar3);
      }
      local_c = 0xffffffff;
      DAT_0131bb34 = iVar6;
    }
    local_40 = 0;
    local_34 = *(int *)(iVar6 + 0x10) - *(int *)(iVar6 + 0xc) >> 2;
    if (0 < (int)local_34) {
      local_50 = 0;
      do {
        iVar3 = *(int *)(*(int *)(iVar1 + 0x194) + local_50);
        iVar6 = DAT_0131bb34;
        while (iVar4 = iVar3, DAT_0131bb34 = iVar6, iVar4 != 0) {
          iVar3 = *(int *)(iVar4 + 0x27c);
          iVar7 = *(int *)(iVar4 + 0x68);
          if ((((*(char *)(iVar7 + 0x42) == '\0') && (*(char *)(iVar7 + 0x3d9) == '\0')) &&
              (*(char *)(iVar4 + 0x4c) != '\0')) && (*(int *)(iVar7 + 0x3c) == 0)) {
            uVar10 = *(uint *)(iVar4 + 0x58);
            uVar12 = __alldiv(uVar10 << 0x1e,((int)uVar10 >> 0x1f) << 0x1e | uVar10 >> 2,uVar11);
            lVar13 = __allmul(uVar12,*(undefined4 *)(param_1 + 0x14d8),
                              *(undefined4 *)(param_1 + 0x14dc));
            lVar13 = lVar13 >> 0xf;
            uVar10 = (uint)lVar13 >> 0xf | (int)((ulonglong)lVar13 >> 0x20) << 0x11;
            if (((uVar10 == 0) && (0 < lVar13)) &&
               ((local_30 < 1 ||
                (uVar10 = (uint)(lVar13 + local_30) >> 0xf |
                          (int)((ulonglong)(lVar13 + local_30) >> 0x20) * 0x20000, uVar10 == 0)))) {
              local_30 = lVar13 + local_30;
            }
            iVar7 = FUN_00965930(0);
            iVar6 = DAT_0131bb34;
            if (0 < (int)(uVar10 - iVar7)) {
              local_4c = local_4c + (uVar10 - iVar7);
              local_30 = CONCAT44(DAT_013f368c,DAT_013f3688);
              if (iVar5 < local_4c) {
                if (param_2 != '\0') {
                  local_34 = local_34 & 0xffffff00;
                  FUN_0054c520(*(int *)(param_1 + 0x15dc),*(int *)(param_1 + 0x15e0),
                               *(int *)(param_1 + 0x15e0) - *(int *)(param_1 + 0x15dc) >> 2,local_34
                              );
                }
                ExceptionList = local_14;
                return iVar5;
              }
              if (param_2 != '\0') {
                iVar6 = FUN_00aae9af(0x60);
                local_c = 2;
                if (iVar6 == 0) {
                  uVar8 = 0;
                }
                else {
                  uVar8 = FUN_00446120(iVar6);
                }
                local_c = 0xffffffff;
                FUN_00446760(*(undefined4 *)(iVar2 + 0x58),iVar4,param_1);
                FUN_0068f390();
                FUN_0053f7b0(param_1,uVar8);
                iVar6 = DAT_0131bb34;
              }
            }
          }
        }
        local_50 = local_50 + 0x10;
        local_40 = local_40 + 1;
      } while (local_40 < (int)local_34);
    }
  } while( true );
}

