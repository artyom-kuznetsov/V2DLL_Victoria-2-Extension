// FUN_005899c0 @ 005899c0 body=[[005899c0, 00589a8c] [00589a90, 00589ae6]]


void FUN_005899c0(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
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
  uVar2 = *(undefined4 *)(in_ECX + 0x3c);
  FUN_009a0940(param_1);
  local_130 = 0xc;
  _sprintf(local_12c,"%d",uVar2);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  local_1c = 0;
  local_2c = local_2c & 0xffffff00;
  local_18 = 0xf;
  pcVar3 = (char *)(in_ECX + 0x40);
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00409350((char *)(in_ECX + 0x40),(int)pcVar3 - (in_ECX + 0x41));
  local_8 = 0;
  FUN_009a0940(param_1);
  FUN_0099f770(param_1,0);
  local_8 = 0xffffffff;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c);
  }
  uVar2 = *(undefined4 *)(in_ECX + 0x48);
  FUN_009a0940(param_1);
  _sprintf(local_230,"%d",uVar2);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  ExceptionList = local_10;
  return;
}

