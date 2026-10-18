// FUN_00446200 @ 00446200 body=[[00446200, 00446424] [00446428, 004464e6]]


void FUN_00446200(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  char *pcVar4;
  int in_ECX;
  char *pcVar5;
  undefined4 local_244;
  undefined4 local_240;
  uint local_23c;
  undefined4 local_22c;
  uint local_228;
  undefined4 local_220;
  char local_21c [256];
  undefined4 local_11c;
  char local_118 [260];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b5af7b;
  local_14 = ExceptionList;
  uVar2 = *(undefined4 *)(in_ECX + 0x3c);
  ExceptionList = &local_14;
  local_244 = uVar2;
  FUN_009a0940(param_1);
  if (*(char *)(param_1 + 0xc) == '\0') {
    FUN_0098fad0();
  }
  else {
    local_220 = 0xc;
    _sprintf(local_21c,"%d",uVar2);
  }
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  uVar2 = *(undefined4 *)(in_ECX + 8);
  FUN_009a0940(param_1);
  local_220 = 0xc;
  _sprintf(local_21c,"%d",uVar2);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  uVar2 = *(undefined4 *)(in_ECX + 0xc);
  FUN_009a0940(param_1);
  local_220 = 0xc;
  _sprintf(local_21c,"%d",uVar2);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  uVar2 = *(undefined4 *)(in_ECX + 0x10);
  FUN_009a0940(param_1);
  local_220 = 0xc;
  _sprintf(local_21c,"%d",uVar2);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  local_244 = *(undefined4 *)(in_ECX + 0x18);
  local_240 = *(undefined4 *)(in_ECX + 0x1c);
  FUN_009a0940(param_1);
  FUN_0099f020(&local_244);
  cVar1 = *(char *)(in_ECX + 0x44);
  FUN_009a0940(param_1);
  local_220 = 0xe;
  puVar3 = &DAT_00dfbbd0;
  if (cVar1 == '\0') {
    puVar3 = &DAT_00dfbbd4;
  }
  _sprintf(local_21c,"%s",puVar3);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  pcVar5 = (char *)(*(int *)(in_ECX + 0x40) + 0x1c);
  local_228 = 0xf;
  local_22c = 0;
  local_23c = local_23c & 0xffffff00;
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(pcVar5,(int)pcVar4 - (*(int *)(in_ECX + 0x40) + 0x1d));
  local_c = 0;
  FUN_009a0940(param_1);
  FUN_0099f770(param_1,0);
  local_c = 0xffffffff;
  if (0xf < local_228) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_23c);
  }
  cVar1 = *(char *)(in_ECX + 0x45);
  FUN_009a0940(param_1);
  local_220 = 0xe;
  puVar3 = &DAT_00dfbbd0;
  if (cVar1 == '\0') {
    puVar3 = &DAT_00dfbbd4;
  }
  _sprintf(local_21c,"%s",puVar3);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  uVar2 = *(undefined4 *)(in_ECX + 0x5c);
  FUN_009a0940(param_1);
  local_11c = 0xc;
  _sprintf(local_118,"%d",uVar2);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  FUN_00409c60(param_1);
  ExceptionList = local_14;
  return;
}

