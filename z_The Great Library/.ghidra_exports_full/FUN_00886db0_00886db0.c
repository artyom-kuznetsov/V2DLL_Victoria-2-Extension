// FUN_00886db0 @ 00886db0 body=[[00886db0, 00886f3b] [00886f3f, 00886f51]]


void FUN_00886db0(int param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  int in_ECX;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int local_134;
  undefined1 local_130 [256];
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4cc93;
  local_10 = ExceptionList;
  if (param_2 == 0xd9) {
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    pcVar2 = (char *)(param_1 + 0x22c);
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    ExceptionList = &local_10;
    FUN_00409350((char *)(param_1 + 0x22c),(int)pcVar2 - (param_1 + 0x22d));
    local_8 = 0;
    if (DAT_0125fdd8 == 0) {
      iVar4 = FUN_00aae9af(0x1c);
      local_8._0_1_ = 1;
      if (iVar4 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_008b0060();
      }
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_005c2810(uVar3);
    }
    uVar3 = FUN_005c2ad0(local_30);
    *(undefined4 *)(in_ECX + 0x24) = uVar3;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
    ExceptionList = local_10;
    return;
  }
  if (param_2 != 0x344) {
    ExceptionList = &local_10;
    FUN_00876b30(param_1,param_2);
    ExceptionList = local_10;
    return;
  }
  piVar5 = (int *)(param_1 + 0x228);
  piVar6 = &local_134;
  local_14 = in_ECX;
  for (iVar4 = 0x41; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar6 = *piVar5;
    piVar5 = piVar5 + 1;
    piVar6 = piVar6 + 1;
  }
  ExceptionList = &local_10;
  *(undefined2 *)(local_14 + 0x1c) = 0;
  *(undefined1 *)(local_14 + 0x28) = 0;
  *(undefined4 *)(local_14 + 0x20) = 0;
  if (local_134 == 0x405) {
    *(undefined1 *)(local_14 + 0x1c) = 1;
    ExceptionList = local_10;
    return;
  }
  if (local_134 == 0x3de) {
    *(undefined1 *)(local_14 + 0x1d) = 1;
    ExceptionList = local_10;
    return;
  }
  if (local_134 == 0x71e) {
    *(undefined1 *)(local_14 + 0x28) = 1;
    ExceptionList = local_10;
    return;
  }
  iVar4 = FUN_00aaf0c5(local_130);
  *(int *)(local_14 + 0x20) = iVar4 * 1000;
  ExceptionList = local_10;
  return;
}

