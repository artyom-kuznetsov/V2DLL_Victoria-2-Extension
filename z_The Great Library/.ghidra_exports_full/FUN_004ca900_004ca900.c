// FUN_004ca900 @ 004ca900 body=[[004ca900, 004ca9fb] [004ca9ff, 004caa9a]]


void FUN_004ca900(int param_1)

{
  undefined4 uVar1;
  int in_ECX;
  int *piVar2;
  int iVar3;
  undefined4 local_23c [5];
  uint local_228;
  undefined4 local_220;
  char local_21c [520];
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b5af7b;
  pvStack_14 = ExceptionList;
  uVar1 = *(undefined4 *)(in_ECX + 8);
  ExceptionList = &pvStack_14;
  FUN_009a0940(param_1);
  local_220 = 0xc;
  _sprintf(local_21c,"%d",uVar1);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  uVar1 = *(undefined4 *)(in_ECX + 0xc);
  FUN_009a0940(param_1);
  local_220 = 0xc;
  _sprintf(local_21c,"%d",uVar1);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  if (*(int *)(in_ECX + 0x10) != DAT_01259abc) {
    FUN_0043acd0(in_ECX + 0x10,local_23c);
    local_c = 0;
    FUN_009a0940(param_1);
    FUN_0099f770(param_1,0);
    local_c = 0xffffffff;
    if (0xf < local_228) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_23c[0]);
    }
  }
  uVar1 = *(undefined4 *)(in_ECX + 0x14);
  FUN_009a0940(param_1);
  if (*(char *)(param_1 + 0xc) == '\0') {
    FUN_0098fad0();
  }
  else {
    local_220 = 0xc;
    _sprintf(local_21c,"%d",uVar1);
  }
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  piVar2 = (int *)(in_ECX + 0x18);
  iVar3 = 4;
  do {
    if (piVar2[3] != 0) {
      FUN_009a0940(param_1);
      (**(code **)(*piVar2 + 4))(param_1);
    }
    piVar2 = piVar2 + 7;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  ExceptionList = pvStack_14;
  return;
}

