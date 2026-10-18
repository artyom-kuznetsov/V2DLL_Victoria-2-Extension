// FUN_00896b50 @ 00896b50 body=[[00896b50, 00896c45] [00896c4f, 00896cba]]


void FUN_00896b50(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  char cVar6;
  int iVar7;
  int local_20;
  
  iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4);
  local_20 = 0;
  iVar7 = (**(code **)(*DAT_012588e8 + 0x1c))();
  if (0 < iVar7) {
    do {
      iVar2 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + local_20 * 4) + 0x20);
      if (iVar2 != *(int *)(param_1 + 0xc)) {
        piVar3 = *(int **)(*(int *)(*(int *)(iVar1 + 0xbe8) + iVar2 * 4) + 0x20);
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 0x2c))();
          piVar5 = DAT_012588e8;
          for (puVar4 = (undefined4 *)DAT_012588e8[0x2a1]; puVar4 != (undefined4 *)0x0;
              puVar4 = (undefined4 *)puVar4[2]) {
            if ((int *)*puVar4 == piVar3) {
              if (puVar4 != (undefined4 *)0x0) {
                if ((char)DAT_012588e8[0x2a4] == '\0') {
                  iVar1 = puVar4[1];
                  iVar7 = puVar4[2];
                  if (iVar1 != 0) {
                    *(int *)(iVar1 + 8) = iVar7;
                  }
                  if (iVar7 != 0) {
                    *(int *)(iVar7 + 4) = iVar1;
                  }
                  if (puVar4 == (undefined4 *)piVar5[0x2a1]) {
                    piVar5[0x2a1] = iVar7;
                  }
                  if (puVar4 == (undefined4 *)piVar5[0x2a2]) {
                    piVar5[0x2a2] = iVar1;
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_00aae91b(puVar4);
                }
                *(undefined1 *)(puVar4 + 3) = 1;
              }
              break;
            }
          }
          (**(code **)*piVar3)(1);
          FUN_00515490(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + iVar2 * 4));
        }
        cVar6 = FUN_0043a860();
        do {
        } while (cVar6 != '\0');
      }
      local_20 = local_20 + 1;
    } while (local_20 < iVar7);
  }
  FUN_00515490(iVar1);
  return;
}

