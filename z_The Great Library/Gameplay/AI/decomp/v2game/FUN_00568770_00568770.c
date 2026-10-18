// FUN_00568770 @ 00568770 body=[[00568770, 005687ac] [005687b0, 00568821] [00568825, 005688a3]]


void FUN_00568770(int param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
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
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  pcVar2 = (char *)(param_1 + 0x24);
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_10;
  FUN_00409350((char *)(param_1 + 0x24),(int)pcVar2 - (param_1 + 0x25));
  local_8 = 0;
  if (DAT_0125eadc == 0) {
    iVar3 = FUN_00aae9af(0x9c);
    local_8._0_1_ = 1;
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_00576fe0(iVar3);
    }
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_0057ab10(uVar4);
  }
  iVar3 = FUN_0057b0a0(local_30);
  local_8 = 0xffffffff;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  if (iVar3 != 0) {
    (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
    uVar4 = FUN_00aaf0c5(*(int *)(param_1 + 0x1c) + 0x10);
    *(undefined4 *)(*(int *)(local_14 + 0x2b8) + *(int *)(iVar3 + 0x2e4) * 4) = uVar4;
    (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
    FUN_0098fc80(*(int *)(param_1 + 0x1c) + 0xc,
                 *(int *)(local_14 + 0x2c8) + *(int *)(iVar3 + 0x2e4) * 4);
    (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
  }
  ExceptionList = local_10;
  return;
}

