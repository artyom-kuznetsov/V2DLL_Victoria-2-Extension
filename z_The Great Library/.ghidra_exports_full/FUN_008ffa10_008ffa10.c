// FUN_008ffa10 @ 008ffa10 body=[[008ffa10, 008ffac4] [008ffac8, 008ffb46] [008ffb4a, 008ffb69] [008ffb6d, 008ffb85]]


undefined4 FUN_008ffa10(undefined4 param_1,undefined4 param_2,char param_3)

{
  undefined4 uVar1;
  int in_ECX;
  uint local_74;
  uint local_58;
  undefined1 local_50 [20];
  uint local_3c;
  undefined1 local_34 [20];
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b65590;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  __allmul(*(undefined4 *)(in_ECX + 0x20),*(undefined4 *)(in_ECX + 0x24),0x320000,0);
  if (param_3 == '\0') {
    FUN_00988bb0(local_34,2);
    local_c = 2;
    uVar1 = FUN_0096d650();
    local_c = CONCAT31(local_c._1_3_,3);
    FUN_0043ec10(param_1,&DAT_00dfbf14,uVar1);
    if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  else {
    FUN_00988bb0(local_50,2);
    local_c = 0;
    uVar1 = FUN_0096d650();
    local_c = CONCAT31(local_c._1_3_,1);
    FUN_0043ec10(param_1,&DAT_00dfbf14,uVar1);
    local_20 = local_3c;
    if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  if (local_20 < 0x10) {
    ExceptionList = local_14;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

