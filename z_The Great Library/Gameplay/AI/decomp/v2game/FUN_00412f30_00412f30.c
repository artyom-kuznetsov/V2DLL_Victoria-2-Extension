// FUN_00412f30 @ 00412f30 body=[[00412f30, 00412fb6] [00412fba, 00412fea] [00412fee, 0041308e] [00413092, 004130bb] [004130bf, 004130e5] [004130e9, 00413106] [0041310a, 00413124] [00413128, 0041313c]]


undefined4 FUN_00412f30(undefined4 param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int in_ECX;
  undefined4 local_c0;
  uint local_ac;
  undefined4 local_a4;
  uint local_90;
  undefined4 local_88;
  uint local_74;
  uint local_6c [4];
  undefined4 local_5c;
  uint local_58;
  uint local_50;
  undefined4 local_40;
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined4 local_18;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00b62f02;
  local_10 = ExceptionList;
  local_8 = 0;
  local_18 = 0;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  pcVar2 = (char *)(in_ECX + 0x3a0);
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_10;
  FUN_00409350((char *)(in_ECX + 0x3a0),(int)pcVar2 - (in_ECX + 0x3a1));
  local_8 = 1;
  FUN_00988fa0(local_34);
  local_8 = local_8 & 0xffffff00;
  local_18 = 1;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  uVar3 = FUN_00475500();
  iVar4 = FUN_0040b410(uVar3);
  local_11 = *(int *)(iVar4 + 0x10) != 0;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50);
  }
  if ((bool)local_11) {
    local_58 = 0xf;
    local_5c = 0;
    local_6c[0] = local_6c[0] & 0xffffff00;
    FUN_00409350(&DAT_00dedc68,1);
    local_8 = 2;
    uVar3 = FUN_00475500();
    uVar3 = FUN_0040b410(uVar3);
    local_8._0_1_ = 3;
    FUN_00988fa0(uVar3);
    local_8._0_1_ = 4;
    FUN_00988f20(local_6c);
    local_8._0_1_ = 5;
    uVar3 = FUN_00988f20(param_1);
    local_8 = CONCAT31(local_8._1_3_,6);
    FUN_00408ed0(uVar3,0,0xffffffff);
    if (0xf < local_ac) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_c0);
    }
    if (0xf < local_90) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_a4);
    }
    if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_88);
    }
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_50);
    }
    local_3c = 0xf;
    local_40 = 0;
    local_50 = local_50 & 0xffffff00;
    if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_6c[0]);
    }
  }
  ExceptionList = local_10;
  return param_1;
}

