// FUN_00901ac0 @ 00901ac0 body=[[00901ac0, 00901b8f] [00901b93, 00901bb2] [00901bb6, 00901bcb]]


undefined4 FUN_00901ac0(undefined4 param_1,undefined4 param_2,char param_3)

{
  undefined4 uVar1;
  int in_ECX;
  undefined1 local_50 [20];
  uint local_3c;
  uint local_34;
  undefined4 local_24;
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b65418;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  __allmul(*(undefined4 *)(in_ECX + 0x20),*(undefined4 *)(in_ECX + 0x24),0x320000,0);
  FUN_00988bb0(local_50,1);
  local_c = 0;
  if (param_3 == '\0') {
    uVar1 = FUN_0096d650();
    local_c = CONCAT31(local_c._1_3_,2);
  }
  else {
    uVar1 = FUN_0096d650();
    local_c = CONCAT31(local_c._1_3_,1);
  }
  FUN_0043ec10(param_1,&DAT_00dfbf14,uVar1);
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_34 = local_34 & 0xffffff00;
  local_24 = 0;
  local_20 = 0xf;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_14;
  return param_1;
}

