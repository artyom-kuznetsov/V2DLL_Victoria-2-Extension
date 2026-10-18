// FUN_0057e2a0 @ 0057e2a0 body=[[0057e2a0, 0057e32b] [0057e32f, 0057e443]]


void FUN_0057e2a0(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined1 *puVar4;
  int in_ECX;
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
  pcVar3 = (char *)(in_ECX + 0x3c);
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00409350((char *)(in_ECX + 0x3c),(int)pcVar3 - (in_ECX + 0x3d));
  local_8 = 0;
  FUN_009a0940(param_1);
  FUN_0099f770(param_1,0);
  local_8 = 0xffffffff;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c);
  }
  uVar2 = *(undefined4 *)(in_ECX + 0x44);
  FUN_009a0940(param_1);
  local_130 = 0xc;
  _sprintf(local_12c,"%d",uVar2);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  FUN_009a0940(param_1);
  FUN_0099f020(in_ECX + 0x48);
  FUN_009a0940(param_1);
  FUN_0099f020(in_ECX + 0x50);
  uVar2 = *(undefined4 *)(in_ECX + 0x58);
  FUN_009a0940(param_1);
  local_130 = 0xc;
  _sprintf(local_12c,"%d",uVar2);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  cVar1 = *(char *)(in_ECX + 0x5d);
  FUN_009a0940(param_1);
  puVar4 = &DAT_00dfbbd0;
  if (cVar1 == '\0') {
    puVar4 = &DAT_00dfbbd4;
  }
  _sprintf(local_230,"%s",puVar4);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  ExceptionList = local_10;
  return;
}

