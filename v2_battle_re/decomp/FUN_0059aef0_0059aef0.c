// FUN_0059aef0 @ 0059aef0

void FUN_0059aef0(undefined4 param_1)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  int in_EAX;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  
  bVar2 = false;
  uVar4 = 0;
  do {
    uVar1 = uVar4 + 1;
    iVar5 = ((int)uVar1 / 2) * ((uint)((uVar4 & 1) == 0) * 2 + -1);
    iVar9 = *(int *)(in_EAX + 0xac + iVar5 * 4);
    iVar5 = iVar5 + 0x10;
    cVar3 = (**(code **)(**(int **)(in_EAX + 0x1c) + 0x2c))();
    if (cVar3 == '\0') {
LAB_0059afc0:
      if ((iVar9 != 0) && (!bVar2)) {
        iVar6 = *(int *)(iVar9 + 0x38);
        FUN_00401000(0x42c90000);
        iVar8 = FUN_00b31c00();
        if ((*(int *)(iVar9 + 0x3c) < iVar8) || (*(int *)(iVar9 + 0x40) < 1000)) {
LAB_0059b028:
          iVar6 = *(int *)(in_EAX + 0x170);
          piVar7 = (int *)FUN_00aae9af(0x10);
          if (piVar7 == (int *)0x0) {
            piVar7 = (int *)0x0;
          }
          else {
            *piVar7 = iVar9;
            piVar7[1] = iVar6;
            piVar7[2] = 0;
            *(undefined1 *)(piVar7 + 3) = 0;
          }
          iVar9 = *(int *)(in_EAX + 0x174);
          *(int **)(in_EAX + 0x170) = piVar7;
          *(int *)(in_EAX + 0x174) = iVar9 + 1;
          if (iVar9 == 0) {
            *(int **)(in_EAX + 0x16c) = piVar7;
          }
          else {
            *(int **)(iVar6 + 8) = piVar7;
          }
          bVar2 = true;
          goto LAB_0059b075;
        }
        if (iVar6 != 0) {
          iVar6 = FUN_0059b610(param_1,iVar5);
          if (iVar6 == 0) goto LAB_0059b028;
        }
      }
    }
    else if (iVar9 != 0) {
      FUN_00401000(0x42c90000);
      iVar6 = FUN_00b31c00();
      if ((iVar6 <= *(int *)(iVar9 + 0x3c)) && (999 < *(int *)(iVar9 + 0x40))) goto LAB_0059afc0;
      iVar6 = *(int *)(in_EAX + 0x180);
      piVar7 = (int *)FUN_00aae9af(0x10);
      if (piVar7 == (int *)0x0) {
        piVar7 = (int *)0x0;
      }
      else {
        *piVar7 = iVar9;
        piVar7[1] = iVar6;
        piVar7[2] = 0;
        *(undefined1 *)(piVar7 + 3) = 0;
      }
      iVar9 = *(int *)(in_EAX + 0x184);
      *(int **)(in_EAX + 0x180) = piVar7;
      *(int *)(in_EAX + 0x184) = iVar9 + 1;
      if (iVar9 == 0) {
        *(int **)(in_EAX + 0x17c) = piVar7;
      }
      else {
        *(int **)(iVar6 + 8) = piVar7;
      }
LAB_0059b075:
      *(undefined4 *)(in_EAX + 0x6c + iVar5 * 4) = 0;
    }
    FUN_0059b0e0();
    uVar4 = uVar1;
  } while ((int)uVar1 < 0x1e);
  FUN_0059b190(param_1);
  iVar9 = 1;
  piVar7 = (int *)(in_EAX + 0x70);
  do {
    if (iVar9 < 0xf) {
      if ((*piVar7 == 0) && (iVar5 = piVar7[-1], iVar5 != 0)) {
        piVar7[-1] = 0;
LAB_0059b0c8:
        *piVar7 = iVar5;
      }
    }
    else if ((*piVar7 == 0) && (iVar5 = piVar7[1], iVar5 != 0)) {
      piVar7[1] = 0;
      goto LAB_0059b0c8;
    }
    iVar9 = iVar9 + 1;
    piVar7 = piVar7 + 1;
    if (0x1c < iVar9) {
      return;
    }
  } while( true );
}


