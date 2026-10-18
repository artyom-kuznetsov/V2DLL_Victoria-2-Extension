// FUN_007b9ee0 @ 007b9ee0 body=[[007b9ee0, 007b9f8a] [007b9f90, 007b9ff4]]


undefined1 * FUN_007b9ee0(int param_1,undefined1 *param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_74 [72];
  undefined4 local_2c [5];
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00ba0b19;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *param_2 = 0;
  local_8 = 0;
  iVar1 = *(int *)(param_1 + 0x20);
  if ((iVar1 != 0) && (iVar1 != 1)) {
    if (iVar1 == 2) {
      FUN_008a8800(param_4);
      uVar2 = FUN_008ae490(*(int *)(*(int *)(param_4 + 0x68) + 0x80) + param_3 * 0x1c,local_2c,
                           local_74);
      local_8 = 1;
      FUN_00448aa0(uVar2,0,0xffffffff);
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_2c[0]);
      }
    }
    else if ((iVar1 != 3) && (iVar1 == 4)) {
      FUN_008a8800(param_4);
      uVar2 = FUN_008ae490(*(int *)(*(int *)(param_4 + 0x68) + 0x70) + param_3 * 0x1c,local_2c,
                           local_74);
      local_8 = 2;
      FUN_00448aa0(uVar2,0,0xffffffff);
      FUN_00408ad0();
    }
  }
  ExceptionList = local_10;
  return param_2;
}

