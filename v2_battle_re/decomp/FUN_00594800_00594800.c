// FUN_00594800 @ 00594800

/* WARNING: Removing unreachable block (ram,0x00594fbd) */
/* WARNING: Removing unreachable block (ram,0x00594cc9) */
/* WARNING: Removing unreachable block (ram,0x00594a14) */
/* WARNING: Removing unreachable block (ram,0x00594911) */
/* WARNING: Removing unreachable block (ram,0x00594a39) */
/* WARNING: Removing unreachable block (ram,0x00594cfb) */
/* WARNING: Removing unreachable block (ram,0x00594fef) */
/* WARNING: Removing unreachable block (ram,0x005948ec) */

void FUN_00594800(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  undefined8 uVar13;
  int local_30;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar5 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b7fc85;
  local_10 = ExceptionList;
  puVar1 = (undefined4 *)(param_1 + 8);
  ExceptionList = &local_10;
  FUN_005ab840(puVar1);
  FUN_00409350(&DAT_00e01d5c,4);
  uVar3 = *(undefined4 *)(param_1 + 0x30);
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  FUN_00408ed0();
  local_8._0_1_ = 2;
  iVar7 = *(int *)(param_1 + 0xc);
  puVar6 = (undefined1 *)FUN_00aae9af(0x2c);
  local_8 = CONCAT31(local_8._1_3_,3);
  if (puVar6 == (undefined1 *)0x0) {
    puVar6 = (undefined1 *)0x0;
  }
  else {
    *(undefined4 *)(puVar6 + 0x14) = 0xf;
    *(undefined4 *)(puVar6 + 0x10) = 0;
    *puVar6 = 0;
    FUN_00408ed0();
    *(undefined4 *)(puVar6 + 0x1c) = uVar3;
    *(int *)(puVar6 + 0x20) = iVar7;
    *(undefined4 *)(puVar6 + 0x24) = 0;
    puVar6[0x28] = 0;
  }
  iVar8 = *(int *)(param_1 + 0x10);
  *(undefined1 **)(param_1 + 0xc) = puVar6;
  *(int *)(param_1 + 0x10) = iVar8 + 1;
  if (iVar8 == 0) {
    *puVar1 = puVar6;
  }
  else {
    *(undefined1 **)(iVar7 + 0x24) = puVar6;
  }
  local_8 = 0xffffffff;
  iVar7 = FUN_00595b90();
  if (iVar7 == 0) {
    iVar7 = FUN_005b6140();
  }
  if (*(char *)(param_1 + 0x18) == '\0') {
    iVar7 = *(int *)(*(int *)(iVar7 + 0x48) + 0x10);
  }
  else {
    iVar7 = *(int *)(*(int *)(iVar7 + 0x48) + 8);
  }
  if (iVar7 / 1000 != 0) {
    FUN_00409350("leader",6);
    local_8._0_1_ = 5;
    local_8._1_3_ = 0;
    FUN_00408ed0();
    local_8._0_1_ = 6;
    iVar8 = *(int *)(param_1 + 0xc);
    puVar6 = (undefined1 *)FUN_00aae9af(0x2c);
    local_8 = CONCAT31(local_8._1_3_,7);
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = (undefined1 *)0x0;
    }
    else {
      *(undefined4 *)(puVar6 + 0x14) = 0xf;
      *(undefined4 *)(puVar6 + 0x10) = 0;
      *puVar6 = 0;
      FUN_00408ed0();
      *(int *)(puVar6 + 0x1c) = iVar7 / 1000;
      *(int *)(puVar6 + 0x20) = iVar8;
      *(undefined4 *)(puVar6 + 0x24) = 0;
      puVar6[0x28] = 0;
    }
    iVar7 = *(int *)(param_1 + 0x10);
    *(undefined1 **)(param_1 + 0xc) = puVar6;
    *(int *)(param_1 + 0x10) = iVar7 + 1;
    if (iVar7 == 0) {
      *puVar1 = puVar6;
    }
    else {
      *(undefined1 **)(iVar8 + 0x24) = puVar6;
    }
    local_8 = 0xffffffff;
  }
  iVar7 = (**(code **)(**(int **)(param_1 + 0x1c) + 0x24))();
  if (iVar7 == 1) {
    if (((((*(int *)(param_1 + 0x38) - *(int *)(param_1 + 0x34) & 0xfffffff8U) != 0) &&
         ((*(int *)(param_2 + 0x38) - *(int *)(param_2 + 0x34) & 0xfffffff8U) != 0)) &&
        (*(char *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                    *(int *)(*(int *)(param_1 + 0x34) + 4) * 4) + 0xbcc) + 0x2a4) ==
         '\x01')) &&
       (*(char *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                   *(int *)(*(int *)(param_2 + 0x34) + 4) * 4) + 0xbcc) + 0x2a5) ==
        '\0')) {
      FUN_009885d0();
      local_8 = 8;
      iVar8 = FUN_00593770();
      local_8._0_1_ = 9;
      iVar7 = *(int *)(param_1 + 0xc);
      puVar6 = (undefined1 *)FUN_00aae9af(0x2c);
      local_8 = CONCAT31(local_8._1_3_,10);
      if (puVar6 == (undefined1 *)0x0) {
        puVar6 = (undefined1 *)0x0;
      }
      else {
        *(undefined4 *)(puVar6 + 0x14) = 0xf;
        *(undefined4 *)(puVar6 + 0x10) = 0;
        *puVar6 = 0;
        FUN_00408ed0();
        *(undefined4 *)(puVar6 + 0x1c) = *(undefined4 *)(iVar8 + 0x1c);
        *(int *)(puVar6 + 0x20) = iVar7;
        *(undefined4 *)(puVar6 + 0x24) = 0;
        puVar6[0x28] = 0;
      }
      iVar8 = *(int *)(param_1 + 0x10);
      *(undefined1 **)(param_1 + 0xc) = puVar6;
      *(int *)(param_1 + 0x10) = iVar8 + 1;
      if (iVar8 == 0) {
        *puVar1 = puVar6;
      }
      else {
        *(undefined1 **)(iVar7 + 0x24) = puVar6;
      }
      FUN_0099ee70();
      local_8 = 0xffffffff;
      FUN_00408ad0();
    }
    if (*(char *)(param_1 + 0x18) != '\0') {
      iVar7 = *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x18) + 0x5c) + 0x14) +
                      0x98);
      iVar8 = iVar7 >> 0x1f;
      if (iVar7 / 1000 + iVar8 != iVar8) {
        FUN_00409350("terrain",7);
        iVar7 = *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x18) + 0x5c) + 0x14)
                        + 0x98);
        local_8._0_1_ = 0xc;
        local_8._1_3_ = 0;
        FUN_00408ed0();
        local_8._0_1_ = 0xd;
        iVar8 = *(int *)(param_1 + 0xc);
        puVar6 = (undefined1 *)FUN_00aae9af(0x2c);
        local_8 = CONCAT31(local_8._1_3_,0xe);
        if (puVar6 == (undefined1 *)0x0) {
          puVar6 = (undefined1 *)0x0;
        }
        else {
          *(undefined4 *)(puVar6 + 0x14) = 0xf;
          *(undefined4 *)(puVar6 + 0x10) = 0;
          *puVar6 = 0;
          FUN_00408ed0();
          *(int *)(puVar6 + 0x1c) = -(iVar7 / 1000);
          *(int *)(puVar6 + 0x20) = iVar8;
          *(undefined4 *)(puVar6 + 0x24) = 0;
          puVar6[0x28] = 0;
        }
        iVar7 = *(int *)(param_1 + 0x10);
        *(undefined1 **)(param_1 + 0xc) = puVar6;
        *(int *)(param_1 + 0x10) = iVar7 + 1;
        if (iVar7 == 0) {
          *puVar1 = puVar6;
        }
        else {
          *(undefined1 **)(iVar8 + 0x24) = puVar6;
        }
        local_8 = 0xffffffff;
      }
      piVar9 = *(int **)(param_2 + 0x20);
      iVar7 = 100000;
      while (piVar9 != (int *)0x0) {
        iVar8 = *piVar9;
        piVar9 = (int *)piVar9[2];
        if (*(int *)(iVar8 + 0x184) < iVar7) {
          iVar7 = *(int *)(iVar8 + 0x184);
        }
      }
      puVar2 = (undefined4 *)(param_1 + 0x20);
      param_2 = 0;
      local_30 = 0;
      local_18 = 0;
      param_1 = 0;
      piVar9 = (int *)*puVar2;
