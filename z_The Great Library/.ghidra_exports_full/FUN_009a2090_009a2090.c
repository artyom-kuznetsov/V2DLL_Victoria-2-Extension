// FUN_009a2090 @ 009a2090 body=[[009a2090, 009a2193] [009a2197, 009a21b3] [009a21b7, 009a21d6] [009a21da, 009a21f0] [009a21f4, 009a220d] [009a2211, 009a2223]]


undefined4 FUN_009a2090(int param_1,undefined4 param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char local_c0 [32];
  uint local_a0;
  undefined4 local_90;
  uint local_8c;
  uint local_84;
  undefined4 local_74;
  uint local_70;
  undefined4 local_68;
  uint local_64 [4];
  undefined4 local_54;
  uint local_50;
  uint local_48;
  undefined4 local_38;
  uint local_34;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4a183;
  local_10 = ExceptionList;
  local_68 = 0;
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  local_8 = 0;
  ExceptionList = &local_10;
  pcVar2 = __itoa(*(int *)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 8),local_c0,10);
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_8 = 1;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350(" line: ",7);
  local_8._0_1_ = 2;
  local_34 = 0xf;
  local_38 = 0;
  local_48 = local_48 & 0xffffff00;
  FUN_00409350(" file: ",7);
  local_8._0_1_ = 3;
  FUN_00988f20(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 0x14);
  local_8._0_1_ = 4;
  FUN_00988f20(local_2c);
  local_8 = CONCAT31(local_8._1_3_,5);
  FUN_00988f20(local_64);
  if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_84);
  }
  local_70 = 0xf;
  local_74 = 0;
  local_84 = local_84 & 0xffffff00;
  if (0xf < local_8c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_a0);
  }
  local_8c = 0xf;
  local_90 = 0;
  local_a0 = local_a0 & 0xffffff00;
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48);
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48 = local_48 & 0xffffff00;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_64[0]);
  }
  ExceptionList = local_10;
  return param_2;
}

