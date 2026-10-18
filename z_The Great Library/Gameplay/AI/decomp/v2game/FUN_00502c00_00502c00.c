// FUN_00502c00 @ 00502c00 body=[[00502c00, 00502cb1]]


void FUN_00502c00(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int unaff_ESI;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00b5f790;
  local_10 = ExceptionList;
  piVar3 = *(int **)(unaff_ESI + 0x4f8);
  while( true ) {
    if (piVar3 == (int *)0x0) {
      iVar1 = *(int *)(unaff_ESI + 0x4fc);
      ExceptionList = &local_10;
      piVar3 = (int *)FUN_00aae9af();
      if (piVar3 == (int *)0x0) {
        piVar3 = (int *)0x0;
      }
      else {
        *piVar3 = param_1;
        piVar3[1] = iVar1;
        piVar3[2] = 0;
        *(undefined1 *)(piVar3 + 3) = 0;
      }
      iVar2 = *(int *)(unaff_ESI + 0x500);
      *(int **)(unaff_ESI + 0x4fc) = piVar3;
      *(int *)(unaff_ESI + 0x500) = iVar2 + 1;
      if (iVar2 == 0) {
        *(int **)(unaff_ESI + 0x4f8) = piVar3;
      }
      else {
        *(int **)(iVar1 + 8) = piVar3;
      }
      FUN_00568dc0(*(undefined4 *)(unaff_ESI + 0xbcc),param_1 + 0x70);
      FUN_00508330();
      ExceptionList = local_10;
      return;
    }
    if (*piVar3 == param_1) break;
    piVar3 = (int *)piVar3[2];
  }
  return;
}

