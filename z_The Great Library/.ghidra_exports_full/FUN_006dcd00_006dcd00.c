// FUN_006dcd00 @ 006dcd00 body=[[006dcd00, 006dcdeb] [006dcdef, 006dce01]]


void FUN_006dcd00(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 local_64 [16];
  undefined *local_54;
  char *local_50;
  int iStack_4c;
  undefined1 *local_38;
  undefined1 local_34 [16];
  uint local_24;
  undefined4 local_20;
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b4bf93;
  pvStack_14 = ExceptionList;
  puVar2 = (undefined4 *)(param_1 + 0x14);
  if (0xf < *(uint *)(param_1 + 0x28)) {
    puVar2 = (undefined4 *)*puVar2;
  }
  local_50 = (char *)((int)puVar2 + 0x15);
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = 0;
  pcVar3 = local_50;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  iStack_4c = (int)pcVar3 - ((int)puVar2 + 0x16);
  local_54 = (undefined *)0x6dcd5c;
  ExceptionList = &pvStack_14;
  FUN_00409350();
  iStack_4c = 0x60;
  local_c = 0;
  local_50 = (char *)0x6dcd67;
  iVar4 = FUN_00aae9af();
  local_c._0_1_ = 1;
  if (iVar4 == 0) {
    uVar5 = 0;
  }
  else {
    local_38 = local_64;
    local_50 = (char *)0xf;
    local_54 = (undefined *)0x0;
    local_64[0] = 0;
    FUN_00408ed0(local_34,0,0xffffffff);
    uVar5 = FUN_0057eb00(iVar4,*(undefined4 *)(DAT_012588e8 + 0xb5c),
                         *(undefined4 *)(DAT_012588e8 + 0xb60));
  }
  local_c = (uint)local_c._1_3_ << 8;
  iStack_4c = 0x6dcdd0;
  iVar4 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
  local_50 = (char *)0x6dcddb;
  iStack_4c = uVar5;
  (**(code **)(**(int **)(iVar4 + 0x38) + 0x18))();
  if (0xf < local_24) {
    local_50 = local_38;
                    /* WARNING: Subroutine does not return */
    local_54 = &UNK_006dcdec;
    FUN_00aae91b();
  }
  ExceptionList = pvStack_18;
  return;
}

