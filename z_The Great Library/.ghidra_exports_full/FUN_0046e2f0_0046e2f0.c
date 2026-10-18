// FUN_0046e2f0 @ 0046e2f0 body=[[0046e2f0, 0046e378] [0046e380, 0046e412] [0046e416, 0046e430] [0046e434, 0046e44e] [0046e452, 0046e49a] [0046e49e, 0046e4b2]]


undefined1 * FUN_0046e2f0(undefined1 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int in_EDX;
  int *piVar5;
  uint local_78 [4];
  undefined4 local_68;
  uint local_64;
  uint local_5c [4];
  undefined4 local_4c;
  uint local_48;
  uint local_40 [4];
  undefined4 local_30;
  uint local_2c;
  uint local_24 [4];
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b774d1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xf;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0xf;
  *(undefined4 *)(param_1 + 0x48) = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  param_1[0x58] = 1;
  local_8 = 0;
  local_14 = 1;
  if (param_2 == *(int *)(in_EDX + 0x48)) {
    iVar1 = *(int *)(DAT_012588e8 + 0xcf4);
    param_2 = 0;
    iVar2 = *(int *)(iVar1 + 0x1c) - *(int *)(iVar1 + 0x18) >> 2;
    if (0 < iVar2) {
      piVar5 = *(int **)(iVar1 + 0x18);
      do {
        if (*(char *)(*piVar5 + 0x90) == '\0') {
          param_2 = param_2 + 1;
        }
        piVar5 = piVar5 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      if (0 < param_2) {
        FUN_0045af30(iVar1,local_24);
        local_8 = 1;
        uVar3 = FUN_009888f0(local_78);
        local_8._0_1_ = 2;
        uVar4 = FUN_009888f0(local_5c);
        local_8._0_1_ = 3;
        uVar3 = FUN_0043ec10(local_40,&DAT_00df7e7c,uVar4,&DAT_00dfad2c,uVar3);
        local_8 = CONCAT31(local_8._1_3_,4);
        FUN_00408ed0(uVar3,0,0xffffffff);
        if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_40[0]);
        }
        local_2c = 0xf;
        local_30 = 0;
        local_40[0] = local_40[0] & 0xffffff00;
        if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_5c[0]);
        }
        local_48 = 0xf;
        local_4c = 0;
        local_5c[0] = local_5c[0] & 0xffffff00;
        if (0xf < local_64) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_78[0]);
        }
        local_64 = 0xf;
        local_68 = 0;
        local_78[0] = local_78[0] & 0xffffff00;
        if (local_24[0] == 0) {
          ExceptionList = local_10;
          return param_1;
        }
        goto LAB_0046e496;
      }
    }
    uVar3 = FUN_00475d50(local_78);
    local_8 = 5;
    FUN_00408ed0(uVar3,0,0xffffffff);
    local_24[0] = local_78[0];
    if (0xf < local_64) {
LAB_0046e496:
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_24[0]);
    }
  }
  ExceptionList = local_10;
  return param_1;
}

