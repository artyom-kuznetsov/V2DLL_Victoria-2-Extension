// FUN_00a714a0 @ 00a714a0 body=[[00a714a0, 00a71558]]


void FUN_00a714a0(int param_1)

{
  int *piVar1;
  int iVar2;
  int in_EAX;
  int in_ECX;
  undefined1 *unaff_ESI;
  
  if (*(int *)(in_ECX + 0xc) - *(int *)(in_ECX + 8) >> 4 <= in_EAX) {
    *(undefined4 *)(unaff_ESI + 0x14) = 0xf;
    *(undefined4 *)(unaff_ESI + 0x10) = 0;
    *unaff_ESI = 0;
    FUN_00409350(&DAT_00ded94d,0);
    return;
  }
  piVar1 = (int *)(*(int *)(in_ECX + 8) + in_EAX * 0x10);
  if (param_1 < (piVar1[1] - *piVar1) / 0x1c) {
    iVar2 = *piVar1;
    *(undefined4 *)(unaff_ESI + 0x14) = 0xf;
    *(undefined4 *)(unaff_ESI + 0x10) = 0;
    *unaff_ESI = 0;
    FUN_00408ed0(iVar2 + param_1 * 0x1c,0,0xffffffff);
    return;
  }
  *(undefined4 *)(unaff_ESI + 0x14) = 0xf;
  *(undefined4 *)(unaff_ESI + 0x10) = 0;
  *unaff_ESI = 0;
  FUN_00409350(&DAT_00ded94d,0);
  return;
}

