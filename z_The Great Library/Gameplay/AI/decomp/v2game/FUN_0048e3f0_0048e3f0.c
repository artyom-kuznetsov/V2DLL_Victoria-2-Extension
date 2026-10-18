// FUN_0048e3f0 @ 0048e3f0 body=[[0048e3f0, 0048e483] [0048e488, 0048e4a9]]


void FUN_0048e3f0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_00b5b728;
  pvStack_14 = ExceptionList;
  piVar1 = *(int **)(param_1 + 4);
  ExceptionList = &pvStack_14;
  while (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    piVar1 = (int *)piVar1[2];
    *(undefined4 *)(iVar2 + 0xe8) = 0;
  }
  local_c = 7;
  puVar3 = *(undefined4 **)(param_1 + 4);
  puVar4 = (undefined4 *)FUN_00aae9af(0x10);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = *puVar3;
    puVar4[1] = 0;
    puVar4[2] = 0;
    *(undefined1 *)(puVar4 + 3) = 0;
  }
  *(int *)(**(int **)(param_1 + 4) + 0xe8) = param_1;
  if (puVar4[2] != 0) {
    *(undefined4 *)(puVar4[2] + 4) = 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(puVar4);
}

