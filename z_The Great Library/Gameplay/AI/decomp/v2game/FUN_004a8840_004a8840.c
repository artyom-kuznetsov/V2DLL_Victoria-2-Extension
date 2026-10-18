// FUN_004a8840 @ 004a8840 body=[[004a8840, 004a891f] [004a8923, 004a8944] [004a8948, 004a899c] [004a89a0, 004a8a0b] [004a8a16, 004a8a67] [004a8a6b, 004a8a91] [004a8a95, 004a8aba] [004a8abe, 004a8ae8] [004a8af2, 004a8b3f] [004a8b43, 004a8b89] [004a8b8d, 004a8bc8] [004a8bd2, 004a8bf3] [004a8bf7, 004a8c18] [004a8c1c, 004a8c3d] [004a8c41, 004a8c68] [004a8c72, 004a8c98] [004a8ca2, 004a8cc8] [004a8cd2, 004a8cf8] [004a8d02, 004a8d28] [004a8d32, 004a8d53] [004a8d57, 004a8d7b] [004a8d85, 004a8dde] [004a8deb, 004a8e00] [004a8e04, 004a8e4a]]


void FUN_004a8840(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00ba9d08;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = CProvince::vftable;
  param_1[2] = CProvince::vftable;
  local_8 = 0x16;
  if ((undefined4 *)param_1[0x56] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x56])(1);
  }
  FUN_008601b0(param_1 + 0x2e);
  iVar3 = 0;
  if (0 < (int)(param_1[0x47] - param_1[0x46] & 0xfffffffc)) {
    do {
      puVar5 = *(undefined4 **)(param_1[0x46] + iVar3 * 4);
      if (puVar5 != (undefined4 *)0x0) {
        (**(code **)*puVar5)(1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)(param_1[0x47] - param_1[0x46]) >> 2);
  }
  piVar4 = (int *)param_1[0xe1];
  iVar3 = param_1[0xe2] - (int)piVar4 >> 2;
  if (iVar3 != 0) {
    local_14 = piVar4 + iVar3;
    for (; piVar4 != local_14; piVar4 = piVar4 + 1) {
      if ((undefined4 *)*piVar4 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar4)(1);
      }
    }
  }
  if (param_1[0xe1] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0xe1]);
  }
  param_1[0xe1] = 0;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  if (param_1[0xdd] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0xdd]);
  }
  param_1[0xdd] = 0;
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  local_8 = CONCAT31(local_8._1_3_,0x13);
  param_1[0xd7] = CUniqueUnitName::vftable;
  puVar5 = (undefined4 *)param_1[0xd9];
  if (puVar5 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)param_1[0xda];
    for (; puVar5 != puVar1; puVar5 = puVar5 + 7) {
      (**(code **)*puVar5)(0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0xd9]);
  }
  param_1[0xd9] = 0;
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  param_1[0xca] = CFlags::vftable;
  param_1[0xd3] = CFlags::vftable;
  local_8._0_1_ = 0x17;
  local_14 = (int *)((uint)local_14 & 0xffffff00);
  if (param_1[0xcb] != 0) {
    FUN_0043c6a0(param_1[0xcb],local_14);
  }
  (**(code **)(param_1[0xca] + 0x1c))(param_1[0xcb]);
  param_1[0xcb] = 0;
  if (param_1[0xcf] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0xcf]);
  }
  param_1[0xcf] = 0;
  param_1[0xd0] = 0;
  param_1[0xd1] = 0;
  param_1[0xcd] = 0;
  local_8._0_1_ = 0x12;
  FUN_0043c580();
  local_8 = CONCAT31(local_8._1_3_,0x11);
  puVar5 = (undefined4 *)param_1[0xc3];
  if (puVar5 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)param_1[0xc4];
    for (; puVar5 != puVar1; puVar5 = puVar5 + 0x9e) {
      (**(code **)*puVar5)(0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0xc3]);
  }
  param_1[0xc3] = 0;
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  if (0xf < (uint)param_1[0xc0]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0xbb]);
  }
  param_1[0xc0] = 0xf;
  param_1[0xbf] = 0;
  *(undefined1 *)(param_1 + 0xbb) = 0;
  if (param_1[0xb5] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0xb5]);
  }
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  param_1[0xb7] = 0;
  if (param_1[0xb1] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0xb1]);
  }
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  local_8._0_1_ = 0xf;
  puVar5 = (undefined4 *)param_1[0xaa];
  if (puVar5 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)param_1[0xab];
    for (; puVar5 != puVar1; puVar5 = puVar5 + 0x88) {
      (**(code **)*puVar5)(0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0xaa]);
  }
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  FUN_0096b900();
  local_8._0_1_ = 0xd;
  if (param_1[0x65] != 0) {
    FUN_004bf6f0(param_1[0x66],param_1);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x65]);
  }
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  if (param_1[0x5d] != 0) {
    FUN_00aaea59(param_1[0x5d]);
  }
  if (param_1[0x57] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x57]);
  }
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  if (param_1[0x52] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x52]);
  }
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  if (param_1[0x4e] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x4e]);
  }
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  if (param_1[0x46] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x46]);
  }
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  if (param_1[0x3f] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x3f]);
  }
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  if (param_1[0x3b] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x3b]);
  }
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  if (param_1[0x36] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x36]);
  }
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  if (param_1[0x32] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x32]);
  }
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  if (param_1[0x2e] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x2e]);
  }
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  if (param_1[0x27] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x27]);
  }
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  if (param_1[0x23] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x23]);
  }
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x18] = CHistoryContainer::vftable;
  local_8 = CONCAT31(local_8._1_3_,0x18);
  piVar4 = (int *)param_1[0x1b];
  while (piVar4 != (int *)0x0) {
    piVar2 = (int *)piVar4[2];
    puVar5 = (undefined4 *)*piVar4;
    piVar4 = piVar2;
    if (puVar5 != (undefined4 *)0x0) {
      (**(code **)*puVar5)(1);
    }
  }
  if (param_1[0x1b] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x1b]);
  }
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  iVar3 = DAT_012588e8;
  if (param_1[5] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[5]);
  }
  local_8 = 0xffffffff;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[2] = CSelectable::vftable;
  if (*(char *)(param_1 + 3) != '\0') {
    (**(code **)(**(int **)(iVar3 + 0xb24) + 0xa4))(1);
  }
  ExceptionList = local_10;
  return;
}

