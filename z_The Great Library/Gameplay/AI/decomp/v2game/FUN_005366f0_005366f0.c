// FUN_005366f0 @ 005366f0 body=[[005366f0, 00536765]]


void FUN_005366f0(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  int unaff_ESI;
  
  *(undefined4 *)(unaff_ESI + 0xe3c) = param_1;
  piVar1 = (int *)FUN_00538150();
  FUN_00401000(0x48b23910);
  iVar2 = FUN_00b31c00();
  iVar2 = __alldiv((longlong)*piVar1 * (longlong)iVar2,1000,0);
  if (*(char *)(unaff_ESI + 0x12d0) == '\0') {
    iVar2 = *(int *)(*(int *)(DAT_012586dc + 0x40) + 0x158);
  }
  if (iVar2 < *(int *)(unaff_ESI + 0xe3c)) {
    *(int *)(unaff_ESI + 0xe3c) = iVar2;
  }
  return;
}

