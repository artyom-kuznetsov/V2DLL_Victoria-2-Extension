// FUN_0057d600 @ 0057d600 body=[[0057d600, 0057d6a1] [0057d6a5, 0057d778]]


void FUN_0057d600(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int in_ECX;
  undefined4 local_140;
  undefined4 local_13c;
  uint local_138;
  undefined4 local_128;
  uint local_124;
  undefined4 local_11c;
  char local_118 [260];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b619bb;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_009a2520(param_1);
  local_124 = 0xf;
  local_128 = 0;
  local_138 = local_138 & 0xffffff00;
  pcVar4 = (char *)(in_ECX + 0x3c);
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00409350((char *)(in_ECX + 0x3c),(int)pcVar4 - (in_ECX + 0x3d));
  local_c = 0;
  FUN_009a0940(param_1);
  FUN_0099f770(param_1,0);
  local_c = 0xffffffff;
  if (0xf < local_124) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_138);
  }
  uVar2 = *(undefined4 *)(in_ECX + 0x44);
  FUN_009a0940(param_1);
  local_11c = 0xc;
  _sprintf(local_118,"%d",uVar2);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  FUN_009a0940(param_1);
  FUN_0099f020(in_ECX + 0x50);
  FUN_009a0940(param_1);
  FUN_0099f020(in_ECX + 0x48);
  FUN_009a0940(param_1);
  FUN_0099f020(in_ECX + 0x58);
  FUN_009a0940(param_1);
  FUN_0099f770(param_1,0);
  iVar3 = *(int *)(in_ECX + 100);
  if (iVar3 != 0) {
    local_140 = *(undefined4 *)(iVar3 + 8);
    local_13c = *(undefined4 *)(iVar3 + 0xc);
    FUN_009a0940(param_1);
    FUN_0099f020(&local_140);
  }
  ExceptionList = local_14;
  return;
}

