// FUN_0048e960 @ 0048e960 body=[[0048e960, 0048e9ba] [0048e9c4, 0048e9d7] [0048e9e0, 0048ea5f]]


void FUN_0048e960(undefined4 *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b5b740;
  piVar1 = *(int **)(param_2 + 4);
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  while (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    piVar1 = (int *)piVar1[2];
    (**(code **)*param_1)(iVar2);
    *(undefined4 **)(iVar2 + 0xe8) = param_1;
  }
  if (*(int *)(param_2 + 4) == 0) {
    *(undefined4 *)(param_2 + 4) = 0;
    *(undefined4 *)(param_2 + 8) = 0;
    *(undefined4 *)(param_2 + 0xc) = 0;
    puVar4 = *(undefined4 **)(param_2 + 0x14);
    while (puVar4 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)puVar4[2];
      piVar1 = (int *)*puVar4;
      puVar4 = puVar3;
      if ((undefined4 *)*piVar1 != param_1) {
        FUN_0048e260(piVar1[1]);
        for (piVar1 = *(int **)(*piVar1 + 0x14);
            (piVar1 != (int *)0x0 && (*(int *)*piVar1 != param_2)); piVar1 = (int *)piVar1[2]) {
        }
        iVar2 = *piVar1;
        FUN_0048e260(*(undefined4 *)(iVar2 + 4));
        FUN_0048e260(-*(int *)(iVar2 + 4));
      }
    }
    FUN_00490010(param_2 + 0x14);
    FUN_0048dff0();
    ExceptionList = pvStack_14;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(*(int *)(param_2 + 4));
}

