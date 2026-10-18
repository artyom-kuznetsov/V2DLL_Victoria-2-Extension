// FUN_006446a0 @ 006446a0 body=[[006446a0, 006448a0] [006448a6, 006448b5] [006448bb, 006448e2] [006448ef, 00644910] [00644916, 00644a6a]]


void FUN_006446a0(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b5100a;
  local_10 = ExceptionList;
  local_8 = 0x19;
  ExceptionList = &local_10;
  FUN_007ed470();
  piVar3 = *(int **)(param_1 + 0x3a0c);
  iVar2 = *(int *)(param_1 + 0x3a10) - (int)piVar3 >> 2;
  if (iVar2 != 0) {
    piVar1 = piVar3 + iVar2;
    for (; piVar3 != piVar1; piVar3 = piVar3 + 1) {
      if ((int *)*piVar3 != (int *)0x0) {
        (**(code **)(*(int *)*piVar3 + 0x24))(1);
      }
    }
  }
  FUN_006458d0(param_1);
  (**(code **)(*(int *)(param_1 + 0xc) + 4))();
  (**(code **)(*(int *)(param_1 + 0x188) + 4))();
  (**(code **)(*(int *)(param_1 + 0x304) + 4))();
  (**(code **)(*(int *)(param_1 + 0x480) + 4))();
  (**(code **)(*(int *)(param_1 + 0x5fc) + 4))();
  (**(code **)(*(int *)(param_1 + 0x778) + 4))();
  (**(code **)(*(int *)(param_1 + 0x8f4) + 4))();
  (**(code **)(*(int *)(param_1 + 0xa70) + 4))();
  (**(code **)(*(int *)(param_1 + 0xbec) + 4))();
  (**(code **)(*(int *)(param_1 + 0xd68) + 4))();
  (**(code **)(*(int *)(param_1 + 0x14d4) + 4))();
  (**(code **)(*(int *)(param_1 + 0x1650) + 4))();
  (**(code **)(*(int *)(param_1 + 0x1ac4) + 4))();
  (**(code **)(*(int *)(param_1 + 0x1948) + 4))();
  (**(code **)(*(int *)(param_1 + 0xee4) + 4))();
  (**(code **)(*(int *)(param_1 + 0x1060) + 4))();
  (**(code **)(*(int *)(param_1 + 0x11dc) + 4))();
  (**(code **)(*(int *)(param_1 + 0x1f38) + 4))();
  (**(code **)(*(int *)(param_1 + 0x1358) + 4))();
  (**(code **)(*(int *)(param_1 + 0x1c40) + 4))();
  iVar2 = *(int *)(param_1 + 0x3a58);
  if (iVar2 != 0) {
    FUN_00416f80(iVar2);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iVar2);
  }
  if (*(int *)(param_1 + 0x3a48) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(param_1 + 0x3a48));
  }
  *(undefined4 *)(param_1 + 0x3a48) = 0;
  *(undefined4 *)(param_1 + 0x3a4c) = 0;
  *(undefined4 *)(param_1 + 0x3a50) = 0;
  if (*(int *)(param_1 + 0x3a34) == 0) {
    *(undefined4 *)(param_1 + 0x3a34) = 0;
    *(undefined4 *)(param_1 + 0x3a38) = 0;
    *(undefined4 *)(param_1 + 0x3a3c) = 0;
    if (*(int *)(param_1 + 0x3a0c) == 0) {
      *(undefined4 *)(param_1 + 0x3a0c) = 0;
      *(undefined4 *)(param_1 + 0x3a10) = 0;
      *(undefined4 *)(param_1 + 0x3a14) = 0;
      local_8._0_1_ = 0x15;
      FUN_007ecc30(param_1 + 0x20bc);
      local_8._0_1_ = 0x14;
      FUN_0098b4c0();
      local_8._0_1_ = 0x13;
      FUN_0098b4c0();
      local_8._0_1_ = 0x12;
      FUN_0098b4c0();
      local_8._0_1_ = 0x11;
      FUN_0098b4c0();
      local_8._0_1_ = 0x10;
      FUN_0098b4c0();
      local_8._0_1_ = 0xf;
      FUN_0098b4c0();
      local_8._0_1_ = 0xe;
      FUN_0098b4c0();
      local_8._0_1_ = 0xd;
      FUN_0098b4c0();
      local_8._0_1_ = 0xc;
      FUN_0098b4c0();
      local_8._0_1_ = 0xb;
      FUN_0098b4c0();
      local_8._0_1_ = 10;
      FUN_0098b4c0();
      local_8._0_1_ = 9;
      FUN_0098b4c0();
      local_8._0_1_ = 8;
      FUN_0098b4c0();
      local_8._0_1_ = 7;
      FUN_0098b4c0();
      local_8._0_1_ = 6;
      FUN_0098b4c0();
      local_8._0_1_ = 5;
      FUN_0098b4c0();
      local_8._0_1_ = 4;
      FUN_0098b4c0();
      local_8._0_1_ = 3;
      FUN_0098b4c0();
      local_8._0_1_ = 2;
      FUN_0098b4c0();
      local_8._0_1_ = 1;
      FUN_0098b4c0();
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_0098b4c0();
      local_8 = 0xffffffff;
      FUN_0098b4c0();
      ExceptionList = local_10;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(param_1 + 0x3a0c));
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(*(int *)(param_1 + 0x3a34));
}

