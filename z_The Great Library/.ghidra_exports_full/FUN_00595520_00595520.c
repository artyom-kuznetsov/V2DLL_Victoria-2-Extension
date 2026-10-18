// FUN_00595520 @ 00595520 body=[[00595520, 005955d6] [005955dd, 00595655]]


void FUN_00595520(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined1 uVar4;
  void **ppvVar5;
  int iVar6;
  int iVar7;
  int in_ECX;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b5b6e0;
  piVar1 = *(int **)(in_ECX + 0x20);
  ppvVar5 = &local_14;
  local_14 = ExceptionList;
  do {
    ExceptionList = ppvVar5;
    if (piVar1 == (int *)0x0) {
      ExceptionList = local_14;
      return;
    }
    piVar2 = (int *)*piVar1;
    piVar1 = (int *)piVar1[2];
    iVar6 = FUN_005cf450(piVar2);
    if (piVar2[0x1d] == *(int *)(in_ECX + 0x1c)) {
      piVar2[0x1d] = 0;
    }
    else if (piVar2[0x1c] == *(int *)(in_ECX + 0x1c)) {
      piVar2[0x1c] = 0;
    }
    for (piVar3 = *(int **)(in_ECX + 0x20); piVar3 != (int *)0x0; piVar3 = (int *)piVar3[2]) {
      if ((int *)*piVar3 == piVar2) {
        if (piVar3 != (int *)0x0) {
          if (*(char *)(in_ECX + 0x2c) == '\0') {
            iVar6 = piVar3[1];
            iVar7 = piVar3[2];
            if (iVar6 != 0) {
              *(int *)(iVar6 + 8) = iVar7;
            }
            if (iVar7 != 0) {
              *(int *)(iVar7 + 4) = iVar6;
            }
            if (piVar3 == *(int **)(in_ECX + 0x20)) {
              *(int *)(in_ECX + 0x20) = iVar7;
            }
            if (piVar3 == *(int **)(in_ECX + 0x24)) {
              *(int *)(in_ECX + 0x24) = iVar6;
            }
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(piVar3);
          }
          *(undefined1 *)(piVar3 + 3) = 1;
        }
        break;
      }
    }
    if (iVar6 == 0) {
      FUN_0068aa10(piVar2);
      ppvVar5 = ExceptionList;
    }
    else {
      FUN_005d1890();
      iVar7 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
      uVar4 = DAT_01258a66;
      if (*(char *)(iVar7 + 0x34) != '\0') {
        DAT_01258a66 = 1;
        (**(code **)(*piVar2 + 0x18))(iVar6,0);
      }
      DAT_01258a66 = uVar4;
      *(undefined1 *)(piVar2 + 0x41) = 1;
      ppvVar5 = ExceptionList;
    }
  } while( true );
}

