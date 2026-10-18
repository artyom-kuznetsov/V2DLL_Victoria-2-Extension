// FUN_006ae5d0 @ 006ae5d0 body=[[006ae5d0, 006ae636] [006ae640, 006ae721]]


void FUN_006ae5d0(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iStack_28;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b9fb7b;
  pvStack_14 = ExceptionList;
  iVar5 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4);
  piVar6 = *(int **)(iVar5 + 0x9d8);
  ExceptionList = &pvStack_14;
  iVar4 = (**(code **)(*param_1 + 0x80))();
  iStack_28 = 0;
  while ((*(int **)(iVar5 + 0x9d8) <= piVar6 && (piVar6 < *(int **)(iVar5 + 0x9dc)))) {
    puVar1 = *(undefined4 **)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *piVar6 * 4) + 0xd8);
    piVar6 = piVar6 + 1;
    while (puVar1 != (undefined4 *)0x0) {
      piVar2 = (int *)*puVar1;
      puVar1 = (undefined4 *)puVar1[2];
      cVar3 = (**(code **)(*piVar2 + 0x34))();
      if (cVar3 != '\0') {
        if (iStack_28 == iVar4) {
          iVar5 = FUN_00aae9af();
          uStack_c = 0;
          if (iVar5 != 0) {
            FUN_0057e6b0(iVar5,*(undefined4 *)(DAT_012588e8 + 0xb5c),
                         *(undefined4 *)(DAT_012588e8 + 0xb60));
          }
          uStack_c = 0xffffffff;
          iVar5 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
          (**(code **)(**(int **)(iVar5 + 0x38) + 0x18))();
          ExceptionList = pvStack_14;
          return;
        }
        iStack_28 = iStack_28 + 1;
      }
    }
  }
  ExceptionList = pvStack_14;
  return;
}

