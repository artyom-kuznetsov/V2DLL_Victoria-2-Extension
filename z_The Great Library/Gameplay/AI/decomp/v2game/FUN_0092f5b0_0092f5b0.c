// FUN_0092f5b0 @ 0092f5b0 body=[[0092f5b0, 0092f62f]]


void FUN_0092f5b0(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 in_ECX;
  int unaff_ESI;
  
  if (0 < param_1) {
    piVar2 = (int *)FUN_0092f630(unaff_ESI,&param_2,in_ECX,param_2);
    param_1 = __alldiv((longlong)*piVar2 * (longlong)param_1,1000,0);
    if ((0 < param_1) && (*(int *)(DAT_012588e8 + 0xb0c) <= *(int *)(unaff_ESI + 0x9c))) {
      param_1 = 0;
      *(undefined4 *)(unaff_ESI + 0x48) = 0;
    }
  }
  *(int *)(unaff_ESI + 0x48) = *(int *)(unaff_ESI + 0x48) + param_1;
  if (*(int *)(unaff_ESI + 0x48) < 0) {
    *(undefined4 *)(unaff_ESI + 0x48) = 0;
  }
  iVar1 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x404);
  if (iVar1 < *(int *)(unaff_ESI + 0x48)) {
    *(int *)(unaff_ESI + 0x4c) = *(int *)(unaff_ESI + 0x4c) + (*(int *)(unaff_ESI + 0x48) - iVar1);
    *(int *)(unaff_ESI + 0x48) = iVar1;
  }
  return;
}

