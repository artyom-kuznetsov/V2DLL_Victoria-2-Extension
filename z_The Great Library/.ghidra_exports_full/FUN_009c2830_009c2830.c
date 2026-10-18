// FUN_009c2830 @ 009c2830 body=[[009c2830, 009c28a3]]


void FUN_009c2830(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int unaff_ESI;
  
  for (piVar1 = *(int **)(unaff_ESI + 0x34); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[0xd]) {
    if ((int *)*piVar1 != (int *)0x0) {
      (**(code **)(*(int *)*piVar1 + 0x38))();
      iVar2 = *(int *)(unaff_ESI + 0x48);
      piVar4 = (int *)FUN_00aae9af(0x10);
      if (piVar4 == (int *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        *piVar4 = *piVar1;
        piVar4[1] = iVar2;
        piVar4[2] = 0;
        *(undefined1 *)(piVar4 + 3) = 0;
      }
      iVar3 = *(int *)(unaff_ESI + 0x4c);
      *(int **)(unaff_ESI + 0x48) = piVar4;
      *(int *)(unaff_ESI + 0x4c) = iVar3 + 1;
      if (iVar3 == 0) {
        *(int **)(unaff_ESI + 0x44) = piVar4;
      }
      else {
        *(int **)(iVar2 + 8) = piVar4;
      }
    }
  }
  FUN_009c2e60((undefined4 *)(unaff_ESI + 0x34));
  return;
}