joined_r0x00594d59:
      do {
        if (piVar9 == (int *)0x0) goto LAB_00594e18;
        piVar12 = (int *)piVar9[2];
        iVar8 = *piVar9;
        if (iVar8 == 0) {
          piVar9 = (int *)0x0;
        }
        else {
          piVar9 = (int *)(iVar8 + 0x38);
        }
        piVar9 = (int *)*piVar9;
        if (piVar9 != (int *)0x0) {
          iVar10 = *(int *)(*(int *)(*(int *)(iVar8 + 0xd8) + 0x48) + 0x28) + 1000;
          do {
            iVar4 = *piVar9;
            iVar11 = *(int *)(*(int *)(iVar4 + 0x38) + 0x228);
            piVar9 = (int *)piVar9[2];
            uVar13 = __allmul(iVar11,iVar11 >> 0x1f,iVar10,iVar10 >> 0x1f);
            iVar11 = __alldiv(uVar13,1000,0);
            if (param_2 < iVar11) {
              param_2 = iVar11;
            }
            if (0 < iVar11) {
              local_18 = local_18 + *(int *)(iVar4 + 0x3c);
            }
            local_30 = local_30 + *(int *)(iVar4 + 0x3c);
          } while (piVar9 != (int *)0x0);
        }
        iVar10 = *(int *)(iVar8 + 0xe0);
        piVar9 = piVar12;
        if (iVar10 != 0) {
          iVar4 = *(int *)(iVar10 + 0x5c);
          iVar11 = 0;
          if (0 < (*(int *)(iVar4 + 0xcc) - *(int *)(iVar4 + 200)) / 0x24) {
            piVar12 = (int *)(*(int *)(iVar4 + 200) + 4);
            do {
              if (*(int *)(*(int *)(iVar8 + 0xdc) + 0x58) == *piVar12) {
                if (-1 < iVar11) {
                  iVar8 = *(int *)(*(int *)(iVar10 + 0x5c) + 200);
                  if (*(int *)(iVar11 * 0x24 + iVar8) == 2) {
                    param_1 = -1000;
                  }
                  else if (*(int *)(iVar11 * 0x24 + iVar8) == 1) goto LAB_00594e11;
                }
                break;
              }
              piVar12 = piVar12 + 9;
              iVar11 = iVar11 + 1;
            } while (iVar11 < (*(int *)(iVar4 + 0xcc) - *(int *)(iVar4 + 200)) / 0x24);
          }
          goto joined_r0x00594d59;
        }
        if (((*(char *)(iVar8 + 0xc0) != 'R') || (*(char *)(iVar8 + 0xc1) != 'E')) ||
           (*(char *)(iVar8 + 0xc2) != 'B')) {
LAB_00594e11:
          param_1 = -2000;
LAB_00594e18:
          if (param_1 != 0) {
            FUN_00409350("crossing",8);
            local_8._0_1_ = 0x10;
            local_8._1_3_ = 0;
            FUN_00408ed0();
            local_8._0_1_ = 0x11;
            iVar8 = *(int *)(iVar5 + 0xc);
            puVar6 = (undefined1 *)FUN_00aae9af(0x2c);
            local_8 = CONCAT31(local_8._1_3_,0x12);
            if (puVar6 == (undefined1 *)0x0) {
              puVar6 = (undefined1 *)0x0;
            }
            else {
              *(undefined4 *)(puVar6 + 0x14) = 0xf;
              *(undefined4 *)(puVar6 + 0x10) = 0;
              *puVar6 = 0;
              FUN_00408ed0();
              *(int *)(puVar6 + 0x1c) = param_1 / 1000;
              *(int *)(puVar6 + 0x20) = iVar8;
              *(undefined4 *)(puVar6 + 0x24) = 0;
              puVar6[0x28] = 0;
            }
            iVar10 = *(int *)(iVar5 + 0x10);
            *(undefined1 **)(iVar5 + 0xc) = puVar6;
            *(int *)(iVar5 + 0x10) = iVar10 + 1;
            if (iVar10 == 0) {
              *puVar1 = puVar6;
            }
            else {
              *(undefined1 **)(iVar8 + 0x24) = puVar6;
            }
            local_8 = 0xffffffff;
          }
          if ((0 < param_2) && (0 < local_30)) {
            if (local_30 == 0) {
              local_30 = -1;
            }
            else if (local_18 + 0x189373U < 0x39580e) {
              local_30 = (local_18 * 1000) / local_30;
            }
            else {
              uVar13 = __allmul(local_18,local_18 >> 0x1f,1000,0);
              local_30 = __alldiv(uVar13,local_30,local_30 >> 0x1f);
            }
            if (local_30 < *(int *)(*(int *)(DAT_012586dc + 0x20) + 0xc4)) {
              iVar8 = *(int *)(*(int *)(DAT_012586dc + 0x20) + 0xc4);
              if (iVar8 == 0) {
                iVar8 = -1;
              }
              else {
                iVar8 = (int)(1000000 / (longlong)iVar8);
              }
              iVar8 = __alldiv((longlong)iVar8 * (longlong)local_30,1000,0);
              param_2 = __alldiv((longlong)iVar8 * (longlong)param_2,1000,0);
            }
            FUN_00401000(0x447a1fff);
            iVar8 = FUN_00b31c00();
            iVar8 = ((param_2 + iVar8) / 1000) * 1000;
            uVar13 = __allmul(iVar7,iVar7 >> 0x1f,1000,0);
            iVar7 = __alldiv(uVar13,iVar8,iVar8 >> 0x1f);
            if (iVar7 < 0) {
              iVar7 = 0;
            }
          }
          if (iVar7 < 1000) {
            ExceptionList = local_10;
            return;
          }
          FUN_00409350("digin",5);
          local_8._0_1_ = 0x14;
          local_8._1_3_ = 0;
          FUN_00408ed0();
          local_8._0_1_ = 0x15;
          iVar8 = *(int *)(iVar5 + 0xc);
          puVar6 = (undefined1 *)FUN_00aae9af(0x2c);
          local_8 = CONCAT31(local_8._1_3_,0x16);
          if (puVar6 == (undefined1 *)0x0) {
            puVar6 = (undefined1 *)0x0;
          }
          else {
            *(undefined4 *)(puVar6 + 0x14) = 0xf;
            *(undefined4 *)(puVar6 + 0x10) = 0;
            *puVar6 = 0;
            FUN_00408ed0();
            *(int *)(puVar6 + 0x1c) = -(iVar7 / 1000);
            *(int *)(puVar6 + 0x20) = iVar8;
            *(undefined4 *)(puVar6 + 0x24) = 0;
            puVar6[0x28] = 0;
          }
          iVar7 = *(int *)(iVar5 + 0x10);
          *(undefined1 **)(iVar5 + 0xc) = puVar6;
          *(int *)(iVar5 + 0x10) = iVar7 + 1;
          if (iVar7 == 0) {
            *puVar1 = puVar6;
          }
          else {
            *(undefined1 **)(iVar8 + 0x24) = puVar6;
          }
          FUN_0099ee70();
          FUN_00408ad0();
          ExceptionList = local_10;
          return;
        }
      } while( true );
    }
  }
  ExceptionList = local_10;
  return;
}


