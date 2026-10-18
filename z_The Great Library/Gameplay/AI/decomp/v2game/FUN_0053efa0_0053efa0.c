// FUN_0053efa0 @ 0053efa0 body=[[0053efa0, 0053f09e] [0053f0a2, 0053f0b6]]


uint FUN_0053efa0(int param_1)

{
  int iVar1;
  uint uVar2;
  int unaff_ESI;
  int iVar3;
  uint auStack_34 [4];
  undefined4 uStack_24;
  uint uStack_20;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00bbc108;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  uVar2 = (**(code **)(**(int **)(unaff_ESI + 0x84c) + 0x20))();
  if ((char)uVar2 != '\0') {
    iVar3 = 0;
    uStack_20 = 0xf;
    uStack_24 = 0;
    auStack_34[0] = auStack_34[0] & 0xffffff00;
    uVar2 = FUN_00408ed0();
    iVar1 = DAT_012588e8;
    uStack_c = 0;
    if (0 < (int)(*(int *)(unaff_ESI + 0x9dc) - *(int *)(unaff_ESI + 0x9d8) & 0xfffffffcU)) {
      do {
        __alldiv(param_1 * -0x40000000,
                 ((int)(1000U - param_1) >> 0x1f) << 0x1e | 1000U - param_1 >> 2,0x1f40000,0);
        uVar2 = FUN_004bd400(*(undefined4 *)
                              (*(int *)(iVar1 + 0xacc) +
                              *(int *)(*(int *)(unaff_ESI + 0x9d8) + iVar3 * 4) * 4),auStack_34);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(unaff_ESI + 0x9dc) - *(int *)(unaff_ESI + 0x9d8) >> 2);
    }
    if (0xf < uStack_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  ExceptionList = pvStack_14;
  return uVar2 & 0xffffff00;
}

