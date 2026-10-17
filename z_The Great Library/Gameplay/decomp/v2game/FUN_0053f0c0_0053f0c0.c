// FUN_0053f0c0 @ 0053f0c0  (requested 0053F0C0, first bytes: 55 8B EC 83 E4 F8 64 A1)


/* WARNING: Removing unreachable block (ram,0x0053f184) */
/* WARNING: Removing unreachable block (ram,0x0053f1aa) */
/* WARNING: Removing unreachable block (ram,0x0053f1cf) */

void FUN_0053f0c0(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  void **ppvVar7;
  char cVar8;
  int iVar9;
  uint auStack_34 [4];
  undefined4 uStack_24;
  uint uStack_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b4fe40;
  ppvVar7 = &local_14;
  piVar6 = *(int **)(param_1 + 0x148c);
  local_14 = ExceptionList;
  while( true ) {
    do {
      do {
        ExceptionList = ppvVar7;
        if (piVar6 == (int *)0x0) {
          ExceptionList = local_14;
          return;
        }
        piVar1 = (int *)piVar6[2];
        iVar2 = *piVar6;
        piVar3 = *(int **)(*(int *)(*(int *)(DAT_012588e8 + 0xbf0) + *(int *)(param_1 + 0x20) * 0x10
                                   ) + *(int *)(iVar2 + 0x6c) * 4);
        ppvVar7 = ExceptionList;
        piVar6 = piVar1;
      } while ((piVar3 == (int *)0x0) ||
              (cVar8 = (**(code **)(*piVar3 + 0x34))(), ppvVar7 = ExceptionList, cVar8 == '\0'));
      FUN_00409350();
      iVar4 = piVar3[0x41];
      iVar9 = FUN_00414bd0();
      uStack_c = 0xffffffff;
      ppvVar7 = ExceptionList;
    } while (iVar9 == 0 && iVar4 == 0);
    FUN_004a83d0();
    uStack_c = 1;
    piVar1 = *(int **)(iVar2 + 8);
    while (piVar1 != (int *)0x0) {
      iVar2 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *piVar1 * 4);
      piVar1 = (int *)piVar1[2];
      if (*(int *)(iVar2 + 0x134) == *(int *)(param_1 + 0x20)) {
        uVar5 = piVar3[0x44];
        __alldiv(uVar5 << 0x1e,
                 (((int)uVar5 >> 0x1f) << 0xf | uVar5 >> 0x11) << 0xf | (uVar5 & 0x1ffff) >> 2,
                 0x1f40000,0);
        FUN_004bd400(iVar2,auStack_34);
      }
    }
    uStack_c = 0xffffffff;
    if (0xf < uStack_20) break;
    uStack_20 = 0xf;
    uStack_24 = 0;
    auStack_34[0] = auStack_34[0] & 0xffffff00;
    ppvVar7 = ExceptionList;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

