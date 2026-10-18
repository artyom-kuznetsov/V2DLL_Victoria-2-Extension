// FUN_0041ea80 @ 0041ea80 body=[[0041ea80, 0041eb8f] [0041eb93, 0041ebad] [0041ebb1, 0041ebe7]]


undefined1 * FUN_0041ea80(undefined1 *param_1,int *param_2)

{
  char cVar1;
  undefined1 local_7c [12];
  undefined4 uStack_70;
  undefined4 local_6c;
  char *local_68;
  uint *puStack_64;
  uint local_40;
  uint local_38 [4];
  undefined4 local_28;
  uint local_24;
  undefined1 *local_1c;
  int local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b62e19;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[4] = 0;
  local_8 = 0;
  local_18 = *param_2;
  local_14 = 1;
  if ((param_2[1] - local_18) / 0x1c < 1) {
    puStack_64 = (uint *)0x1c;
    local_68 = "Please specify the file name";
    *param_1 = 0;
    local_6c = 0x41eaf4;
    FUN_00409350();
    ExceptionList = local_10;
    return param_1;
  }
  local_1c = local_7c;
  local_68 = (char *)0xf;
  local_6c = 0;
  local_7c[0] = 0;
  FUN_00408ed0(local_18,0,0xffffffff);
  cVar1 = FUN_009a4dc0();
  if (cVar1 == '\0') {
    puStack_64 = (uint *)0x19;
    local_68 = "Failed to reload the file";
    *param_1 = 0;
    local_6c = 0x41ebd5;
    FUN_00409350();
    ExceptionList = local_10;
    return param_1;
  }
  puStack_64 = (uint *)0xa;
  local_68 = " reloaded!";
  *param_1 = 1;
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  local_6c = 0x41eb56;
  FUN_00409350();
  puStack_64 = local_38;
  local_8 = 1;
  local_68 = (char *)0x41eb6e;
  local_6c = FUN_00988f20();
  puStack_64 = (uint *)0xffffffff;
  local_68 = (char *)0x0;
  local_8 = CONCAT31(local_8._1_3_,2);
  uStack_70 = 0x41eb7d;
  FUN_00408ed0();
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    local_68 = &UNK_0041eb90;
    FUN_00aae91b();
  }
  if (0xf < local_24) {
    puStack_64 = (uint *)local_38[0];
                    /* WARNING: Subroutine does not return */
    local_68 = &UNK_0041ebae;
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

