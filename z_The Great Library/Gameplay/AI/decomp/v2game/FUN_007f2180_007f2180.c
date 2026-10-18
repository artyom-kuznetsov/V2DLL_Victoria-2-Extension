// FUN_007f2180 @ 007f2180 body=[[007f2180, 007f220e]]


void FUN_007f2180(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int unaff_EDI;
  float10 fVar5;
  
  fVar5 = (float10)(**(code **)(**(int **)(unaff_EDI + 0x18) + 0x14))();
  piVar1 = (int *)(unaff_EDI + 0x2c0);
  iVar4 = 300;
  do {
    if (*(char *)((int)piVar1 + -3) == '\0') {
      iVar2 = 0xff;
    }
    else {
      iVar2 = *(int *)(*(int *)(unaff_EDI + 0x192c) + 0x100);
    }
    if ((((char)piVar1[-1] != '\0') && (*piVar1 < iVar2)) &&
       (iVar3 = (int)(((float)fVar5 - (float)piVar1[1]) * ((float)iVar2 / 1.5)), *piVar1 = iVar3,
       iVar2 < iVar3)) {
      *piVar1 = iVar2;
    }
    piVar1 = piVar1 + 4;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return;
}

