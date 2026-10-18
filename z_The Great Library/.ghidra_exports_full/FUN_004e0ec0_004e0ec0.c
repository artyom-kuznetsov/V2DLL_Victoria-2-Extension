// FUN_004e0ec0 @ 004e0ec0 body=[[004e0ec0, 004e0f4c] [004e0f50, 004e0fa1] [004e0fa5, 004e1013] [004e1017, 004e1158] [004e1160, 004e127f] [004e1283, 004e1299]]


/* WARNING: Removing unreachable block (ram,0x004e100a) */
/* WARNING: Removing unreachable block (ram,0x004e0f98) */

void FUN_004e0ec0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  int in_ECX;
  int iVar7;
  undefined4 local_244;
  undefined4 local_240;
  undefined4 uStack_23c;
  uint uStack_228;
  undefined4 local_220;
  char local_21c [256];
  undefined4 uStack_11c;
  char acStack_118 [260];
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b62701;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  FUN_009a0940(param_1);
  FUN_0099f020(in_ECX + 8);
  FUN_009a0940(param_1);
  FUN_0099f770(param_1,0);
  FUN_009a0940(param_1);
  FUN_0099f770(param_1,0);
  pcVar5 = (char *)(in_ECX + 0x38);
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00409350((char *)(in_ECX + 0x38),(int)pcVar5 - (in_ECX + 0x39));
  local_c = 0;
  FUN_009a0940(param_1);
  FUN_0099f770(param_1,0);
  local_c = 0xffffffff;
  pcVar5 = (char *)(in_ECX + 0x44);
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00409350((char *)(in_ECX + 0x44),(int)pcVar5 - (in_ECX + 0x45));
  local_c = 1;
  FUN_009a0940(param_1);
  FUN_0099f770(param_1,0);
  local_c = 0xffffffff;
  FUN_009a0940(param_1);
  FUN_0099f770(param_1,0);
  FUN_009a0940(param_1);
  FUN_0099f770(param_1,0);
  FUN_009a0940(param_1);
  FUN_0099f770(param_1,0);
  uVar2 = *(undefined4 *)(*(int *)(in_ECX + 0x34) + 0x58);
  FUN_009a0940(param_1);
  local_220 = 0xc;
  _sprintf(local_21c,"%d",uVar2);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  FUN_009a0940(param_1);
  FUN_0099f020(in_ECX + 0x78);
  FUN_009a0940(param_1);
  if (*(char *)(param_1 + 0xc) == '\0') {
    local_220 = 399;
  }
  else {
    local_220 = 0xc;
  }
  _sprintf(local_21c,"%lld",*(undefined4 *)(in_ECX + 0xb8),*(undefined4 *)(in_ECX + 0xbc));
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  iVar4 = *(int *)(in_ECX + 0x80);
  while (iVar4 != 0) {
    iVar7 = *(int *)(iVar4 + 0xc);
    FUN_009a0940(param_1);
    FUN_0099f020(iVar4);
    iVar4 = iVar7;
  }
  for (piVar3 = *(int **)(in_ECX + 0xa4); piVar3 != (int *)0x0; piVar3 = (int *)piVar3[2]) {
    local_244 = *(undefined4 *)(*piVar3 + 8);
    local_240 = *(undefined4 *)(*piVar3 + 0xc);
    FUN_009a0940(param_1);
    FUN_0099f020(&local_244);
  }
  FUN_00409c60(param_1);
  iVar7 = *(int *)(in_ECX + 0xd8) - *(int *)(in_ECX + 0xd4);
  iVar4 = iVar7 >> 0x1f;
  if (iVar7 / 0x1c + iVar4 != iVar4) {
    FUN_009a0940(param_1);
    (**(code **)(*(int *)(in_ECX + 0xcc) + 4))(param_1);
  }
  uVar2 = *(undefined4 *)(in_ECX + 0xe4);
  FUN_009a0940(param_1);
  local_220 = 0xc;
  _sprintf(local_21c,"%d",uVar2);
  FUN_0099ff90(param_1);
  puVar6 = (undefined4 *)FUN_00990880();
  local_c = 2;
  uStack_11c = 0x10;
  if (0xf < (uint)puVar6[5]) {
    puVar6 = (undefined4 *)*puVar6;
  }
  __snprintf(acStack_118,0xff,"%s",puVar6);
  FUN_0099ff90(param_1);
  if (uStack_228 < 0x10) {
    ExceptionList = pvStack_14;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(uStack_23c);
}

