// FUN_0067bea0 @ 0067bea0 body=[[0067bea0, 0067befc] [0067bf00, 0067bf6b] [0067bf6f, 0067bf81] [0067bf85, 0067bf95]]


void FUN_0067bea0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint in_stack_00000020;
  undefined1 local_58 [12];
  undefined4 uStack_4c;
  int local_48;
  undefined *local_44;
  uint uStack_40;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b4c550;
  local_10 = ExceptionList;
  iVar1 = (param_2 - param_1) / 0x1c;
  iVar3 = iVar1 / 2;
  uStack_7 = 0;
  ExceptionList = &local_10;
  if (0 < iVar3) {
    iVar2 = param_1 + iVar3 * 0x1c;
    ExceptionList = &local_10;
    do {
      local_8 = 0;
      uStack_40 = 0xffffffff;
      iVar2 = iVar2 + -0x1c;
      local_44 = (undefined *)0x0;
      iVar3 = iVar3 + -1;
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = local_30[0] & 0xffffff00;
      uStack_4c = 0x67bf23;
      local_48 = iVar2;
      FUN_00408ed0();
      local_14 = local_58;
      local_8 = 1;
      local_44 = (undefined *)0xf;
      local_48 = 0;
      local_58[0] = 0;
      FUN_00408ed0(&param_3,0,0xffffffff);
      FUN_0067c7c0(param_1,iVar1,local_30);
      local_8 = 0;
      if (0xf < local_1c) {
        uStack_40 = local_30[0];
                    /* WARNING: Subroutine does not return */
        local_44 = &UNK_0067bf6c;
        FUN_00aae91b();
      }
    } while (0 < iVar3);
  }
  local_8 = 0;
  if (in_stack_00000020 < 0x10) {
    ExceptionList = local_10;
    return;
  }
  uStack_40 = param_3;
                    /* WARNING: Subroutine does not return */
  local_44 = &UNK_0067bf82;
  FUN_00aae91b();
}

