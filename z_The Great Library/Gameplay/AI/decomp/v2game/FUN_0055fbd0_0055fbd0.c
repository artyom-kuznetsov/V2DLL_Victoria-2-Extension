// FUN_0055fbd0 @ 0055fbd0 body=[[0055fbd0, 0055fc3c] [0055fc40, 0055fcb3] [0055fcb7, 0055fcd2] [0055fcd6, 0055fcf0] [0055fcf4, 0055fd2d] [0055fd33, 0055fd62]]


undefined1 * FUN_0055fbd0(undefined1 *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int in_ECX;
  char *pcVar4;
  char local_a8 [32];
  undefined4 local_88 [5];
  uint local_74;
  uint local_6c;
  undefined4 local_5c;
  uint local_58;
  undefined4 local_50;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5ad5b;
  local_10 = ExceptionList;
  local_50 = 0;
  if (*(int *)(in_ECX + 0xf0) < 1) {
    ExceptionList = &local_10;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    FUN_00409350(&DAT_00ded94d,0);
  }
  else {
    ExceptionList = &local_10;
    iVar2 = FUN_009b7950(0,0);
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    local_8 = 0;
    pcVar3 = __itoa(iVar2 % *(int *)(in_ECX + 0xf0),local_a8,10);
    pcVar4 = pcVar3;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    FUN_00409350(pcVar3,(int)pcVar4 - (int)(pcVar3 + 1));
    local_8 = 1;
    local_38 = 0xf;
    local_3c = 0;
    local_4c[0] = local_4c[0] & 0xffffff00;
    FUN_00409350("_admiral_",9);
    local_8._0_1_ = 2;
    FUN_00988f20(local_4c);
    local_8._0_1_ = 3;
    FUN_00988f20(local_30);
    if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_6c);
    }
    local_58 = 0xf;
    local_5c = 0;
    local_6c = local_6c & 0xffffff00;
    if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_4c[0]);
    }
    local_38 = 0xf;
    local_3c = 0;
    local_4c[0] = local_4c[0] & 0xffffff00;
    local_8 = CONCAT31(local_8._1_3_,7);
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
    local_1c = 0xf;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    *param_1 = 0;
    FUN_00408ed0(local_88,0,0xffffffff);
    if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_88[0]);
    }
  }
  ExceptionList = local_10;
  return param_1;
}

