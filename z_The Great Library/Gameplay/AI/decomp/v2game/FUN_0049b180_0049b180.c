// FUN_0049b180 @ 0049b180 body=[[0049b180, 0049b209] [0049b210, 0049b268] [0049b270, 0049b31c] [0049b5bc, 0049b65e] [0049b662, 0049b705] [0049b709, 0049b711] [0049b715, 0049b727]]


void FUN_0049b180(int param_1)

{
  longlong lVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  undefined1 auStack_1d4 [16];
  undefined4 uStack_1c4;
  char *pcStack_1c0;
  int *piStack_1bc;
  undefined **local_b0 [5];
  undefined4 local_9c;
  uint local_88;
  int local_80;
  undefined4 local_6c;
  undefined1 *local_64;
  int local_4c;
  int local_48;
  int local_44;
  uint local_40 [3];
  int local_34;
  int *local_30;
  uint local_2c;
  undefined1 local_28;
  int local_24;
  undefined1 local_1a;
  undefined1 local_19;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar2 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b6006c;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffe48;
  iVar5 = *(int *)(param_1 + 0x2ab0);
  uVar8 = ((iVar5 + -1) * iVar5) / 2 + iVar5;
  piStack_1bc = (int *)(-(uint)((int)((ulonglong)uVar8 * 2 >> 0x20) != 0) |
                       (uint)((ulonglong)uVar8 * 2));
  pcStack_1c0 = (char *)0x49b1d4;
  ExceptionList = &local_10;
  uVar4 = FUN_00aad56b();
  *(undefined4 *)(iVar2 + 0x2ab4) = uVar4;
  pcStack_1c0 = (char *)0x49b1e3;
  piStack_1bc = (int *)uVar8;
  uVar4 = FUN_00aad56b();
  *(undefined4 *)(iVar2 + 0x2ab8) = uVar4;
  if (*(char *)(iVar2 + 0x28) == '\0') {
    piStack_1bc = (int *)iVar2;
    pcStack_1c0 = (char *)0x49b1f8;
    cVar3 = FUN_0049ae80();
    if (cVar3 != '\0') {
      ExceptionList = local_10;
      return;
    }
  }
  iVar5 = 0;
  if (0 < (int)uVar8) {
    do {
      *(undefined2 *)(*(int *)(iVar2 + 0x2ab4) + iVar5 * 2) = 0;
      *(undefined1 *)(iVar5 + *(int *)(iVar2 + 0x2ab8)) = 0;
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)uVar8);
  }
  lVar1 = (ulonglong)*(uint *)(iVar2 + 0x2ab0) * 4;
  piStack_1bc = (int *)(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1);
  pcStack_1c0 = (char *)0x49b246;
  local_24 = FUN_00aad56b();
  local_4c = 0;
  if (0 < *(int *)(iVar2 + 0x2aa8)) {
    do {
      iVar5 = *(int *)(*(int *)(iVar2 + 0x2aa4) + local_4c * 4);
      local_48 = *(int *)(iVar5 + 0xe0);
      if (-1 < local_48) {
        iVar6 = 0;
        if (0 < *(int *)(iVar2 + 0x2ab0)) {
          do {
            *(undefined4 *)(local_24 + iVar6 * 4) = 0x4b18967f;
            iVar6 = iVar6 + 1;
          } while (iVar6 < *(int *)(iVar2 + 0x2ab0));
        }
        *(undefined4 *)(local_24 + local_48 * 4) = 0;
        local_34 = 0;
        local_30 = (int *)0x0;
        local_2c = 0;
        local_28 = 0;
        local_8 = 0;
        piStack_1bc = (int *)0x14;
        local_6c = (uint)local_6c._2_2_ << 0x10;
        pcStack_1c0 = (char *)0x49b2c7;
        piStack_1bc = (int *)FUN_00aae9af();
        if (piStack_1bc == (int *)0x0) {
          piStack_1bc = (int *)0x0;
        }
        else {
          *piStack_1bc = iVar5;
          piStack_1bc[1] = local_6c;
          piStack_1bc[2] = 0;
          piStack_1bc[3] = 0;
          *(undefined1 *)(piStack_1bc + 4) = 0;
        }
        local_1a = (undefined1)piStack_1bc[1];
        local_19 = *(undefined1 *)((int)piStack_1bc + 5);
        local_44 = *piStack_1bc;
        local_34 = piStack_1bc[3];
        if (local_34 == 0) {
          local_30 = (int *)0x0;
        }
        else {
          *(undefined4 *)(local_34 + 8) = 0;
          local_30 = piStack_1bc;
        }
                    /* WARNING: Subroutine does not return */
        pcStack_1c0 = &UNK_0049b31d;
        FUN_00aae91b();
      }
      local_4c = local_4c + 1;
    } while (local_4c < *(int *)(iVar2 + 0x2aa8));
  }
  local_8 = 1;
  pcStack_1c0 = DAT_00f0af10;
  if (DAT_00f0af24 < 0x10) {
    pcStack_1c0 = (char *)&DAT_00f0af10;
  }
  local_2c = 0xf;
  local_30 = (int *)0x0;
  local_40[0] = local_40[0] & 0xffffff00;
  pcVar7 = pcStack_1c0;
  do {
    cVar3 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar3 != '\0');
  piStack_1bc = (int *)((int)pcVar7 - (int)(pcStack_1c0 + 1));
  uStack_1c4 = 0x49b613;
  FUN_00409350();
  local_64 = auStack_1d4;
  local_8._0_1_ = 2;
  pcStack_1c0 = (char *)0xf;
  uStack_1c4 = 0;
  auStack_1d4[0] = 0;
  FUN_00409350(&DAT_00ded94d,0);
  FUN_00992740(local_b0,local_40,1);
  local_8 = CONCAT31(local_8._1_3_,4);
  if (local_2c < 0x10) {
    local_2c = 0xf;
    local_30 = (int *)0x0;
    local_40[0] = local_40[0] & 0xffffff00;
    piStack_1bc = (int *)0x49b677;
    FUN_00993a80();
    piStack_1bc = (int *)0x1;
    pcStack_1c0 = (char *)((int)&param_1 + 3);
    param_1 = CONCAT13(3,(undefined3)param_1);
    uStack_1c4 = 0x49b68c;
    FUN_00993720();
    iVar5 = *(int *)(iVar2 + 0x2ab0);
    pcStack_1c0 = *(char **)(iVar2 + 0x2ab4);
    iVar5 = ((iVar5 + -1) * iVar5) / 2 + iVar5;
    piStack_1bc = (int *)(iVar5 * 2);
    uStack_1c4 = 0x49b6b7;
    FUN_00993720();
    pcStack_1c0 = *(char **)(iVar2 + 0x2ab8);
    uStack_1c4 = 0x49b6ca;
    piStack_1bc = (int *)iVar5;
    FUN_00993720();
    local_b0[0] = &PTR_FUN_00e37dc0;
    if (local_80 != 0) {
      piStack_1bc = (int *)local_80;
      pcStack_1c0 = (char *)0x49b6e1;
      PHYSFS_close();
      local_80 = 0;
    }
    local_b0[0] = &PTR_FUN_00e3b540;
    if (local_88 < 0x10) {
      piStack_1bc = (int *)local_24;
                    /* WARNING: Subroutine does not return */
      pcStack_1c0 = &UNK_0049b712;
      FUN_00aae91b();
    }
    piStack_1bc = (int *)local_9c;
                    /* WARNING: Subroutine does not return */
    pcStack_1c0 = &UNK_0049b706;
    FUN_00aae91b();
  }
  piStack_1bc = (int *)local_40[0];
                    /* WARNING: Subroutine does not return */
  pcStack_1c0 = &UNK_0049b65f;
  FUN_00aae91b();
}

