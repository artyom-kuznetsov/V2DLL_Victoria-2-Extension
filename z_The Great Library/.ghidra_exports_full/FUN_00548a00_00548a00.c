// FUN_00548a00 @ 00548a00 body=[[00548a00, 00548aaa]]


void FUN_00548a00(void)

{
  uint uVar1;
  uint in_EAX;
  int iVar2;
  int *unaff_ESI;
  undefined4 local_8;
  
  iVar2 = unaff_ESI[1];
  uVar1 = (iVar2 - *unaff_ESI) / 0x18;
  if (in_EAX < uVar1) {
    if (*unaff_ESI + in_EAX * 0x18 != iVar2) {
      iVar2 = FUN_005578a0(iVar2);
      unaff_ESI[1] = iVar2;
      return;
    }
  }
  else if (uVar1 < in_EAX) {
    FUN_00549190(in_EAX - uVar1);
    FUN_0054b6a0(local_8);
    unaff_ESI[1] = unaff_ESI[1] + (in_EAX - (unaff_ESI[1] - *unaff_ESI) / 0x18) * 0x18;
  }
  return;
}

