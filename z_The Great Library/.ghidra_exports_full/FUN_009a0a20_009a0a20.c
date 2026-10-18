// FUN_009a0a20 @ 009a0a20 body=[[009a0a20, 009a0b29] [009a0b2d, 009a0b51] [009a0b55, 009a0b71] [009a0b75, 009a0b94] [009a0b98, 009a0bae] [009a0bb2, 009a0bcb] [009a0bcf, 009a0be1]]


undefined4 FUN_009a0a20(undefined4 param_1)

{
  char cVar1;
  char *pcVar2;
  int in_ECX;
  char *pcVar3;
  char local_dc [32];
  uint local_bc;
  undefined4 local_ac;
  uint local_a8;
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
  puStack_c = &LAB_00b4a20e;
  local_10 = ExceptionList;
  local_68 = 0;
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350(", near line: ",0xd);
  local_8 = 0;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350(" token: ",8);
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  local_8._0_1_ = 2;
  pcVar2 = __itoa(*(int *)(in_ECX + 0x1c),local_dc,10);
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_8._0_1_ = 3;
  FUN_00988f20(local_2c);
  local_8._0_1_ = 4;
  FUN_00988f20(in_ECX + 0x20);
  local_8._0_1_ = 5;
  FUN_00988f20(local_64);
  local_8 = CONCAT31(local_8._1_3_,6);
  FUN_00988f20(local_48);
  if (0xf < local_a8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_bc);
  }
  local_a8 = 0xf;
  local_ac = 0;
  local_bc = local_bc & 0xffffff00;
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
    FUN_00aae91b(local_64[0]);
  }
  ExceptionList = local_10;
  return param_1;
}

