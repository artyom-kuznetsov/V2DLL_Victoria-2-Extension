// FUN_009e7b30 @ 009e7b30 body=[[009e7b30, 009e7c46] [009e7c4a, 009e7c6b] [009e7c6f, 009e7c94] [009e7c98, 009e7cbd] [009e7cc1, 009e7ce0] [009e7ce4, 009e7cfa] [009e7cfe, 009e7d17] [009e7d1b, 009e7d2d]]


undefined4 FUN_009e7b30(undefined4 param_1)

{
  char cVar1;
  char *pcVar2;
  int in_ECX;
  char *pcVar3;
  char local_f8 [32];
  uint local_d8;
  undefined4 local_c8;
  uint local_c4;
  uint local_bc;
  undefined4 local_ac;
  uint local_a8;
  uint local_a0;
  undefined4 local_90;
  uint local_8c;
  uint local_84;
  undefined4 local_74;
  uint local_70;
  uint local_68 [4];
  undefined4 local_58;
  uint local_54;
  undefined4 local_4c;
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
  puStack_c = &LAB_00b4edc9;
  local_10 = ExceptionList;
  local_4c = 0;
  local_54 = 0xf;
  local_58 = 0;
  local_68[0] = local_68[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350(". Description: ",0xf);
  local_8 = 0;
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  FUN_00409350(", line: ",8);
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  local_8._0_1_ = 2;
  pcVar2 = __itoa(*(int *)(in_ECX + 4),local_f8,10);
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_8._0_1_ = 3;
  FUN_00988fa0(in_ECX + 8);
  local_8._0_1_ = 4;
  FUN_00988f20(local_48);
  local_8._0_1_ = 5;
  FUN_00988f20(local_2c);
  local_8._0_1_ = 6;
  FUN_00988f20(local_68);
  local_8 = CONCAT31(local_8._1_3_,7);
  FUN_00988f20(in_ECX + 0x24);
  if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_84);
  }
  local_70 = 0xf;
  local_74 = 0;
  local_84 = local_84 & 0xffffff00;
  if (0xf < local_c4) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_d8);
  }
  local_c4 = 0xf;
  local_c8 = 0;
  local_d8 = local_d8 & 0xffffff00;
  if (0xf < local_8c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_a0);
  }
  local_8c = 0xf;
  local_90 = 0;
  local_a0 = local_a0 & 0xffffff00;
  if (0xf < local_a8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_bc);
  }
  local_a8 = 0xf;
  local_ac = 0;
  local_bc = local_bc & 0xffffff00;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
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
  if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_68[0]);
  }
  ExceptionList = local_10;
  return param_1;
}

