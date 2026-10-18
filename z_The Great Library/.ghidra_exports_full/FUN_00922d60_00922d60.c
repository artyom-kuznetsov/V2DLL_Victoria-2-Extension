// FUN_00922d60 @ 00922d60 body=[[00922d60, 00922e68] [00922e6c, 00922e8c] [00922e90, 00922eb3] [00922eb7, 00922ed1] [00922ed5, 00922eef] [00922ef3, 00922f07]]


undefined4 FUN_00922d60(undefined4 param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  int *in_ECX;
  char *pcVar4;
  char local_c0 [32];
  uint local_a0 [4];
  undefined4 local_90;
  uint local_8c;
  uint local_84;
  undefined4 local_74;
  uint local_70;
  undefined4 local_68;
  uint local_64;
  undefined4 local_54;
  uint local_50;
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
  puStack_c = &LAB_00b79083;
  local_10 = ExceptionList;
  local_68 = 0;
  local_50 = 0xf;
  local_54 = 0;
  local_64 = local_64 & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350(&DAT_00dff69c,4);
  local_8 = 0;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("_DESC",5);
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  local_8._0_1_ = 2;
  pcVar2 = __itoa(*(int *)(*(int *)(DAT_012586dc + 0x30) + 0x2f4) / 1000,local_c0,10);
  pcVar4 = pcVar2;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(pcVar2,(int)pcVar4 - (int)(pcVar2 + 1));
  local_8._0_1_ = 3;
  (**(code **)(*in_ECX + 0x24))(local_a0);
  local_8._0_1_ = 4;
  uVar3 = FUN_00988f20(local_2c);
  local_8 = CONCAT31(local_8._1_3_,5);
  FUN_0055d590(param_1,uVar3,local_48);
  if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_84);
  }
  local_70 = 0xf;
  local_74 = 0;
  local_84 = local_84 & 0xffffff00;
  if (0xf < local_8c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_a0[0]);
  }
  local_8c = 0xf;
  local_90 = 0;
  local_a0[0] = local_a0[0] & 0xffffff00;
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_64);
  }
  ExceptionList = local_10;
  return param_1;
}

