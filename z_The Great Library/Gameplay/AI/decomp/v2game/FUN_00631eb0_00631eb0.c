// FUN_00631eb0 @ 00631eb0 body=[[00631eb0, 00631f56] [00631f5a, 00631f7e] [00631f82, 00632013]]


void FUN_00631eb0(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  void **ppvVar2;
  char cVar3;
  int iVar4;
  uint local_4c;
  uint local_38;
  uint local_30;
  uint local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b8b610;
  local_10 = ExceptionList;
  ppvVar2 = &local_10;
  if (param_2 <= param_3) {
    *(undefined4 *)(param_1 + param_2 * 4) = *param_4;
    return;
  }
  do {
    ExceptionList = ppvVar2;
    iVar4 = (param_2 + -1) / 2;
    uVar1 = *(undefined4 *)(param_1 + iVar4 * 4);
    cVar3 = FUN_0061b290(&stack0x00000014,*param_4);
    if (cVar3 == '\0') {
      cVar3 = FUN_0061b290(&stack0x00000014,uVar1);
      if (cVar3 != '\0') {
        *(undefined4 *)(param_1 + param_2 * 4) = *param_4;
        ExceptionList = local_10;
        return;
      }
      FUN_004f97a0();
      local_8 = 0;
      FUN_004f97a0();
      local_8 = CONCAT31(local_8._1_3_,1);
      cVar3 = FUN_0098ab20();
      if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_30);
      }
      local_8 = 0xffffffff;
      local_1c = 0xf;
      local_30 = local_30 & 0xffffff00;
      if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_4c);
      }
      local_38 = 0xf;
      local_4c = local_4c & 0xffffff00;
      if (cVar3 == '\0') break;
    }
    *(undefined4 *)(param_1 + param_2 * 4) = *(undefined4 *)(param_1 + iVar4 * 4);
    ppvVar2 = ExceptionList;
    param_2 = iVar4;
  } while (param_3 < iVar4);
  *(undefined4 *)(param_1 + param_2 * 4) = *param_4;
  ExceptionList = local_10;
  return;
}

