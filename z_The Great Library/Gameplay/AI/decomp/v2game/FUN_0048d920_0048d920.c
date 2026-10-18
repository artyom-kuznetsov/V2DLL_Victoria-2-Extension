// FUN_0048d920 @ 0048d920 body=[[0048d920, 0048d988] [0048d99c, 0048da18] [0048da22, 0048da3e] [0048da57, 0048da6b] [0048da77, 0048da9c]]


void FUN_0048d920(void)

{
  int *piVar1;
  void **ppvVar2;
  int iVar3;
  int iVar4;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  piVar1 = DAT_012587e4;
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b5b740;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if ((DAT_012587e4 != (int *)0x0) &&
     (iVar3 = 0, ExceptionList = &pvStack_14, ppvVar2 = &pvStack_14, 0 < *DAT_012587e4)) {
    do {
      ExceptionList = ppvVar2;
      iVar4 = *(int *)(piVar1[1] + *(int *)(*(int *)(piVar1[1] + iVar3 * 4) + 0x20) * 4);
      if (*(int *)(iVar4 + 0xa08) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(*(int *)(iVar4 + 0xa08));
      }
      iVar3 = iVar3 + 1;
      *(undefined4 *)(iVar4 + 0xa08) = 0;
      *(undefined4 *)(iVar4 + 0xa0c) = 0;
      *(undefined4 *)(iVar4 + 0xa10) = 0;
      ppvVar2 = ExceptionList;
    } while (iVar3 < *piVar1);
  }
  iVar4 = 0;
  iVar3 = (**(code **)(*DAT_012588e8 + 0x18))();
  if (0 < iVar3) {
    do {
      iVar3 = *(int *)(*(int *)(DAT_012588e8[0x2b3] + iVar4 * 4) + 0xe8);
      if (iVar3 != 0) {
        piVar1 = *(int **)(iVar3 + 4);
        while (piVar1 != (int *)0x0) {
          iVar4 = *piVar1;
          piVar1 = (int *)piVar1[2];
          *(undefined4 *)(iVar4 + 0xe8) = 0;
        }
        if (*(int *)(iVar3 + 4) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(*(int *)(iVar3 + 4));
        }
        *(undefined4 *)(iVar3 + 4) = 0;
        *(undefined4 *)(iVar3 + 8) = 0;
        *(undefined4 *)(iVar3 + 0xc) = 0;
        if (*(undefined4 **)(iVar3 + 0x14) != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(**(undefined4 **)(iVar3 + 0x14));
        }
        *(undefined4 *)(iVar3 + 0x14) = 0;
        *(undefined4 *)(iVar3 + 0x18) = 0;
        *(undefined4 *)(iVar3 + 0x1c) = 0;
        FUN_0048d4e0(iVar3);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(iVar3);
      }
      iVar4 = iVar4 + 1;
      iVar3 = (**(code **)(*DAT_012588e8 + 0x18))();
    } while (iVar4 < iVar3);
  }
  ExceptionList = pvStack_14;
  return;
}

