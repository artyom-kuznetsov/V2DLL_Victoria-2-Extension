// FUN_0082c4d0 @ 0082c4d0 body=[[0082c4d0, 0082c538]]


void FUN_0082c4d0(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  int *unaff_EDI;
  
  unaff_EDI[0x38] = in_ECX;
  *(undefined1 *)(unaff_EDI + 0x39) = 0;
  if ((0 < unaff_EDI[0x2d]) && (*(int *)unaff_EDI[0x2b] != 0)) {
    *(int *)(*(int *)unaff_EDI[0x2b] + 0x1a8) = in_ECX;
  }
  if (unaff_EDI[0x38] == 0) {
    puVar1 = (undefined4 *)unaff_EDI[0x2f];
    while (puVar1 != (undefined4 *)0x0) {
      uVar2 = *puVar1;
      puVar1 = (undefined4 *)puVar1[2];
      iVar3 = (**(code **)(*unaff_EDI + 0xe8))();
      (**(code **)(**(int **)(iVar3 + 0x210) + 0x1b8))(uVar2);
    }
  }
  return;
}

