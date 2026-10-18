// FUN_0098c6a0 @ 0098c6a0 body=[[0098c6a0, 0098c737] [0098c73b, 0098c759] [0098c75d, 0098c798]]


void FUN_0098c6a0(int param_1)

{
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3acb0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (DAT_00f082bc == -1) {
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    ExceptionList = &local_10;
    FUN_00409350("BattleArrow",0xb);
    local_8 = 0;
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350("gfx/FX/battlearrow.fx",0x15);
    local_8 = CONCAT31(local_8._1_3_,1);
    DAT_00f082bc = FUN_009be510(param_1 + 0x6bcfc,local_2c,local_48,*(undefined4 *)(param_1 + 100));
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
    local_8 = 0xffffffff;
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_48[0]);
    }
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
  }
  local_8 = 0xffffffff;
  if (DAT_01258a5c == 0) {
    (**(code **)(**(int **)(param_1 + 100) + 0x158))
              (*(int **)(param_1 + 100),&DAT_00f09138,&DAT_01258a5c);
  }
  ExceptionList = local_10;
  return;
}

