// FUN_00886090 @ 00886090 body=[[00886090, 00886173] [00886177, 00886263] [00886267, 00886291] [00886295, 008862ba] [008862be, 008862dd] [008862e1, 008862fb] [008862ff, 0088634a] [0088634e, 0088638d] [00886391, 008863a5]]


/* WARNING: Removing unreachable block (ram,0x008862f3) */

undefined1 * FUN_00886090(undefined1 *param_1,int param_2,undefined4 param_3)

{
  char *pcVar1;
  int iVar2;
  int *in_ECX;
  uint in_stack_00000020;
  uint local_c0;
  uint local_a4;
  uint local_88;
  uint local_64 [4];
  undefined4 local_54;
  uint local_50;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24 [4];
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar2 = param_2;
  puStack_c = &LAB_00b87ace;
  local_10 = ExceptionList;
  local_28 = 0;
  local_8 = 0;
  local_2c = *(undefined4 *)(param_2 + 8);
  param_2 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_2 + 0xc) * 4);
  ExceptionList = &local_10;
  pcVar1 = (char *)(**(code **)(*in_ECX + 0x34))(&local_2c,iVar2);
  if ((*(int *)(pcVar1 + 4) == *(int *)(param_2 + 0x20)) ||
     (((*(int *)(*(int *)(*(int *)(param_2 + 0xbe8) + *(int *)(pcVar1 + 4) * 4) + 0x34) == 0 &&
       (((*pcVar1 != 'R' || (pcVar1[1] != 'E')) || (pcVar1[2] != 'B')))) &&
      (((*(char *)(param_2 + 0x1c) != 'R' || (*(char *)(param_2 + 0x1d) != 'E')) ||
       (*(char *)(param_2 + 0x1e) != 'B')))))) {
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = local_64[0] & 0xffffff00;
    FUN_00409350("WAR_EFFECT",10);
    local_8._0_1_ = 1;
    FUN_009a8ee0(local_24,local_64);
    local_8._0_1_ = 3;
    if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = local_64[0] & 0xffffff00;
    FUN_00409350(&DAT_00df8514,2);
    local_8._0_1_ = 4;
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    FUN_00409350(&DAT_00e156c4,3);
    local_8._0_1_ = 5;
    (**(code **)(*in_ECX + 0x34))(&local_2c,iVar2);
    FUN_0055dd40();
    local_8._0_1_ = 6;
    FUN_00988fa0();
    local_8._0_1_ = 7;
    FUN_00988f20();
    local_8._0_1_ = 8;
    param_2 = FUN_00aae9af();
    local_8._0_1_ = 9;
    if (param_2 == 0) {
      param_2 = 0;
    }
    else {
      param_2 = FUN_009a9ce0();
    }
    local_8._0_1_ = 8;
    FUN_009e6810(local_48,&param_2);
    if (0xf < local_88) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_a4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_c0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 3;
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    iVar2 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
    local_8 = CONCAT31(local_8._1_3_,10);
    FUN_009adb70();
    if (local_20 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    FUN_00409350(&DAT_00ded94d,0);
  }
  if (0xf < in_stack_00000020) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

