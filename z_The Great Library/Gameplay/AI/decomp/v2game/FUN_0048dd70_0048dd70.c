// FUN_0048dd70 @ 0048dd70 body=[[0048dd70, 0048df72]]


void FUN_0048dd70(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  char cVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  
  FUN_008601b0(param_1 + 0x40);
  puVar1 = (undefined4 *)(param_1 + 0x50);
  FUN_008601b0(puVar1);
  piVar2 = *(int **)(param_1 + 4);
joined_r0x0048dd9e:
  do {
    do {
      if (piVar2 == (int *)0x0) {
        return;
      }
      iVar3 = *piVar2;
      piVar2 = (int *)piVar2[2];
      cVar8 = FUN_004b7550(iVar3);
      if (cVar8 != '\0') {
        piVar4 = *(int **)(param_1 + 0x40);
        while (piVar4 != (int *)0x0) {
          iVar5 = *piVar4;
          piVar4 = (int *)piVar4[2];
          for (piVar6 = *(int **)(iVar5 + 8); piVar6 != (int *)0x0; piVar6 = (int *)piVar6[2]) {
            if (*piVar6 == iVar3) goto LAB_0048de87;
          }
        }
        puVar9 = (undefined4 *)FUN_00aae9af(0x2c);
        if (puVar9 == (undefined4 *)0x0) {
          puVar9 = (undefined4 *)0x0;
        }
        else {
          puVar9[2] = 0;
          puVar9[3] = 0;
          puVar9[4] = 0;
          *(undefined1 *)(puVar9 + 5) = 0;
          puVar9[1] = 0x18d;
          *puVar9 = CAreaBorder::vftable;
          *(undefined1 *)(puVar9 + 6) = 0;
          puVar9[7] = 0x2d2d2d;
          puVar9[8] = 0;
          puVar9[9] = 0;
          *(undefined1 *)(puVar9 + 10) = 0;
        }
        iVar5 = *(int *)(param_1 + 0x44);
        puVar10 = (undefined4 *)FUN_00aae9af(0x10);
        if (puVar10 == (undefined4 *)0x0) {
          puVar10 = (undefined4 *)0x0;
        }
        else {
          *puVar10 = puVar9;
          puVar10[1] = iVar5;
          puVar10[2] = 0;
          *(undefined1 *)(puVar10 + 3) = 0;
        }
        iVar7 = *(int *)(param_1 + 0x48);
        *(undefined4 **)(param_1 + 0x44) = puVar10;
        *(int *)(param_1 + 0x48) = iVar7 + 1;
        if (iVar7 == 0) {
          *(undefined4 **)(param_1 + 0x40) = puVar10;
        }
        else {
          *(undefined4 **)(iVar5 + 8) = puVar10;
        }
        FUN_0048dbb0(puVar9,iVar3);
      }
LAB_0048de87:
    } while (*(int *)(*(int *)(iVar3 + 0x5c) + 0xdc) == 0);
    piVar4 = (int *)*puVar1;
    while (piVar4 != (int *)0x0) {
      iVar5 = *piVar4;
      piVar4 = (int *)piVar4[2];
      for (piVar6 = *(int **)(iVar5 + 8); piVar6 != (int *)0x0; piVar6 = (int *)piVar6[2]) {
        if (*piVar6 == iVar3) goto joined_r0x0048dd9e;
      }
    }
    puVar9 = (undefined4 *)FUN_00aae9af(0x2c);
    if (puVar9 == (undefined4 *)0x0) {
      puVar9 = (undefined4 *)0x0;
    }
    else {
      puVar9[2] = 0;
      puVar9[3] = 0;
      puVar9[4] = 0;
      *(undefined1 *)(puVar9 + 5) = 0;
      puVar9[1] = 0x18d;
      *puVar9 = CAreaBorder::vftable;
      *(undefined1 *)(puVar9 + 6) = 0;
      puVar9[7] = 0x2d2d2d;
      puVar9[8] = 0;
      puVar9[9] = 0;
      *(undefined1 *)(puVar9 + 10) = 0;
    }
    *(undefined1 *)(puVar9 + 6) = 1;
    iVar5 = *(int *)(param_1 + 0x54);
    puVar10 = (undefined4 *)FUN_00aae9af(0x10);
    if (puVar10 == (undefined4 *)0x0) {
      puVar10 = (undefined4 *)0x0;
    }
    else {
      *puVar10 = puVar9;
      puVar10[1] = iVar5;
      puVar10[2] = 0;
      *(undefined1 *)(puVar10 + 3) = 0;
    }
    iVar7 = *(int *)(param_1 + 0x58);
    *(undefined4 **)(param_1 + 0x54) = puVar10;
    *(int *)(param_1 + 0x58) = iVar7 + 1;
    if (iVar7 == 0) {
      *puVar1 = puVar10;
    }
    else {
      *(undefined4 **)(iVar5 + 8) = puVar10;
    }
    FUN_0048dbb0(puVar9,iVar3);
  } while( true );
}

