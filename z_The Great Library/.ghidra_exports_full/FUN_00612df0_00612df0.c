// FUN_00612df0 @ 00612df0 body=[[00612df0, 00612e49]]


void FUN_00612df0(int param_1)

{
  int iVar1;
  int in_ECX;
  int unaff_ESI;
  uint *unaff_EDI;
  
  while ((param_1 < in_ECX &&
         (iVar1 = (in_ECX + -1) / 2, *(uint *)(unaff_ESI + iVar1 * 0x10) < *unaff_EDI))) {
    *(undefined8 *)(unaff_ESI + in_ECX * 0x10) = *(undefined8 *)(unaff_ESI + iVar1 * 0x10);
    *(undefined8 *)(unaff_ESI + 8 + in_ECX * 0x10) = *(undefined8 *)(unaff_ESI + 8 + iVar1 * 0x10);
    in_ECX = iVar1;
  }
  *(undefined8 *)(unaff_ESI + in_ECX * 0x10) = *(undefined8 *)unaff_EDI;
  *(undefined8 *)(unaff_ESI + 8 + in_ECX * 0x10) = *(undefined8 *)(unaff_EDI + 2);
  return;
}

