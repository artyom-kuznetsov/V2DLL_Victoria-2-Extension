// FUN_00893390 @ 00893390 body=[[00893390, 00893477] [0089347b, 0089348c]]


void FUN_00893390(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int in_ECX;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar2 = DAT_012587ec;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b45263;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined1 *)(in_ECX + 0x24) = 0;
  if (iVar2 == 0) {
    local_14 = FUN_00aae9af(0x98);
    local_8 = 0;
    if (local_14 == 0) {
      iVar2 = 0;
      DAT_012587ec = iVar2;
    }
    else {
      iVar2 = FUN_00561080(local_14);
      DAT_012587ec = iVar2;
    }
  }
  local_8 = 0xffffffff;
  *(int *)(in_ECX + 0x20) = iVar2;
  if (param_1 == 0x335) {
    *(undefined1 *)(in_ECX + 0x24) = 1;
    ExceptionList = local_10;
    return;
  }
  pcVar3 = &stack0x00000008;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(&stack0x00000008,(int)pcVar3 - (int)&stack0x00000009);
  local_8 = 1;
  iVar2 = FUN_004a2f70(local_30);
  if (iVar2 == 0) {
    uVar4 = FUN_00561180();
  }
  else {
    uVar4 = FUN_004a2f70(local_30);
  }
  *(undefined4 *)(in_ECX + 0x20) = uVar4;
  if (local_1c < 0x10) {
    ExceptionList = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_30[0]);
}

