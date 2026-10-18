// FUN_00423d50 @ 00423d50 body=[[00423d50, 00423d9c] [00423da0, 00423e1a] [00423e1e, 00423e34] [00423e38, 00423e4e] [00423e52, 00423e69] [00423e6d, 00423eb2]]


undefined1 * FUN_00423d50(undefined1 *param_1,undefined4 param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  uint local_84 [4];
  undefined4 local_74;
  uint local_70;
  uint local_68;
  undefined4 local_58;
  uint local_54;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b52010;
  local_10 = ExceptionList;
  local_14 = 0;
  ExceptionList = &local_10;
  iVar3 = FUN_00423a50(param_2);
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    FUN_00409350("Command not found",0x11);
    ExceptionList = local_10;
    return param_1;
  }
  pcVar2 = *(char **)(iVar3 + 0x18);
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  pcVar4 = pcVar2;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(pcVar2,(int)pcVar4 - (int)(pcVar2 + 1));
  local_8 = 0;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350(&DAT_00df25a0,4);
  local_8._0_1_ = 1;
  FUN_00419e60(local_84,iVar3);
  local_8._0_1_ = 2;
  FUN_00988f20(local_30);
  local_8 = CONCAT31(local_8._1_3_,3);
  FUN_00988f20(local_4c);
  if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_68);
  }
  local_54 = 0xf;
  local_58 = 0;
  local_68 = local_68 & 0xffffff00;
  if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_84[0]);
  }
  local_70 = 0xf;
  local_74 = 0;
  local_84[0] = local_84[0] & 0xffffff00;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  ExceptionList = local_10;
  return param_1;
}

