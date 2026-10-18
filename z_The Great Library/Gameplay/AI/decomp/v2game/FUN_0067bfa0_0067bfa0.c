// FUN_0067bfa0 @ 0067bfa0 body=[[0067bfa0, 0067c045] [0067c049, 0067c079] [0067c07d, 0067c08d]]


void FUN_0067bfa0(int param_1,undefined4 param_2)

{
  int in_ECX;
  int iVar1;
  uint in_stack_0000001c;
  undefined1 local_58 [12];
  undefined4 uStack_4c;
  undefined4 *local_48;
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
  
  puStack_c = &LAB_00b50e70;
  uStack_7 = 0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  for (iVar1 = in_ECX - param_1; 1 < iVar1 / 0x1c; iVar1 = iVar1 + -0x1c) {
    local_8 = 0;
    uStack_40 = 0xffffffff;
    local_44 = (undefined *)0x0;
    local_48 = &param_2;
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    uStack_4c = 0x67c002;
    FUN_00408ed0();
    local_14 = local_58;
    local_8 = 1;
    local_44 = (undefined *)0xf;
    local_48 = (undefined4 *)0x0;
    local_58[0] = 0;
    FUN_00408ed0(local_30,0,0xffffffff);
    FUN_0067ca20(param_1);
    local_8 = 0;
    if (0xf < local_1c) {
      uStack_40 = local_30[0];
                    /* WARNING: Subroutine does not return */
      local_44 = &UNK_0067c046;
      FUN_00aae91b();
    }
  }
  local_8 = 0;
  if (0xf < in_stack_0000001c) {
                    /* WARNING: Subroutine does not return */
    local_44 = &UNK_0067c07a;
    uStack_40 = param_2;
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return;
}

