// FUN_009f7a30 @ 009f7a30 body=[[009f7a30, 009f7aeb] [009f7aef, 009f7b13] [009f7b17, 009f7b75] [009f7b79, 009f7b8a]]


void FUN_009f7a30(undefined4 param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int unaff_ESI;
  undefined4 local_48;
  uint local_34;
  undefined4 local_2c [5];
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4e948;
  local_10 = ExceptionList;
  if (*(int *)(unaff_ESI + 0x28) < *(int *)(unaff_ESI + 0xa0)) {
    ExceptionList = &local_10;
    if (*(char *)(unaff_ESI + 0x4c) != '\0') {
      ExceptionList = &local_10;
      *(undefined1 *)(unaff_ESI + 0xb5) = 1;
      uVar2 = FUN_009f7c00(*(undefined2 *)(unaff_ESI + 0x3a),*(undefined2 *)(unaff_ESI + 0x38));
      FUN_009895f0(uVar2);
      local_8 = 0;
      FUN_00448aa0(param_1,0,0xffffffff);
      uVar2 = *(undefined4 *)(unaff_ESI + 0x28);
      FUN_009f7c00(*(undefined2 *)(unaff_ESI + 0x3a),*(undefined2 *)(unaff_ESI + 0x38));
      uVar2 = FUN_009895f0(uVar2);
      local_8._0_1_ = 1;
      FUN_00448aa0(uVar2,0,0xffffffff);
      local_8 = (uint)local_8._1_3_ << 8;
      if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_48);
      }
      FUN_00408ed0(local_2c,0,0xffffffff);
      local_8 = 0xffffffff;
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_2c[0]);
      }
    }
    local_8 = 0xffffffff;
    if (*(char *)(unaff_ESI + 0x99) == '\0') {
      *(undefined1 *)(unaff_ESI + 0xb5) = 1;
      FUN_00448aa0(param_1,0,0xffffffff);
      uVar1 = (**(code **)(*(int *)(unaff_ESI + 0x3c) + 4))();
      uVar2 = FUN_009895f0(uVar1);
      local_8 = 2;
      FUN_00408ed0(uVar2,0,0xffffffff);
      if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_48);
      }
    }
  }
  ExceptionList = local_10;
  return;
}

