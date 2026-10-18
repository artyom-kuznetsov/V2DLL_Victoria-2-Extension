// FUN_005c3790 @ 005c3790 body=[[005c3790, 005c388b] [005c388f, 005c38cf] [005c38d3, 005c39db] [005c39df, 005c3a2d] [005c3a31, 005c3a7a] [005c3a7e, 005c3ab0]]


undefined1 * FUN_005c3790(undefined1 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  undefined2 *local_58;
  uint *local_54;
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
  
  puStack_c = &LAB_00b7fac1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  local_8 = 0;
  local_18 = 0;
  local_14 = 0;
  local_1c = 1;
  if (0 < (int)(DAT_0125fe14 - DAT_0125fe10 & 0xfffffffcU)) {
    local_54 = (uint *)0x3f000000;
    local_58 = (undefined2 *)0x5c3817;
    local_24 = in_ECX;
    FUN_00401000();
    local_54 = (uint *)0x5c381f;
    local_20 = FUN_00b31c00();
    do {
      iVar1 = local_14 * 8;
      if (*(int *)(*(int *)(in_ECX + 0x18) + iVar1) != local_20) {
        if (*(int *)(param_1 + 0x10) != local_18) {
          local_54 = (uint *)0x1;
          local_58 = &DAT_00dee2cc;
          local_30 = 0xf;
          local_34 = 0;
          local_44[0] = local_44[0] & 0xffffff00;
          FUN_00409350();
          local_54 = (uint *)0xffffffff;
          local_58 = (undefined2 *)0x0;
          local_8 = 1;
          FUN_00448aa0(local_44);
          local_8 = local_8 & 0xffffff00;
          if (0xf < local_30) {
            local_54 = (uint *)local_44[0];
                    /* WARNING: Subroutine does not return */
            local_58 = (undefined2 *)&UNK_005c388c;
            FUN_00aae91b();
          }
        }
        local_18 = *(int *)(param_1 + 0x10);
        local_58 = *(undefined2 **)(DAT_0125fe10 + local_14 * 4);
        local_54 = local_44;
        uVar2 = FUN_00473e20();
        local_54 = (uint *)0xffffffff;
        local_58 = (undefined2 *)0x0;
        local_8 = 2;
        FUN_00448aa0(uVar2);
        local_8 = local_8 & 0xffffff00;
        if (0xf < local_30) {
          local_54 = (uint *)local_44[0];
                    /* WARNING: Subroutine does not return */
          local_58 = (undefined2 *)&UNK_005c38d0;
          FUN_00aae91b();
        }
        local_54 = (uint *)0x2;
        local_58 = (undefined2 *)&DAT_00df9638;
        FUN_00448740();
        local_54 = (uint *)0x2;
        if (*(char *)(*(int *)(DAT_0125fe10 + local_14 * 4) + 0x29) == '\0') {
          iVar3 = *(int *)(iVar1 + *(int *)(in_ECX + 0x18));
          if (iVar3 < 1) {
            if (iVar3 < 0) {
              local_58 = (undefined2 *)&DAT_00df8518;
            }
            else {
              local_58 = (undefined2 *)&DAT_00df963c;
            }
          }
          else {
            local_58 = (undefined2 *)&DAT_00df8510;
          }
        }
        else {
          iVar3 = *(int *)(*(int *)(in_ECX + 0x18) + iVar1);
          if (iVar3 < 1) {
            if (iVar3 < 0) {
              local_58 = (undefined2 *)&DAT_00df8510;
            }
            else {
              local_58 = (undefined2 *)&DAT_00df963c;
            }
          }
          else {
            local_58 = (undefined2 *)&DAT_00df8518;
          }
        }
        FUN_00448740();
        if (0 < *(int *)(*(int *)(in_ECX + 0x18) + iVar1)) {
          local_54 = (uint *)0x1;
          local_58 = (undefined2 *)&DAT_00df9640;
          FUN_00448740();
        }
        if (*(char *)(*(int *)(DAT_0125fe10 + local_14 * 4) + 0x28) == '\0') {
          local_58 = *(undefined2 **)(*(int *)(in_ECX + 0x18) + iVar1);
          local_54 = (uint *)0x2;
          local_28 = (undefined1 *)&local_58;
          uVar2 = FUN_00988a50(local_44);
          local_54 = (uint *)0xffffffff;
          local_58 = (undefined2 *)0x0;
          local_8 = 4;
          FUN_00448aa0(uVar2);
          local_8 = local_8 & 0xffffff00;
          if (0xf < local_30) {
            local_54 = (uint *)local_44[0];
                    /* WARNING: Subroutine does not return */
            local_58 = (undefined2 *)&UNK_005c3a2e;
            FUN_00aae91b();
          }
        }
        else {
          iVar1 = *(int *)(*(int *)(in_ECX + 0x18) + iVar1);
          local_54 = (uint *)0x1;
          local_28 = (undefined1 *)&local_58;
          FUN_00401000(0x47c35040);
          iVar3 = FUN_00b31c00();
          local_58 = (undefined2 *)__alldiv((longlong)iVar3 * (longlong)iVar1,1000,0);
          uVar2 = FUN_00988a50(local_44);
          local_54 = (uint *)0xffffffff;
          local_58 = (undefined2 *)0x0;
          local_8 = 3;
          FUN_00448aa0(uVar2);
          local_8 = local_8 & 0xffffff00;
          if (0xf < local_30) {
            local_54 = (uint *)local_44[0];
                    /* WARNING: Subroutine does not return */
            local_58 = (undefined2 *)&UNK_005c39dc;
            FUN_00aae91b();
          }
          local_54 = (uint *)0x1;
          local_58 = (undefined2 *)&DAT_00df9644;
          FUN_00448740();
          in_ECX = local_24;
        }
        local_54 = (uint *)0x2;
        local_58 = (undefined2 *)&DAT_00df8514;
        local_30 = 0xf;
        local_34 = 0;
        local_44[0] = local_44[0] & 0xffffff00;
        FUN_00409350();
        local_54 = (uint *)0xffffffff;
        local_58 = (undefined2 *)0x0;
        local_8 = 5;
        FUN_00448aa0(local_44);
        local_8 = local_8 & 0xffffff00;
        if (0xf < local_30) {
          local_54 = (uint *)local_44[0];
                    /* WARNING: Subroutine does not return */
          local_58 = (undefined2 *)&UNK_005c3a7b;
          FUN_00aae91b();
        }
      }
      local_14 = local_14 + 1;
    } while (local_14 < DAT_0125fe14 - DAT_0125fe10 >> 2);
  }
  ExceptionList = local_10;
  return param_1;
}

