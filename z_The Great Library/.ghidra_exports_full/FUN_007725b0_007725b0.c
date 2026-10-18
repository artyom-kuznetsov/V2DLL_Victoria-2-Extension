// FUN_007725b0 @ 007725b0 body=[[007725b0, 00772789] [0077278d, 007727f2]]


void FUN_007725b0(void)

{
  int *piVar1;
  int iVar2;
  uint unaff_EBX;
  int unaff_EDI;
  uint uStack_28;
  void *pvStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b59a4f;
  pvStack_14 = ExceptionList;
  iVar2 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(unaff_EDI + 0x5f8) * 4);
  ExceptionList = &pvStack_14;
  for (piVar1 = *(int **)(iVar2 + 0x9d8);
      (*(int **)(iVar2 + 0x9d8) <= piVar1 && (piVar1 < *(int **)(iVar2 + 0x9dc)));
      piVar1 = piVar1 + 1) {
    *(undefined1 *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *piVar1 * 4) + 0xc) = 0;
  }
  piVar1 = (int *)(**(code **)(**(int **)(unaff_EDI + 4) + 0x44))();
  (**(code **)(*piVar1 + 8))();
  iVar2 = (**(code **)(**(int **)(unaff_EDI + 4) + 0x44))();
  (**(code **)(**(int **)(iVar2 + 0x38) + 0xc))();
  if (DAT_012589ac == 0) {
    iVar2 = FUN_00aae9af();
    pvStack_14 = (void *)0x0;
    if (iVar2 != 0) {
      uStack_28 = 0xf;
      FUN_00409350();
      unaff_EBX = 1;
      pvStack_14 = (void *)0x2;
      FUN_00408ed0();
      pvStack_14 = (void *)0x3;
      FUN_00409350();
      pvStack_14._0_1_ = 4;
      FUN_00409350("Launch",6);
      pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,1);
      FUN_009aeb90(iVar2);
    }
    pvStack_14 = (void *)0xffffffff;
    if (((unaff_EBX & 1) != 0) && (0xf < uStack_28)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    (**(code **)(**(int **)(unaff_EDI + 4) + 0x48))();
    if (DAT_012589ac == 0) {
      iVar2 = *(int *)(unaff_EDI + 4);
      *(undefined1 *)(DAT_012588e8 + 3000) = 0;
      *(undefined1 *)(iVar2 + 0x5c) = 0;
      goto LAB_007727d8;
    }
  }
  iVar2 = *(int *)(unaff_EDI + 4);
  *(undefined1 *)(DAT_012588e8 + 3000) = 1;
  *(undefined1 *)(iVar2 + 0x5c) = 1;
LAB_007727d8:
  *(undefined1 *)(*(int *)(unaff_EDI + 4) + 0x761) = 1;
  ExceptionList = pvStack_1c;
  return;
}

