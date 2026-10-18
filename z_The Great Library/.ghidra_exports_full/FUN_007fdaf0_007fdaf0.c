// FUN_007fdaf0 @ 007fdaf0 body=[[007fdaf0, 007fe1e5]]


void FUN_007fdaf0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iStack_144;
  int iStack_140;
  undefined1 auStack_40 [28];
  undefined1 auStack_24 [32];
  
  iVar2 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x124))();
  if (*(char *)(*(int *)(iVar2 + 0x20) + 0x67) != '\0') {
    (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x124))();
  }
  iVar2 = FUN_00565b70();
  iVar4 = 0;
  iVar6 = *(int *)(iVar2 + 0x10) - *(int *)(iVar2 + 0xc) >> 2;
  if (0 < iVar6) {
    do {
      iVar7 = DAT_01258804;
      if ((-1 < iVar4) && (iVar4 < iVar6)) {
        iVar7 = *(int *)(*(int *)(iVar2 + 0xc) + iVar4 * 4);
      }
      if (*(int *)(iVar7 + 0xec) != 0) {
        if ((iVar4 < 0) || (iVar6 <= iVar4)) {
          iStack_140 = DAT_01258804;
        }
        else {
          iStack_140 = *(int *)(*(int *)(iVar2 + 0xc) + iVar4 * 4);
        }
        if (iStack_140 == 0) {
          return;
        }
        iVar2 = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c) >> 2;
        iStack_144 = 1;
        if (1 < iVar2) {
          do {
            iVar4 = *(int *)(*(int *)(*(int *)(param_1 + 0x1c) + iStack_144 * 4) + 0xc);
            cVar1 = (**(code **)(**(int **)(iVar4 + 0x188) + 0x24))();
            if (cVar1 == '\0') {
              if ((*(int *)(iVar4 + 0x164) != 0) && (**(int **)(iVar4 + 0x15c) != 0)) {
                iVar6 = 0;
                piVar5 = (int *)(**(int **)(iVar4 + 0x15c) + 0x98);
                do {
                  if (*piVar5 != 0) {
                    FUN_009b7270(auStack_40);
                    FUN_009b7270(auStack_24);
                    break;
                  }
                  iVar6 = iVar6 + 1;
                  piVar5 = piVar5 + 7;
                } while (iVar6 < 4);
              }
            }
            else if (*(char *)(*(int *)(iVar4 + 0x188) + 0x27c) != '\0') {
              FUN_009b7270(auStack_40);
              FUN_009b7270(auStack_24);
              FUN_00563fb0(iStack_140,iVar4);
            }
            uVar3 = FUN_009b6df0();
            **(undefined4 **)(*(int *)(param_1 + 0x1c) + iStack_144 * 4) = uVar3;
            uVar3 = FUN_009b6df0();
            iVar4 = iStack_144 * 4;
            iStack_144 = iStack_144 + 1;
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar4) + 4) = uVar3;
          } while (iStack_144 < iVar2);
        }
        if (*(int *)(*(int *)(DAT_012588e8 + 0xcf8) + 8) == 0) {
          return;
        }
        iVar2 = *(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                                 *(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xcf8) + 8) + 8) * 4) +
                        0x188);
        if (iVar2 == 0) {
          return;
        }
        piVar5 = *(int **)(iVar2 + 0x48);
        while( true ) {
          if (piVar5 < *(int **)(iVar2 + 0x48)) {
            return;
          }
          if (*(int **)(iVar2 + 0x4c) <= piVar5) break;
          iVar4 = *piVar5;
          piVar5 = piVar5 + 1;
          FUN_009b7270(auStack_40);
          uVar3 = FUN_009b6df0();
          **(undefined4 **)(*(int *)(param_1 + 0x1c) + iVar4 * 4) = uVar3;
          *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar4 * 4) + 4) = uVar3;
        }
        return;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar6);
  }
  return;
}

