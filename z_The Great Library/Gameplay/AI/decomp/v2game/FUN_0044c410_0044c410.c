// FUN_0044c410 @ 0044c410 body=[[0044c410, 0044c50b] [0044c50f, 0044c54f] [0044c553, 0044c6cd] [0044c6d1, 0044c72c] [0044c730, 0044c779] [0044c77d, 0044c7af]]


undefined1 * FUN_0044c410(undefined1 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  undefined2 *local_78;
  uint *local_74;
  uint local_60 [5];
  uint local_4c;
  uint local_44 [4];
  undefined4 local_34;
  uint local_30;
  undefined1 *local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00b77559;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  local_8 = 0;
  local_18 = 0;
  local_14 = 0;
  local_1c = 1;
  if (0 < (int)(DAT_0125a5b8 - DAT_0125a5b4 & 0xfffffffcU)) {
    local_74 = (uint *)0x3f000000;
    local_78 = (undefined2 *)0x44c497;
    local_24 = in_ECX;
    FUN_00401000();
    local_74 = (uint *)0x44c49f;
    local_20 = FUN_00b31c00();
    do {
      iVar1 = local_14 * 8;
      if (*(int *)(*(int *)(in_ECX + 0x18) + iVar1) != local_20) {
        if (*(int *)(param_1 + 0x10) != local_18) {
          local_74 = (uint *)0x1;
          local_78 = &DAT_00dee2cc;
          local_30 = 0xf;
          local_34 = 0;
          local_44[0] = local_44[0] & 0xffffff00;
          FUN_00409350();
          local_74 = (uint *)0xffffffff;
          local_78 = (undefined2 *)0x0;
          local_8 = 1;
          FUN_00448aa0(local_44);
          local_8 = local_8 & 0xffffff00;
          if (0xf < local_30) {
            local_74 = (uint *)local_44[0];
                    /* WARNING: Subroutine does not return */
            local_78 = (undefined2 *)&UNK_0044c50c;
            FUN_00aae91b();
          }
        }
        local_18 = *(int *)(param_1 + 0x10);
        local_78 = *(undefined2 **)(DAT_0125a5b4 + local_14 * 4);
        local_74 = local_44;
        uVar2 = FUN_0044bb00();
        local_74 = (uint *)0xffffffff;
        local_78 = (undefined2 *)0x0;
        local_8 = 2;
        FUN_00448aa0(uVar2);
        local_8 = local_8 & 0xffffff00;
        if (0xf < local_30) {
          local_74 = (uint *)local_44[0];
                    /* WARNING: Subroutine does not return */
          local_78 = (undefined2 *)&UNK_0044c550;
          FUN_00aae91b();
        }
        local_74 = (uint *)0x2;
        local_78 = (undefined2 *)&DAT_00df9638;
        FUN_00448740();
        local_74 = (uint *)0x2;
        if (*(char *)(*(int *)(DAT_0125a5b4 + local_14 * 4) + 0x29) == '\0') {
          iVar3 = *(int *)(iVar1 + *(int *)(in_ECX + 0x18));
          if (iVar3 < 1) {
            if (iVar3 < 0) {
              local_78 = (undefined2 *)&DAT_00df8518;
            }
            else {
              local_78 = (undefined2 *)&DAT_00df963c;
            }
          }
          else {
            local_78 = (undefined2 *)&DAT_00df8510;
          }
        }
        else {
          iVar3 = *(int *)(*(int *)(in_ECX + 0x18) + iVar1);
          if (iVar3 < 1) {
            if (iVar3 < 0) {
              local_78 = (undefined2 *)&DAT_00df8510;
            }
            else {
              local_78 = (undefined2 *)&DAT_00df963c;
            }
          }
          else {
            local_78 = (undefined2 *)&DAT_00df8518;
          }
        }
        FUN_00448740();
        if (0 < *(int *)(*(int *)(in_ECX + 0x18) + iVar1)) {
          local_74 = (uint *)0x1;
          local_78 = (undefined2 *)&DAT_00df9640;
          FUN_00448740();
        }
        local_78 = *(undefined2 **)(DAT_0125a5b4 + local_14 * 4);
        if (*(char *)(local_78 + 0x14) == '\0') {
          local_78 = *(undefined2 **)(*(int *)(in_ECX + 0x18) + iVar1);
          local_74 = (uint *)((local_14 == 0x4a) + 2);
          local_28 = (undefined1 *)&local_78;
          uVar2 = FUN_00988a50(local_60);
          local_74 = (uint *)0xffffffff;
          local_78 = (undefined2 *)0x0;
          local_8 = 5;
          FUN_00448aa0(uVar2);
          local_8 = local_8 & 0xffffff00;
          if (0xf < local_4c) {
            local_74 = (uint *)local_60[0];
                    /* WARNING: Subroutine does not return */
            local_78 = (undefined2 *)&UNK_0044c72d;
            FUN_00aae91b();
          }
        }
        else {
          if (local_14 == 0x32) {
            iVar1 = *(int *)(*(int *)(in_ECX + 0x18) + 400);
            local_74 = (uint *)0x2;
            local_28 = (undefined1 *)&local_78;
            FUN_00401000(0x461c4200);
            iVar3 = FUN_00b31c00();
            local_78 = (undefined2 *)__alldiv((longlong)iVar3 * (longlong)iVar1,1000,0);
            uVar2 = FUN_00988a50(local_60);
            local_74 = (uint *)0xffffffff;
            local_78 = (undefined2 *)0x0;
            local_8 = 3;
            FUN_00448aa0(uVar2);
            local_8 = local_8 & 0xffffff00;
            if (0xf < local_4c) {
              local_74 = (uint *)local_60[0];
              goto LAB_0044c6c9;
            }
          }
          else {
            iVar1 = *(int *)(*(int *)(in_ECX + 0x18) + iVar1);
            local_74 = (uint *)0x1;
            local_28 = (undefined1 *)&local_78;
            FUN_00401000(0x47c35040);
            iVar3 = FUN_00b31c00();
            local_78 = (undefined2 *)__alldiv((longlong)iVar3 * (longlong)iVar1,1000,0);
            uVar2 = FUN_00988a50(local_44);
            local_74 = (uint *)0xffffffff;
            local_78 = (undefined2 *)0x0;
            local_8 = 4;
            FUN_00448aa0(uVar2);
            local_8 = local_8 & 0xffffff00;
            if (0xf < local_30) {
              local_74 = (uint *)local_44[0];
LAB_0044c6c9:
                    /* WARNING: Subroutine does not return */
              local_78 = (undefined2 *)&UNK_0044c6ce;
              FUN_00aae91b();
            }
          }
          local_74 = (uint *)0x1;
          local_78 = (undefined2 *)&DAT_00df9644;
          FUN_00448740();
          in_ECX = local_24;
        }
        local_74 = (uint *)0x2;
        local_78 = (undefined2 *)&DAT_00df8514;
        local_30 = 0xf;
        local_34 = 0;
        local_44[0] = local_44[0] & 0xffffff00;
        FUN_00409350();
        local_74 = (uint *)0xffffffff;
        local_78 = (undefined2 *)0x0;
        local_8 = 6;
        FUN_00448aa0(local_44);
        local_8 = local_8 & 0xffffff00;
        if (0xf < local_30) {
          local_74 = (uint *)local_44[0];
                    /* WARNING: Subroutine does not return */
          local_78 = (undefined2 *)&UNK_0044c77a;
          FUN_00aae91b();
        }
      }
      local_14 = local_14 + 1;
    } while (local_14 < DAT_0125a5b8 - DAT_0125a5b4 >> 2);
  }
  ExceptionList = local_10;
  return param_1;
}

