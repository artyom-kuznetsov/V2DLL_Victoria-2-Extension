// FUN_0076bf50 @ 0076bf50 body=[[0076bf50, 0076bfed] [0076bff1, 0076c077] [0076c07b, 0076c09f]]


void FUN_0076bf50(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined4 uStack_68;
  undefined *puStack_64;
  char *pcStack_60;
  uint *puStack_5c;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4fe40;
  local_10 = ExceptionList;
  puStack_5c = (uint *)0x76bf84;
  ExceptionList = &local_10;
  (**(code **)(*(int *)(*(int *)(*(int *)(in_ECX + 4) + 0x704) + 0x18) + 0x38))();
  puStack_5c = (uint *)0x76bf95;
  (**(code **)(*(int *)(*(int *)(in_ECX + 0x278) + 0x18) + 0x34))();
  if (DAT_012589ac == 0) {
    puStack_5c = (uint *)0xf;
    pcStack_60 = "lobby_chat_edit";
    local_38 = 0xf;
    local_3c = 0;
    local_4c[0] = local_4c[0] & 0xffffff00;
    puStack_64 = (undefined *)0x76bfbb;
    FUN_00409350();
    local_8 = 0;
    puStack_5c = local_4c;
    pcStack_60 = (char *)0x76bfcf;
    piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x278) + 0x40))();
    pcStack_60 = (char *)0x76bfd8;
    (**(code **)(*piVar1 + 0x38))();
    local_8 = 0xffffffff;
    if (0xf < local_38) {
      puStack_5c = (uint *)local_4c[0];
                    /* WARNING: Subroutine does not return */
      pcStack_60 = &UNK_0076bfee;
      FUN_00aae91b();
    }
  }
  puStack_5c = (uint *)0x7;
  pcStack_60 = "chatlog";
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  puStack_64 = (undefined *)0x76c00d;
  FUN_00409350();
  local_8 = 1;
  puStack_5c = local_30;
  pcStack_60 = (char *)0x76c025;
  iVar2 = (**(code **)(**(int **)(in_ECX + 0x278) + 0x7c))();
  iVar2 = *(int *)(iVar2 + 0x104);
  if (iVar2 != 0) {
    pcStack_60 = (char *)0x1;
    puStack_64 = (undefined *)0x1;
    local_14 = &uStack_68;
    FUN_00401000(0x447a1fff);
    uVar3 = FUN_00b31c00();
    *local_14 = uVar3;
    (**(code **)(*(int *)(iVar2 + 0x54) + 0x1c))();
  }
  local_8 = 0xffffffff;
  if (0xf < local_1c) {
    pcStack_60 = (char *)local_30[0];
                    /* WARNING: Subroutine does not return */
    puStack_64 = &UNK_0076c078;
    FUN_00aae91b();
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  pcStack_60 = (char *)0x76c08f;
  FUN_00777cc0();
  ExceptionList = local_10;
  return;
}

