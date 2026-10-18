// FUN_0041c0c0 @ 0041c0c0 body=[[0041c0c0, 0041c242] [0041c246, 0041c261] [0041c265, 0041c27b] [0041c27f, 0041c295] [0041c299, 0041c2af]]


undefined1 * FUN_0041c0c0(undefined1 *param_1,int *param_2)

{
  char cVar1;
  int _Value;
  char *pcVar2;
  undefined4 uVar3;
  char *pcVar4;
  char local_ac [32];
  undefined4 local_8c;
  uint local_84;
  undefined4 local_74;
  uint local_70;
  uint local_68;
  undefined4 local_58;
  uint local_54;
  uint local_4c;
  undefined4 local_3c;
  uint local_38;
  uint local_30;
  undefined4 local_20;
  uint local_1c;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b77a01;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[4] = 0;
  local_8 = 0;
  local_14 = 1;
  if ((param_2[1] - *param_2) / 0x1c < 1) {
    *param_1 = 0;
    FUN_00409350("Please specify amount.");
    ExceptionList = local_10;
    return param_1;
  }
  _Value = FUN_00aaf0c5();
  local_8c = *(undefined4 *)(DAT_012588e8 + 0xb5c);
  FUN_005366f0();
  local_38 = 0xf;
  local_3c = 0;
  local_4c = local_4c & 0xffffff00;
  FUN_00409350(" research points.");
  local_1c = 0xf;
  local_20 = 0;
  local_30 = local_30 & 0xffffff00;
  local_8._0_1_ = 2;
  local_8._1_3_ = 0;
  pcVar2 = __itoa(_Value,local_ac,10);
  pcVar4 = pcVar2;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(pcVar2);
  local_8._0_1_ = 3;
  FUN_00988fa0();
  local_8._0_1_ = 4;
  uVar3 = FUN_00988f20();
  local_8 = CONCAT31(local_8._1_3_,5);
  FUN_00408ed0(uVar3,0);
  if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_54 = 0xf;
  local_58 = 0;
  local_68 = local_68 & 0xffffff00;
  if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_70 = 0xf;
  local_74 = 0;
  local_84 = local_84 & 0xffffff00;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30 = local_30 & 0xffffff00;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  *param_1 = 1;
  ExceptionList = local_10;
  return param_1;
}

