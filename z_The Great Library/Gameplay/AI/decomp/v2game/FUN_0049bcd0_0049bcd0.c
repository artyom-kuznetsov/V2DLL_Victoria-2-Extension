// FUN_0049bcd0 @ 0049bcd0 body=[[0049bcd0, 0049bd4c] [0049bd50, 0049bdea] [0049bdee, 0049bf18] [0049bf1c, 0049bf42] [0049bf46, 0049bf5c]]


void FUN_0049bcd0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 local_dc [12];
  undefined4 uStack_d0;
  int local_cc;
  char ***local_c8;
  char ***pppcStack_c4;
  int local_b0;
  undefined1 *local_ac;
  uint local_a8;
  undefined4 local_98;
  uint local_94;
  uint local_8c [4];
  undefined4 local_7c;
  uint local_78;
  undefined **local_70 [5];
  uint local_5c;
  undefined4 local_4c;
  uint local_48;
  int local_40;
  char ***local_34 [5];
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b5b3f6;
  local_14 = ExceptionList;
  pppcStack_c4 = (char ***)0x15;
  local_c8 = (char ***)0xdfc538;
  local_94 = 0xf;
  local_98 = 0;
  local_a8 = local_a8 & 0xffffff00;
  local_cc = 0x49bd18;
  ExceptionList = &local_14;
  FUN_00409350();
  pppcStack_c4 = (char ***)local_34;
  local_c = 0;
  local_c8 = (char ***)0x49bd30;
  FUN_00496b60();
  local_c._0_1_ = 2;
  if (0xf < local_94) {
    pppcStack_c4 = (char ***)local_a8;
                    /* WARNING: Subroutine does not return */
    local_c8 = (char ***)&UNK_0049bd4d;
    FUN_00aae91b();
  }
  local_94 = 0xf;
  local_98 = 0;
  local_a8 = local_a8 & 0xffffff00;
  local_c8 = local_34[0];
  if (local_20 < 0x10) {
    local_c8 = (char ***)local_34;
  }
  local_78 = 0xf;
  local_7c = 0;
  local_8c[0] = local_8c[0] & 0xffffff00;
  pppcStack_c4 = local_c8;
  do {
    cVar1 = *(char *)pppcStack_c4;
    pppcStack_c4 = (char ***)((int)pppcStack_c4 + 1);
  } while (cVar1 != '\0');
  pppcStack_c4 = (char ***)((int)pppcStack_c4 - (int)((int)local_c8 + 1));
  local_cc = 0x49bd9a;
  FUN_00409350();
  local_ac = local_dc;
  local_c._0_1_ = 3;
  local_c8 = (char ***)0xf;
  local_cc = 0;
  local_dc[0] = 0;
  FUN_00409350(&DAT_00ded94d,0);
  FUN_00992740(local_70,local_8c,1);
  local_c = CONCAT31(local_c._1_3_,5);
  if (local_78 < 0x10) {
    pppcStack_c4 = (char ***)0x0;
    local_c8 = (char ***)0x100000;
    local_cc = local_40;
    local_78 = 0xf;
    local_7c = 0;
    local_8c[0] = local_8c[0] & 0xffffff00;
    uStack_d0 = 0x49be0e;
    PHYSFS_setBuffer();
    local_b0 = 0;
    if (0 < *(int *)(param_1 + 0x2aa8)) {
      do {
        iVar4 = 0;
        iVar2 = *(int *)(*(int *)(param_1 + 0x2aa4) + local_b0 * 4);
        local_ac = (undefined1 *)((*(int *)(iVar2 + 0xcc) - *(int *)(iVar2 + 200)) / 0x24);
        pppcStack_c4 = (char ***)0x4;
        local_c8 = (char ***)&local_ac;
        local_cc = 0x49be63;
        FUN_00993720();
        if (0 < (*(int *)(iVar2 + 0xcc) - *(int *)(iVar2 + 200)) / 0x24) {
          iVar3 = 0;
          do {
            local_c8 = (char ***)(*(int *)(iVar2 + 200) + iVar3);
            pppcStack_c4 = (char ***)0x24;
            local_cc = 0x49be9a;
            FUN_00993720();
            iVar4 = iVar4 + 1;
            iVar3 = iVar3 + 0x24;
          } while (iVar4 < (*(int *)(iVar2 + 0xcc) - *(int *)(iVar2 + 200)) / 0x24);
        }
        local_b0 = local_b0 + 1;
      } while (local_b0 < *(int *)(param_1 + 0x2aa8));
    }
    local_70[0] = &PTR_FUN_00e37dc0;
    if (local_40 != 0) {
      pppcStack_c4 = (char ***)local_40;
      local_c8 = (char ***)0x49bef2;
      PHYSFS_close();
      local_40 = 0;
    }
    local_70[0] = &PTR_FUN_00e3b540;
    if (local_48 < 0x10) {
      local_48 = 0xf;
      local_4c = 0;
      local_5c = local_5c & 0xffffff00;
      if (local_20 < 0x10) {
        ExceptionList = local_14;
        return;
      }
      pppcStack_c4 = local_34[0];
                    /* WARNING: Subroutine does not return */
      local_c8 = (char ***)&UNK_0049bf43;
      FUN_00aae91b();
    }
    pppcStack_c4 = (char ***)local_5c;
                    /* WARNING: Subroutine does not return */
    local_c8 = (char ***)&UNK_0049bf19;
    FUN_00aae91b();
  }
  pppcStack_c4 = (char ***)local_8c[0];
                    /* WARNING: Subroutine does not return */
  local_c8 = (char ***)&UNK_0049bdeb;
  FUN_00aae91b();
}

