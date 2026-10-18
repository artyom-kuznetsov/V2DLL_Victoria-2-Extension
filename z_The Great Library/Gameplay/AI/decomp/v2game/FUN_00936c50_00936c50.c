// FUN_00936c50 @ 00936c50 body=[[00936c50, 00936d7c] [00936d80, 00936da1] [00936da5, 00936dc4] [00936dc8, 00936de4] [00936de8, 00936e07] [00936e0b, 00936e21] [00936e25, 00936e6b]]


undefined1 * FUN_00936c50(undefined4 param_1,undefined1 *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  uint local_bc [4];
  undefined4 local_ac;
  uint local_a8;
  uint local_a0;
  undefined4 local_90;
  uint local_8c;
  uint local_84 [4];
  undefined4 local_74;
  uint local_70;
  uint local_68;
  undefined4 local_58;
  uint local_54;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  undefined4 local_30;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b79046;
  local_10 = ExceptionList;
  local_30 = 0;
  iVar2 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x3e4) / 1000;
  ExceptionList = &local_10;
  iVar3 = FUN_00936ba0();
  iVar6 = iVar3 * param_3;
  if (iVar3 * param_3 < -iVar2) {
    iVar6 = -iVar2;
  }
  if (iVar2 < iVar6) {
    iVar6 = iVar2;
  }
  if (iVar6 == 0) {
    *(undefined4 *)(param_2 + 0x14) = 0xf;
    *(undefined4 *)(param_2 + 0x10) = 0;
    *param_2 = 0;
    FUN_00409350(&DAT_00ded94d,0);
    ExceptionList = local_10;
    return param_2;
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  FUN_00409350(&DAT_00dfd76c,3);
  local_8 = 0;
  pcVar7 = &DAT_00dfd24c;
  if (iVar6 < 1) {
    pcVar7 = &DAT_00df8510;
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  pcVar4 = pcVar7;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(pcVar7,(int)pcVar4 - (int)(pcVar7 + 1));
  local_8._0_1_ = 1;
  uVar5 = FUN_009888f0(local_bc);
  local_8._0_1_ = 2;
  FUN_00475d50(local_84);
  local_8._0_1_ = 3;
  FUN_00988f20(local_2c);
  local_8._0_1_ = 4;
  FUN_00988f20(uVar5);
  local_8 = CONCAT31(local_8._1_3_,5);
  FUN_00988f20(local_4c);
  if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_68);
  }
  local_54 = 0xf;
  local_58 = 0;
  local_68 = local_68 & 0xffffff00;
  if (0xf < local_8c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_a0);
  }
  local_8c = 0xf;
  local_90 = 0;
  local_a0 = local_a0 & 0xffffff00;
  if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_84[0]);
  }
  local_70 = 0xf;
  local_74 = 0;
  local_84[0] = local_84[0] & 0xffffff00;
  if (0xf < local_a8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_bc[0]);
  }
  local_a8 = 0xf;
  local_ac = 0;
  local_bc[0] = local_bc[0] & 0xffffff00;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  ExceptionList = local_10;
  return param_2;
}

