// FUN_0055cc00 @ 0055cc00 body=[[0055cc00, 0055ccc3] [0055ccc7, 0055ccdd] [0055cce1, 0055ccf7] [0055ccfb, 0055cd11] [0055cd15, 0055cd28]]


/* WARNING: Removing unreachable block (ram,0x0055cd09) */

undefined4 FUN_0055cc00(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 local_84;
  uint local_70;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  uint local_30;
  undefined4 local_20;
  uint local_1c;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b72800;
  local_10 = ExceptionList;
  local_14 = 0;
  ExceptionList = &local_10;
  FUN_00409350("REGION",6);
  local_8 = 0;
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  FUN_00409350(&DAT_00dffe64,4);
  local_8._0_1_ = 1;
  pcVar2 = &stack0x0000000c;
  local_1c = 0xf;
  local_20 = 0;
  local_30 = local_30 & 0xffffff00;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(&stack0x0000000c,(int)pcVar2 - (int)&stack0x0000000d);
  local_8._0_1_ = 2;
  uVar3 = FUN_00988f20(local_4c);
  local_8 = CONCAT31(local_8._1_3_,3);
  FUN_0055d590(param_1,uVar3,param_2);
  if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_84);
  }
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30 = local_30 & 0xffffff00;
  if (local_38 < 0x10) {
    ExceptionList = local_10;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_4c[0]);
}

