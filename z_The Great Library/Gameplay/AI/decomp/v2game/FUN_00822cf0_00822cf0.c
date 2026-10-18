// FUN_00822cf0 @ 00822cf0 body=[[00822cf0, 00822d18] [00822d20, 00822e0a] [00822e14, 00822e3c]]


void FUN_00822cf0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  bool bVar6;
  int *local_38;
  int *local_34;
  int local_30;
  undefined1 local_2c;
  int *local_28;
  int *local_20;
  int local_1c;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4add8;
  local_10 = ExceptionList;
  local_28 = *(int **)(param_1 + 0x88);
  ExceptionList = &local_10;
  do {
    if ((local_28 < *(int **)(param_1 + 0x88)) || (*(int **)(param_1 + 0x8c) <= local_28)) {
      ExceptionList = local_10;
      return;
    }
    iVar3 = *local_28;
    local_28 = local_28 + 1;
    local_1c = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + iVar3 * 4);
    piVar4 = (int *)0x0;
    local_18 = 0;
    local_38 = (int *)0x0;
    local_34 = (int *)0x0;
    local_30 = 0;
    local_2c = 0;
    local_8 = 0;
    piVar5 = *(int **)(param_1 + 0x68);
    if (piVar5 != (int *)0x0) {
      do {
        iVar3 = *piVar5;
        piVar5 = (int *)piVar5[2];
        piVar1 = local_38;
        iVar2 = local_18;
        if (((*(int *)(iVar3 + 0xdc) == local_1c) && (*(int *)(iVar3 + 0xa0) < 1)) &&
           (iVar2 = iVar3, local_18 != 0)) {
          local_20 = piVar4;
          local_34 = (int *)FUN_00aae9af(0x10);
          if (local_34 == (int *)0x0) {
            local_34 = (int *)0x0;
          }
          else {
            *local_34 = iVar3;
            local_34[1] = (int)piVar4;
            local_34[2] = 0;
            *(undefined1 *)(local_34 + 3) = 0;
          }
          iVar3 = local_30 + 1;
          bVar6 = local_30 != 0;
          piVar4 = local_34;
          piVar1 = local_34;
          local_30 = iVar3;
          iVar2 = local_18;
          if (bVar6) {
            local_20[2] = (int)local_34;
            piVar1 = local_38;
          }
        }
        local_18 = iVar2;
        local_38 = piVar1;
      } while (piVar5 != (int *)0x0);
      if ((local_18 != 0) && (0 < local_30)) {
        FUN_008268d0(local_18,&local_38,0);
      }
    }
    local_8 = 0xffffffff;
  } while (local_38 == (int *)0x0);
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_38);
}

