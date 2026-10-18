// FUN_0059c8b0 @ 0059c8b0 body=[[0059c8b0, 0059c9cc] [0059c9d0, 0059ca3d]]


void FUN_0059c8b0(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b59050;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  iVar2 = (**(code **)(*param_1 + 0x24))();
  if (iVar2 == 1) {
    cVar1 = (**(code **)(*(int *)param_1[5] + 0x3c))();
    if ((cVar1 == '\0') && (*(char *)(param_1[5] + 0x68) == '\0')) {
      cVar1 = (**(code **)(*(int *)param_1[4] + 0x3c))();
      if (((cVar1 != '\0') || (*(char *)(param_1[4] + 0x68) != '\0')) &&
         (piVar4 = *(int **)(param_1[5] + 0x20), piVar4 != (int *)0x0)) {
        do {
          iVar2 = *piVar4;
          piVar4 = (int *)piVar4[2];
          if (*(int *)(iVar2 + 0xec) < 1) {
            if (*(char *)(iVar2 + 0x19c) != '\0') {
              *(undefined1 *)(iVar2 + 0x19c) = 0;
            }
            FUN_005c6740();
            if ((((*(int *)(iVar2 + 0xec) < 1) && (*(char *)(iVar2 + 0x104) == '\0')) &&
                ((*(char *)(iVar2 + 0x164) == '\0' &&
                 ((piVar3 = (int *)FUN_005cd690(iVar2), DAT_0125ff7c < *piVar3 &&
                  (*(int *)(iVar2 + 0x70) == 0)))))) && (*(int *)(param_1[6] + 0x110) == 0)) {
              *(undefined4 *)(iVar2 + 0x70) = 0;
            }
            *(undefined4 *)(iVar2 + 0x74) = 0;
          }
        } while (piVar4 != (int *)0x0);
        ExceptionList = pvStack_14;
        return;
      }
    }
    else {
      piVar4 = *(int **)(param_1[4] + 0x20);
      while (piVar4 != (int *)0x0) {
        iVar2 = *piVar4;
        piVar4 = (int *)piVar4[2];
        if (*(int *)(iVar2 + 0xec) < 1) {
          if (*(char *)(iVar2 + 0x19c) != '\0') {
            *(undefined1 *)(iVar2 + 0x19c) = 0;
          }
          FUN_005c6740();
          if ((*(int *)(param_1[6] + 0x110) != 0) &&
             (*(int *)(iVar2 + 0xc4) == *(int *)(param_1[6] + 0x134))) {
            *(undefined4 *)(iVar2 + 0x70) = 0;
            FUN_004b7910();
          }
          *(undefined4 *)(iVar2 + 0x74) = 0;
        }
      }
    }
  }
  ExceptionList = pvStack_14;
  return;
}

