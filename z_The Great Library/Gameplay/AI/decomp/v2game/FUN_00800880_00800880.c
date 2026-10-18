// FUN_00800880 @ 00800880 body=[[00800880, 00800a5c] [00800a60, 00800ca9] [00800cad, 00800d5b]]


/* WARNING: Removing unreachable block (ram,0x00800c58) */
/* WARNING: Removing unreachable block (ram,0x00800c60) */
/* WARNING: Removing unreachable block (ram,0x00800cc4) */
/* WARNING: Removing unreachable block (ram,0x00800c64) */
/* WARNING: Removing unreachable block (ram,0x00800b5f) */
/* WARNING: Removing unreachable block (ram,0x00800b63) */
/* WARNING: Removing unreachable block (ram,0x00800b72) */
/* WARNING: Removing unreachable block (ram,0x00800b7c) */
/* WARNING: Removing unreachable block (ram,0x00800b7e) */
/* WARNING: Removing unreachable block (ram,0x00800b82) */
/* WARNING: Removing unreachable block (ram,0x00800b87) */
/* WARNING: Removing unreachable block (ram,0x00800b68) */
/* WARNING: Removing unreachable block (ram,0x00800b70) */
/* WARNING: Removing unreachable block (ram,0x00800ca4) */

void FUN_00800880(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iStack_cc;
  int local_c0;
  undefined1 auStack_34 [32];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b3c80b;
  local_14 = ExceptionList;
  iVar7 = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c) >> 2;
  if (iVar7 != 0) {
    local_c0 = 0;
    ExceptionList = &local_14;
    iVar4 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x124))();
    if (*(char *)(*(int *)(iVar4 + 0x20) + 0x67) != '\0') {
      iVar4 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x124))();
      if (*(int *)(iVar4 + 0x24) != 0) {
        local_c0 = *(int *)(*(int *)(iVar4 + 0x24) + 0x134);
      }
    }
    uStack_c = 0;
    if (local_c0 == 0) {
      iVar4 = *(int *)(param_1 + 0x40);
      FUN_00804870(*(int *)(iVar4 + 0x2a7c) - *(int *)(iVar4 + 0x2a78) >> 2);
      for (uVar6 = *(uint *)(iVar4 + 0x2a78);
          (*(uint *)(iVar4 + 0x2a78) <= uVar6 && (uVar6 < *(uint *)(iVar4 + 0x2a7c)));
          uVar6 = uVar6 + 4) {
        FUN_00804be0();
      }
      iVar4 = 1;
      if (1 < iVar7) {
        do {
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar7);
      }
    }
    else {
      FUN_00804870(*(int *)(DAT_012588e8 + 0xae0) - *(int *)(DAT_012588e8 + 0xadc) >> 2);
      iVar4 = DAT_012588e8;
      for (uVar6 = *(uint *)(DAT_012588e8 + 0xadc);
          (*(uint *)(iVar4 + 0xadc) <= uVar6 && (uVar6 < *(uint *)(iVar4 + 0xae0)));
          uVar6 = uVar6 + 4) {
        FUN_00804be0();
      }
      iVar4 = 1;
      if (1 < iVar7) {
        do {
          iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar4 * 4) + 0xc);
          iVar3 = *(int *)(iVar2 + 0x134);
          uVar6 = *(uint *)(iVar2 + 0x1a8);
          puVar1 = (uint *)(iVar3 * 0x14);
          if (*(uint *)(iVar3 * 0x14) < uVar6) {
            *puVar1 = uVar6;
          }
          if ((uVar6 != 0) && (uVar6 < puVar1[1])) {
            puVar1[1] = uVar6;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar7);
      }
    }
    iStack_cc = 1;
    if (1 < iVar7) {
      do {
        if ((((local_c0 != 0) &&
             (iVar4 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x1c) + iStack_cc * 4) + 0xc) +
                              0x134), -1 < iVar4)) && (iVar4 < 0)) &&
           ((iVar4 == local_c0 && (iVar4 * 0x14 != 0)))) {
          FUN_009b7270(auStack_34);
        }
        uVar5 = FUN_009b6df0();
        **(undefined4 **)(*(int *)(param_1 + 0x1c) + iStack_cc * 4) = uVar5;
        iVar4 = iStack_cc * 4;
        iStack_cc = iStack_cc + 1;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar4) + 4) = uVar5;
      } while (iStack_cc < iVar7);
    }
  }
  ExceptionList = local_14;
  return;
}

