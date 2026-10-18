// FUN_0048f260 @ 0048f260 body=[[0048f260, 0048f37a] [0048f38a, 0048f3ca] [0048f3d4, 0048f3e5]]


void FUN_0048f260(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  void **ppvVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  bool bVar9;
  int local_3c;
  int *local_28;
  int *local_24;
  int local_20;
  undefined1 local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_00b3fed8;
  local_14 = ExceptionList;
  local_28 = (int *)0x0;
  local_24 = (int *)0x0;
  local_20 = 0;
  local_1c = 0;
  local_c = 0;
  local_3c = 0;
  piVar8 = DAT_012587e4;
  ExceptionList = &local_14;
  ppvVar5 = &local_14;
  if (0 < *DAT_012587e4) {
    do {
      iVar1 = *(int *)(*(int *)(piVar8[1] + local_3c * 4) + 0x20);
      piVar2 = *(int **)(*(int *)(piVar8[1] + iVar1 * 4) + 0xa08);
      while (piVar2 != (int *)0x0) {
        iVar7 = *piVar2;
        piVar2 = (int *)piVar2[2];
        *(undefined4 *)(iVar7 + 0x3c) = 0;
      }
      piVar2 = *(int **)(*(int *)(piVar8[1] + iVar1 * 4) + 0xa18);
      piVar6 = local_28;
joined_r0x0048f2ef:
      piVar4 = local_24;
      local_28 = piVar6;
      local_24 = piVar4;
      if (piVar2 != (int *)0x0) {
        iVar7 = *piVar2;
        piVar2 = (int *)piVar2[2];
        for (piVar3 = local_28; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[2]) {
          piVar8 = DAT_012587e4;
          piVar6 = local_28;
          if (*piVar3 == iVar7) goto joined_r0x0048f2ef;
        }
        piVar6 = (int *)FUN_00aae9af(0x10);
        if (piVar6 == (int *)0x0) {
          piVar6 = (int *)0x0;
        }
        else {
          *piVar6 = iVar7;
          piVar6[1] = (int)local_24;
          piVar6[2] = 0;
          *(undefined1 *)(piVar6 + 3) = 0;
        }
        iVar7 = local_20 + 1;
        bVar9 = local_20 != 0;
        piVar8 = DAT_012587e4;
        local_24 = piVar6;
        local_20 = iVar7;
        if (bVar9) {
          piVar4[2] = (int)piVar6;
          piVar8 = DAT_012587e4;
          piVar6 = local_28;
        }
        goto joined_r0x0048f2ef;
      }
      iVar1 = *(int *)(piVar8[1] + iVar1 * 4);
      if (*(int *)(iVar1 + 0xa18) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(*(int *)(iVar1 + 0xa18));
      }
      local_3c = local_3c + 1;
      *(undefined4 *)(iVar1 + 0xa18) = 0;
      *(undefined4 *)(iVar1 + 0xa1c) = 0;
      *(undefined4 *)(iVar1 + 0xa20) = 0;
      ppvVar5 = ExceptionList;
    } while (local_3c < *piVar8);
  }
  ExceptionList = ppvVar5;
  FUN_00490050(&local_28);
  if (local_28 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_28);
  }
  ExceptionList = local_14;
  return;
}

