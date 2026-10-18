// FUN_00a127a0 @ 00a127a0 body=[[00a127a0, 00a127c8] [00a127d0, 00a128da] [00a128de, 00a12914]]


/* WARNING: Removing unreachable block (ram,0x00a128d1) */

void FUN_00a127a0(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  int aiStack_120 [67];
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  puStack_10 = &LAB_00b490cb;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  while( true ) {
    uStack_c = 0xffffffff;
    piVar2 = *(int **)(param_1 + 0x1c);
    if ((char)piVar2[0x44] == '\0') {
      iVar1 = (**(code **)(*piVar2 + 4))();
      piVar2[2] = iVar1;
      if (iVar1 == 0) {
        piVar2[3] = 0x13;
      }
      *(undefined1 *)(piVar2 + 0x44) = 1;
    }
    piVar2 = piVar2 + 3;
    piVar4 = aiStack_120;
    for (iVar1 = 0x41; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar4 = *piVar2;
      piVar2 = piVar2 + 1;
      piVar4 = piVar4 + 1;
    }
    if ((aiStack_120[0] == 4) || (aiStack_120[0] == 0x13)) break;
    (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
    puVar3 = (undefined4 *)(*(int *)(param_1 + 0x1c) + 0xc);
    puVar5 = (undefined4 *)(param_1 + 0x228);
    for (iVar1 = 0x41; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    }
    FUN_00409350(&DAT_00ded94d,0);
    uStack_c = 0;
    FUN_009a2a90(param_1);
    FUN_00a12950(param_2);
  }
  (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
  ExceptionList = pvStack_14;
  return;
}

