// FUN_00612200 @ 00612200 body=[[00612200, 006122d1]]


void FUN_00612200(int param_1,uint *param_2)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int unaff_ESI;
  
  iVar1 = in_EAX;
  while( true ) {
    iVar2 = iVar1 * 2 + 2;
    if (param_1 <= iVar2) break;
    if (*(uint *)(unaff_ESI + iVar2 * 0x10) < *(uint *)(unaff_ESI + -0x10 + iVar2 * 0x10)) {
      iVar2 = iVar1 * 2 + 1;
    }
    *(undefined8 *)(unaff_ESI + iVar1 * 0x10) = *(undefined8 *)(unaff_ESI + iVar2 * 0x10);
    *(undefined8 *)(unaff_ESI + 8 + iVar1 * 0x10) = *(undefined8 *)(unaff_ESI + 8 + iVar2 * 0x10);
    iVar1 = iVar2;
  }
  if (iVar2 == param_1) {
    *(undefined8 *)(unaff_ESI + iVar1 * 0x10) = *(undefined8 *)(unaff_ESI + -0x10 + param_1 * 0x10);
    *(undefined8 *)(unaff_ESI + 8 + iVar1 * 0x10) = *(undefined8 *)(unaff_ESI + param_1 * 0x10 + -8)
    ;
    iVar1 = param_1 + -1;
  }
  while ((in_EAX < iVar1 &&
         (iVar2 = (iVar1 + -1) / 2, *(uint *)(unaff_ESI + iVar2 * 0x10) < *param_2))) {
    *(undefined8 *)(unaff_ESI + iVar1 * 0x10) = *(undefined8 *)(unaff_ESI + iVar2 * 0x10);
    *(undefined8 *)(unaff_ESI + 8 + iVar1 * 0x10) = *(undefined8 *)(unaff_ESI + 8 + iVar2 * 0x10);
    iVar1 = iVar2;
  }
  *(undefined8 *)(unaff_ESI + iVar1 * 0x10) = *(undefined8 *)param_2;
  *(undefined8 *)(unaff_ESI + 8 + iVar1 * 0x10) = *(undefined8 *)(param_2 + 2);
  return;
}

