// FUN_00429d90 @ 00429d90 body=[[00429d90, 00429e41] [00429e45, 00429f41] [00429f45, 00429f64] [00429f68, 00429f7c]]


undefined1 * FUN_00429d90(int param_1,undefined1 *param_2)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 local_50 [5];
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b82ea1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *param_2 = 0;
  local_8 = 0;
  local_18 = *(undefined4 *)(param_1 + 0x14);
  iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x18) * 4);
  if ((int)(*(int *)(iVar1 + 0x9dc) - *(int *)(iVar1 + 0x9d8) & 0xfffffffcU) < 1) {
    uVar4 = FUN_004f97a0();
    local_8 = 1;
    uVar4 = FUN_0042c180(local_34,uVar4);
    local_8 = CONCAT31(local_8._1_3_,2);
  }
  else {
    piVar2 = *(int **)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 8) * 4) + 0x188)
    ;
    if ((piVar2 == (int *)0x0) || (cVar3 = (**(code **)(*piVar2 + 0x24))(), cVar3 == '\0')) {
      if (*(int *)(param_1 + 0xc) == 0) {
        if (*(int *)(param_1 + 0x28) == 0) {
          ExceptionList = local_10;
          return param_2;
        }
        uVar4 = FUN_0055dd40();
        local_8 = 6;
        uVar4 = FUN_0042c180(local_34,uVar4);
        local_8 = CONCAT31(local_8._1_3_,7);
        FUN_00408ed0(uVar4,0,0xffffffff);
        if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_34[0]);
        }
        local_20 = 0xf;
        local_24 = 0;
        local_34[0] = local_34[0] & 0xffffff00;
      }
      else {
        uVar4 = FUN_00475d50(local_50);
        local_8 = 5;
        FUN_00408ed0(uVar4,0,0xffffffff);
      }
      goto joined_r0x00429f5a;
    }
    uVar4 = FUN_004f97a0();
    local_8 = 3;
    uVar4 = FUN_0042c180(local_34,uVar4);
    local_8 = CONCAT31(local_8._1_3_,4);
  }
  FUN_00408ed0(uVar4,0,0xffffffff);
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
joined_r0x00429f5a:
  if (local_3c < 0x10) {
    ExceptionList = local_10;
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_50[0]);
}

