// FUN_0085d6c0 @ 0085d6c0 body=[[0085d6c0, 0085d6f8] [0085d700, 0085d735] [0085d740, 0085d7e6] [0085d7f0, 0085d908]]


void FUN_0085d6c0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  uint uVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  
  iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4);
  if (*(char *)(iVar1 + 0x67c) != '\0') {
    uVar13 = *(uint *)(iVar1 + 0xda8);
LAB_0085d703:
    if ((*(uint *)(iVar1 + 0xda8) <= uVar13) && (uVar13 < *(uint *)(iVar1 + 0xdac))) {
      iVar2 = *(int *)(uVar13 + 4);
      uVar13 = uVar13 + 8;
      puVar14 = *(undefined4 **)(iVar1 + 0xd88);
LAB_0085d743:
      do {
        puVar15 = puVar14;
        if ((puVar15 < *(undefined4 **)(iVar1 + 0xd88)) ||
           (*(undefined4 **)(iVar1 + 0xd8c) <= puVar15)) goto LAB_0085d703;
        uVar3 = *puVar15;
        iVar4 = puVar15[1];
        iVar5 = *(int *)(*(int *)(iVar1 + 0xbe8) + iVar4 * 4);
        puVar14 = puVar15 + 2;
      } while (*(int *)(iVar5 + 0x34) != 0);
      iVar6 = *(int *)(*(int *)(DAT_012587e4 + 4) + iVar2 * 4);
      iVar7 = *(int *)(iVar6 + 0xd8c);
      iVar12 = *(int *)(iVar6 + 0xd88);
      if (iVar12 != iVar7) {
        do {
          if (*(int *)(iVar12 + 4) == iVar4) break;
          iVar12 = iVar12 + 8;
        } while (iVar12 != iVar7);
        if (((iVar12 != iVar7) && (*(char *)(iVar5 + 0x60) == '\0')) &&
           (*(int *)(iVar5 + 0x20) == 0)) {
          FUN_0085c1d0(param_1,*puVar15,puVar15[1]);
          goto LAB_0085d743;
        }
      }
      puVar15 = *(undefined4 **)(iVar6 + 0xd88);
LAB_0085d7f6:
      do {
        if ((puVar15 < *(undefined4 **)(iVar6 + 0xd88)) ||
           (*(undefined4 **)(iVar6 + 0xd8c) <= puVar15)) goto LAB_0085d743;
        uVar8 = *puVar15;
        uVar9 = puVar15[1];
        iVar7 = *(int *)(*(int *)(iVar1 + 0xbe8) + uVar9 * 4);
        puVar15 = puVar15 + 2;
        if ((*(int *)(iVar7 + 0x34) == 0) && (uVar9 != *(uint *)(param_1 + 0xc))) {
          iVar12 = *(int *)(*(int *)(DAT_012587e4 + 4) + iVar4 * 4);
          iVar10 = *(int *)(iVar12 + 0xd8c);
          iVar12 = *(int *)(iVar12 + 0xd88);
          if (iVar12 != iVar10) {
            do {
              if (*(uint *)(iVar12 + 4) == uVar9) break;
              iVar12 = iVar12 + 8;
            } while (iVar12 != iVar10);
            if (iVar12 != iVar10) {
              iVar12 = FUN_0085b9f0(uVar3,iVar4);
              if (((iVar12 == 0) && (*(char *)(iVar5 + 0x60) == '\0')) &&
                 (*(int *)(iVar5 + 0x20) == 0)) {
                FUN_0085c1d0(param_1,uVar3,iVar4);
              }
              for (piVar11 = *(int **)(*(int *)(param_1 + 0xe4) +
                                      (uVar9 % *(uint *)(param_1 + 0xe0)) * 4);
                  piVar11 != (int *)0x0; piVar11 = (int *)piVar11[1]) {
                iVar12 = *piVar11;
                if (*(uint *)(iVar12 + 0xc) == uVar9) {
                  if ((iVar12 != 0) && (*(int *)(iVar12 + 0x10) != 0)) goto LAB_0085d7f6;
                  break;
                }
              }
              if ((*(char *)(iVar7 + 0x60) == '\0') && (*(int *)(iVar7 + 0x20) == 0)) {
                FUN_0085c1d0(param_1,uVar8,uVar9);
              }
            }
          }
        }
      } while( true );
    }
  }
  return;
}

