// FUN_008014d0 @ 008014d0 body=[[008014d0, 008015d4] [008015e0, 008019ae]]


/* WARNING: Type propagation algorithm not settling */

void FUN_008014d0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int local_20;
  undefined4 local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b6a89b;
  local_10 = ExceptionList;
  iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4);
  iVar12 = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c) >> 2;
  ExceptionList = &local_10;
  if (DAT_0125ce80 == 0) {
    ExceptionList = &local_10;
    iVar6 = FUN_00aae9af(0x3c);
    local_8 = 0;
    if (iVar6 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = FUN_004dada0();
    }
    local_8 = 0xffffffff;
    FUN_004dc340(uVar7);
  }
  piVar2 = *(int **)(DAT_0125ce80 + 0x1c);
  iVar6 = *(int *)(DAT_0125ce80 + 0x20) - (int)piVar2 >> 2;
  iVar9 = 0;
  piVar10 = piVar2;
  if (0 < iVar6) {
    while (*(int *)(*piVar10 + 0x10) != 2) {
      iVar9 = iVar9 + 1;
      piVar10 = piVar10 + 1;
      if (iVar6 <= iVar9) {
        ExceptionList = local_10;
        return;
      }
    }
    iVar6 = piVar2[iVar9];
    if (iVar6 != 0) {
      iVar9 = *(int *)(*(int *)(*(int *)(iVar1 + 0xbcc) + 8) + *(int *)(iVar6 + 0x58) * 4);
      local_20 = 1;
      if (1 < iVar12) {
LAB_008015e3:
        iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x1c) + local_20 * 4) + 0xc);
        iVar11 = iVar9 - (uint)*(byte *)(*(int *)(*(int *)(*(int *)(iVar3 + 0x5c) + 0x14) + 0x34) +
                                        *(int *)(iVar6 + 0x58));
        if (iVar11 < 0) {
          iVar11 = 0;
        }
        local_1c = FUN_009b6df0();
        uVar7 = FUN_009b6df0();
        cVar5 = FUN_00511ef0(iVar1,iVar3,0,0,1,1,0);
        if (cVar5 != '\0') {
          if (*(char *)(iVar6 + 0x131) == '\0') {
            iVar8 = 0;
          }
          else {
            iVar8 = *(int *)(*(int *)(iVar3 + 0x118) + *(int *)(iVar6 + 0x134) * 4);
          }
          if (iVar11 <= *(int *)(iVar8 + 0x20) / 1000) {
            uVar7 = FUN_009b6df0();
            local_1c = uVar7;
            goto LAB_00801897;
          }
          local_1c = FUN_009b6df0();
          piVar2 = *(int **)(iVar3 + 0xd8);
          do {
            if (piVar2 == (int *)0x0) {
              puVar4 = *(undefined4 **)(iVar3 + 0xd8);
              goto joined_r0x00801875;
            }
            piVar10 = (int *)*piVar2;
            piVar2 = (int *)piVar2[2];
            cVar5 = (**(code **)(*piVar10 + 0x30))();
          } while ((cVar5 == '\0') || (piVar10[0x16] != iVar6));
          goto LAB_008018e3;
        }
        goto LAB_00801897;
      }
    }
  }
  ExceptionList = local_10;
  return;
  while( true ) {
    piVar2 = (int *)*puVar4;
    puVar4 = (undefined4 *)puVar4[2];
    cVar5 = (**(code **)(*piVar2 + 0x34))();
    if (cVar5 == '\0') break;
joined_r0x00801875:
    uVar7 = local_1c;
    if (puVar4 == (undefined4 *)0x0) goto LAB_00801897;
  }
LAB_008018e3:
  uVar7 = FUN_009b6df0();
LAB_00801897:
  **(undefined4 **)(*(int *)(param_1 + 0x1c) + local_20 * 4) = local_1c;
  iVar3 = local_20 * 4;
  local_20 = local_20 + 1;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar3) + 4) = uVar7;
  if (iVar12 <= local_20) {
    ExceptionList = local_10;
    return;
  }
  goto LAB_008015e3;
}

