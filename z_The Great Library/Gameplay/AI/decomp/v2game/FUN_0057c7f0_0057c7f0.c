// FUN_0057c7f0 @ 0057c7f0 body=[[0057c7f0, 0057c87b] [0057c87f, 0057c95e]]


void FUN_0057c7f0(undefined4 param_1)

{
  char cVar1;
  char *pcVar2;
  undefined1 *puVar3;
  int in_ECX;
  undefined4 uVar4;
  char local_230 [256];
  undefined4 local_130;
  char local_12c [256];
  uint local_2c;
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3def8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_009a2520(param_1);
  local_18 = 0xf;
  local_1c = 0;
  local_2c = local_2c & 0xffffff00;
  pcVar2 = (char *)(in_ECX + 0x4c);
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00409350((char *)(in_ECX + 0x4c),(int)pcVar2 - (in_ECX + 0x4d));
  local_8 = 0;
  FUN_009a0940(param_1);
  FUN_0099f770(param_1,0);
  local_8 = 0xffffffff;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c);
  }
  if (*(int *)(in_ECX + 0x3c) == 0) {
    uVar4 = *(undefined4 *)(in_ECX + 0x40);
    FUN_009a0940(param_1);
  }
  else {
    uVar4 = *(undefined4 *)(*(int *)(in_ECX + 0x3c) + 0x58);
    FUN_009a0940(param_1);
  }
  local_130 = 0xc;
  _sprintf(local_12c,"%d",uVar4);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  FUN_009a0940(param_1);
  FUN_0099f020(in_ECX + 0x44);
  cVar1 = *(char *)(in_ECX + 0x54);
  FUN_009a0940(param_1);
  puVar3 = &DAT_00dfbbd0;
  if (cVar1 == '\0') {
    puVar3 = &DAT_00dfbbd4;
  }
  _sprintf(local_230,"%s",puVar3);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  ExceptionList = local_10;
  return;
}

