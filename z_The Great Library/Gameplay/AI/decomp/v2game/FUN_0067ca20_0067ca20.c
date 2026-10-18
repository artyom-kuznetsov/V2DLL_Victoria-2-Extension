// FUN_0067ca20 @ 0067ca20 body=[[0067ca20, 0067caa5] [0067caa9, 0067cac3] [0067cac7, 0067cad7]]


void FUN_0067ca20(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  uint in_stack_0000001c;
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
  undefined4 local_8;
  
  puStack_c = &LAB_00b50e50;
  local_10 = ExceptionList;
  uStack_40 = 0xffffffff;
  local_48 = in_ECX + -0x1c;
  local_8 = 0;
  local_44 = (undefined *)0x0;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  uStack_4c = 0x67ca60;
  ExceptionList = &local_10;
  FUN_00408ed0();
  local_14 = local_58;
  local_8 = CONCAT31(local_8._1_3_,1);
  local_44 = (undefined *)0xf;
  local_48 = 0;
  local_58[0] = 0;
  FUN_00408ed0(&param_2,0,0xffffffff);
  FUN_0067cb40(local_30);
  if (0xf < local_1c) {
    uStack_40 = local_30[0];
                    /* WARNING: Subroutine does not return */
    local_44 = &UNK_0067caa6;
    FUN_00aae91b();
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  if (0xf < in_stack_0000001c) {
    uStack_40 = param_2;
                    /* WARNING: Subroutine does not return */
    local_44 = &UNK_0067cac4;
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return;
}

