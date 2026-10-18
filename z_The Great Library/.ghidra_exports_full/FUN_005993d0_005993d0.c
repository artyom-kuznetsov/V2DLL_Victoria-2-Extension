// FUN_005993d0 @ 005993d0 body=[[005993d0, 005994f1] [005994f5, 00599528]]


void FUN_005993d0(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  void **ppvVar3;
  int iVar4;
  undefined4 *puVar5;
  int in_ECX;
  int iVar6;
  undefined4 uStack_23c;
  uint uStack_228;
  char acStack_21c [256];
  undefined4 uStack_11c;
  char acStack_118 [260];
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b5af7b;
  pvStack_14 = ExceptionList;
  iVar4 = *(int *)(in_ECX + 0x6c);
  iVar6 = 0;
  ExceptionList = &pvStack_14;
  ppvVar3 = &pvStack_14;
  if (0 < (int)(*(int *)(in_ECX + 0x70) - iVar4 & 0xfffffffcU)) {
    do {
      piVar1 = *(int **)(iVar4 + iVar6 * 4);
      FUN_009a0940(param_1);
      (**(code **)(*piVar1 + 4))(param_1);
      iVar4 = *(int *)(in_ECX + 0x6c);
      iVar6 = iVar6 + 1;
      ppvVar3 = ExceptionList;
    } while (iVar6 < *(int *)(in_ECX + 0x70) - iVar4 >> 2);
  }
  ExceptionList = ppvVar3;
  uVar2 = *(undefined4 *)(in_ECX + 0x7c);
  FUN_009a0940(param_1);
  if (*(char *)(param_1 + 0xc) == '\0') {
    FUN_0098fad0();
  }
  else {
    _sprintf(acStack_21c,"%d",uVar2);
  }
  FUN_0099ff90(param_1);
  puVar5 = (undefined4 *)FUN_00990880();
  uStack_c = 0;
  uStack_11c = 0x10;
  if (0xf < (uint)puVar5[5]) {
    puVar5 = (undefined4 *)*puVar5;
  }
  __snprintf(acStack_118,0xff,"%s",puVar5);
  FUN_0099ff90(param_1);
  uStack_c = 0xffffffff;
  if (0xf < uStack_228) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_23c);
  }
  FUN_00594010(param_1);
  ExceptionList = pvStack_14;
  return;
}

