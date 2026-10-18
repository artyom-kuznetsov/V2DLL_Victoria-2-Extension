// FUN_004a42c0 @ 004a42c0 body=[[004a42c0, 004a4383] [004a4387, 004a4396]]


void FUN_004a42c0(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  int in_ECX;
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
  _sprintf(local_12c,"%d",uVar2);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  local_18 = 0xf;
  local_1c = 0;
  local_2c = local_2c & 0xffffff00;
  pcVar3 = (char *)(in_ECX + 0x40);
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00409350((char *)(in_ECX + 0x40),(int)pcVar3 - (in_ECX + 0x41));
  local_8 = 0;
  FUN_009a0940(param_1);
  FUN_0099f770(param_1,0);
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c);
  }
  ExceptionList = local_10;
  return;
}

