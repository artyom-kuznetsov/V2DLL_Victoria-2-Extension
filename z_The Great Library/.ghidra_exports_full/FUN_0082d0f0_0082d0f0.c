// FUN_0082d0f0 @ 0082d0f0 body=[[0082d0f0, 0082d15c] [0082d160, 0082d1ac] [0082d1b0, 0082d33d]]


void FUN_0082d0f0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined1 local_14 [4];
  int local_10;
  int local_c;
  int local_8;
  
  iVar6 = DAT_012587e4;
  *(undefined1 *)(param_1 + 0xf7) = 0;
  iVar6 = *(int *)(*(int *)(iVar6 + 4) + *(int *)(param_1 + 0x38) * 4);
  if (((*(int *)(param_1 + 0xb4) < 1) || (local_10 = **(int **)(param_1 + 0xac), local_10 == 0)) ||
     (*(int *)(*(int *)(local_10 + 0xdc) + 0xe8) == 0)) {
    return;
  }
  uVar8 = *(uint *)(iVar6 + 0xda8);
  local_8 = 0;
  local_c = iVar6;
LAB_0082d163:
  do {
    if ((uVar8 < *(uint *)(iVar6 + 0xda8)) || (*(uint *)(iVar6 + 0xdac) <= uVar8)) {
      piVar2 = *(int **)(iVar6 + 0x7b4);
      local_c = 0;
      do {
        while( true ) {
          do {
            if (piVar2 == (int *)0x0) {
              if (local_8 < 1) {
                return;
              }
              if (DAT_00f1f760 <= ((float)local_c / 1000.0) / ((float)local_8 / 1000.0)) {
                return;
              }
              *(undefined1 *)(param_1 + 0xf7) = 1;
              return;
            }
            piVar5 = (int *)*piVar2;
            piVar2 = (int *)piVar2[2];
            cVar4 = (**(code **)(*piVar5 + 0x38))();
          } while ((cVar4 == '\0') || (iVar6 = *(int *)(piVar5[0x37] + 0xe8), iVar6 == 0));
          iVar1 = *(int *)(*(int *)(local_10 + 0xdc) + 0xe8);
          if (iVar6 != iVar1) break;
LAB_0082d2bf:
          piVar5 = (int *)FUN_005cd6f0(local_14,*(int *)(local_10 + 0xdc));
          local_c = local_c + *piVar5;
        }
        for (puVar3 = *(undefined4 **)(iVar6 + 0x14); puVar3 != (undefined4 *)0x0;
            puVar3 = (undefined4 *)puVar3[2]) {
          if (*(int *)*puVar3 == iVar1) goto LAB_0082d2bf;
        }
      } while( true );
    }
    iVar1 = *(int *)(uVar8 + 4);
    iVar7 = *(int *)(*(int *)(*(int *)(iVar6 + 0xbe8) + iVar1 * 4) + 0x34);
    uVar8 = uVar8 + 8;
  } while (iVar7 == 0);
  iVar6 = *(int *)(iVar7 + 0x40);
  iVar7 = *(int *)(iVar7 + 0x3c);
  if (iVar7 == iVar6) goto LAB_0082d1c0;
  do {
    if (*(int *)(iVar7 + 4) == *(int *)(param_1 + 0x38)) break;
    iVar7 = iVar7 + 8;
  } while (iVar7 != iVar6);
  if (iVar7 == iVar6) goto LAB_0082d1c0;
  goto LAB_0082d1d7;
LAB_0082d1c0:
  cVar4 = FUN_0093c6f0(param_1 + 0x34,1,0x8a7);
  iVar6 = local_c;
  if (cVar4 != '\0') {
LAB_0082d1d7:
    piVar2 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + iVar1 * 4) + 0x7b4);
    iVar6 = local_c;
    while (local_c = iVar6, piVar2 != (int *)0x0) {
      piVar5 = (int *)*piVar2;
      piVar2 = (int *)piVar2[2];
      cVar4 = (**(code **)(*piVar5 + 0x38))();
      iVar6 = local_c;
      if ((cVar4 != '\0') && (iVar1 = *(int *)(piVar5[0x37] + 0xe8), iVar1 != 0)) {
        iVar7 = *(int *)(*(int *)(local_10 + 0xdc) + 0xe8);
        if (iVar1 == iVar7) {
LAB_0082d23f:
          piVar5 = (int *)FUN_005cd6f0(local_14,*(int *)(local_10 + 0xdc));
          local_8 = local_8 + *piVar5;
          iVar6 = local_c;
        }
        else {
          for (puVar3 = *(undefined4 **)(iVar1 + 0x14); puVar3 != (undefined4 *)0x0;
              puVar3 = (undefined4 *)puVar3[2]) {
            if (*(int *)*puVar3 == iVar7) goto LAB_0082d23f;
          }
        }
      }
    }
  }
  goto LAB_0082d163;
}

