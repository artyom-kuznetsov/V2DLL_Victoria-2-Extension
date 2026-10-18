// FUN_009c9750 @ 009c9750 body=[[009c9750, 009c987a] [009c987e, 009c9899] [009c989d, 009c98b3] [009c98b7, 009c98ce] [009c98d2, 009c98e4]]


undefined1 * FUN_009c9750(undefined1 *param_1)

{
  char cVar1;
  char *pcVar2;
  int in_ECX;
  char *pcVar3;
  char local_a4 [32];
  uint local_84;
  undefined4 local_74;
  uint local_70;
  uint local_68 [4];
  undefined4 local_58;
  uint local_54;
  uint local_4c;
  undefined4 local_3c;
  uint local_38;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b49cb8;
  local_10 = ExceptionList;
  local_14 = (char *)0x0;
  if (in_ECX == 0) {
    ExceptionList = &local_10;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    FUN_00409350(&DAT_00e3afa4,5);
    ExceptionList = local_10;
    return param_1;
  }
  local_54 = 0xf;
  local_58 = 0;
  local_68[0] = local_68[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350(&DAT_00dedc20,2);
  local_14 = &DAT_00df8518;
  if (in_ECX < 0) {
    local_14 = &DAT_00df8510;
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  pcVar2 = __itoa(in_ECX,local_a4,10);
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_8._0_1_ = 2;
  local_38 = 0xf;
  local_3c = 0;
  local_4c = local_4c & 0xffffff00;
  pcVar3 = local_14;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(local_14,(int)pcVar3 - (int)(local_14 + 1));
  local_8._0_1_ = 3;
  FUN_00988f20(local_30);
  local_8 = CONCAT31(local_8._1_3_,4);
  FUN_00988f20(local_68);
  if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_84);
  }
  local_70 = 0xf;
  local_74 = 0;
  local_84 = local_84 & 0xffffff00;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c);
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c = local_4c & 0xffffff00;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_68[0]);
  }
  ExceptionList = local_10;
  return param_1;
}

