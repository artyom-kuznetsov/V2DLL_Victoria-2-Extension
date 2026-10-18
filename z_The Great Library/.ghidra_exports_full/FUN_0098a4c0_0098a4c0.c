// FUN_0098a4c0 @ 0098a4c0 body=[[0098a4c0, 0098a537]]


void FUN_0098a4c0(void)

{
  int *piVar1;
  uint in_EAX;
  uint uVar2;
  int iVar3;
  uint in_ECX;
  uint extraout_ECX;
  int *piVar4;
  int *unaff_ESI;
  
  uVar2 = unaff_ESI[4];
  if (uVar2 < in_ECX) {
    uVar2 = FUN_00aad3fa("invalid string position");
    in_ECX = extraout_ECX;
  }
  uVar2 = uVar2 - in_ECX;
  if (uVar2 < in_EAX) {
    in_EAX = uVar2;
  }
  if (in_EAX != 0) {
    piVar4 = unaff_ESI;
    piVar1 = unaff_ESI;
    if (7 < (uint)unaff_ESI[5]) {
      piVar4 = (int *)*unaff_ESI;
      piVar1 = (int *)*unaff_ESI;
    }
    FID_conflict__memcpy
              ((void *)((int)piVar4 + in_ECX * 2),(void *)((int)piVar1 + (in_ECX + in_EAX) * 2),
               (uVar2 - in_EAX) * 2);
    iVar3 = unaff_ESI[4] - in_EAX;
    unaff_ESI[4] = iVar3;
    if (7 < (uint)unaff_ESI[5]) {
      *(undefined2 *)(*unaff_ESI + iVar3 * 2) = 0;
      return;
    }
    *(undefined2 *)((int)unaff_ESI + iVar3 * 2) = 0;
  }
  return;
}

