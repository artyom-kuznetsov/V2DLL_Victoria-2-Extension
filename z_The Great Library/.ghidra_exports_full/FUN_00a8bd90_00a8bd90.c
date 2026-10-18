// FUN_00a8bd90 @ 00a8bd90 body=[[00a8bd90, 00a8bee6]]


undefined4 FUN_00a8bd90(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int unaff_EDI;
  
  if (unaff_EDI == 0) {
    return 0xfffffffe;
  }
  if (*(int *)(unaff_EDI + 0x24) == 0) {
    *(code **)(unaff_EDI + 0x24) = FUN_00a8bd00;
  }
  if (*(int *)(unaff_EDI + 0x28) == 0) {
    *(code **)(unaff_EDI + 0x28) = FUN_00a8bd20;
  }
  piVar1 = (int *)(**(code **)(unaff_EDI + 0x24))(*(undefined4 *)(unaff_EDI + 0x2c),0xd9b0,1);
  if (piVar1 != (int *)0x0) {
    *piVar1 = unaff_EDI;
    piVar1[4] = 0;
    piVar1[5] = 0;
    piVar1[6] = 0;
    iVar2 = (**(code **)(unaff_EDI + 0x24))(*(undefined4 *)(unaff_EDI + 0x2c),3600000,1);
    piVar1[4] = iVar2;
    iVar2 = (**(code **)(unaff_EDI + 0x24))(*(undefined4 *)(unaff_EDI + 0x2c),0x36ef08,1);
    piVar1[5] = iVar2;
    iVar3 = (**(code **)(unaff_EDI + 0x24))(*(undefined4 *)(unaff_EDI + 0x2c),0x40004,1);
    iVar2 = piVar1[4];
    piVar1[6] = iVar3;
    if (iVar2 != 0) {
      if ((piVar1[5] != 0) && (iVar3 != 0)) {
        piVar1[0x9b] = 0;
        piVar1[0x99] = 0;
        piVar1[0x9c] = 9;
        piVar1[0x12] = 0xdbb8d;
        piVar1[0x9a] = 0;
        piVar1[0xc] = 0x1e;
        piVar1[9] = piVar1[5];
        piVar1[10] = iVar2;
        piVar1[0xb] = 0;
        piVar1[8] = iVar2;
        piVar1[2] = 2;
        piVar1[1] = 2;
        *(int **)(unaff_EDI + 0x20) = piVar1;
        *(undefined4 *)(unaff_EDI + 8) = 0;
        *(undefined4 *)(unaff_EDI + 0xc) = 0;
        *(undefined4 *)(unaff_EDI + 0x18) = 0;
        *(undefined4 *)(unaff_EDI + 0x1c) = 0;
        piVar1[0xd] = 0x100;
        piVar1[0xe] = 0;
        FUN_00a8bd40();
        return 0;
      }
      if (iVar2 != 0) {
        (**(code **)(unaff_EDI + 0x28))(*(undefined4 *)(unaff_EDI + 0x2c),iVar2);
      }
    }
    if (piVar1[5] != 0) {
      (**(code **)(unaff_EDI + 0x28))(*(undefined4 *)(unaff_EDI + 0x2c),piVar1[5]);
    }
    if (piVar1[6] != 0) {
      (**(code **)(unaff_EDI + 0x28))(*(undefined4 *)(unaff_EDI + 0x2c),piVar1[6]);
    }
    (**(code **)(unaff_EDI + 0x28))(*(undefined4 *)(unaff_EDI + 0x2c),piVar1);
  }
  return 0xfffffffd;
}

