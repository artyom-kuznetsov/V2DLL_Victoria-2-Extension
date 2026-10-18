// FUN_005b6c90 @ 005b6c90 body=[[005b6c90, 005b6d20] [005b6d24, 005b6e21] [005b6e25, 005b6eee]]


void FUN_005b6c90(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int in_ECX;
  uint local_23c [4];
  undefined4 local_22c;
  uint local_228;
  undefined4 local_220;
  char local_21c [520];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b625a6;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_009a0940(param_1);
  FUN_0099f770(param_1,0);
  FUN_0043acd0(in_ECX + 0x84,local_23c);
  local_c = 0;
  FUN_009a0940(param_1);
  FUN_0099f770(param_1,0);
  local_c = 0xffffffff;
  if (0xf < local_228) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_23c[0]);
  }
  iVar2 = *(int *)(in_ECX + 0xb0);
  if (iVar2 == 0) {
    FUN_009a0940(param_1);
  }
  else if (iVar2 == 1) {
    FUN_009a0940(param_1);
  }
  else {
    if (iVar2 != 2) goto LAB_005b6d7a;
    FUN_009a0940(param_1);
  }
  FUN_004013e0(param_1);
  FUN_004013e0(param_1);
LAB_005b6d7a:
  FUN_009a0940(param_1);
  FUN_0099f770(param_1,0);
  FUN_009a0940(param_1);
  FUN_0099f770(param_1,0);
  local_228 = 0xf;
  local_22c = 0;
  local_23c[0] = local_23c[0] & 0xffffff00;
  pcVar4 = (char *)(in_ECX + 0x8c);
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00409350((char *)(in_ECX + 0x8c),(int)pcVar4 - (in_ECX + 0x8d));
  local_c = 1;
  FUN_009a0940(param_1);
  FUN_0099f770(param_1,0);
  local_c = 0xffffffff;
  if (0xf < local_228) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_23c[0]);
  }
  FUN_009a0940(param_1);
  FUN_0099f770(param_1,0);
  uVar3 = *(undefined4 *)(in_ECX + 0xd8);
  FUN_009a0940(param_1);
  if (*(char *)(param_1 + 0xc) == '\0') {
    FUN_0098fad0();
  }
  else {
    local_220 = 0xc;
    _sprintf(local_21c,"%d",uVar3);
  }
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  if (*(char *)(in_ECX + 0xd4) == '\0') {
    FUN_0099f470(0);
  }
  if ((*(int *)(in_ECX + 8) != 0) || (*(int *)(in_ECX + 0xc) != 0)) {
    FUN_009a0940(param_1);
    FUN_0099f020(in_ECX + 8);
  }
  ExceptionList = local_14;
  return;
}

