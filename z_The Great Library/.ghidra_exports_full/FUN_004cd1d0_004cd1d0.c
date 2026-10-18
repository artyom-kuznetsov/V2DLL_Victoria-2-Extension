// FUN_004cd1d0 @ 004cd1d0 body=[[004cd1d0, 004cd294]]


void FUN_004cd1d0(void)

{
  int iVar1;
  undefined4 *in_EAX;
  int in_ECX;
  int iVar2;
  int unaff_EDI;
  
  *in_EAX = 0x2d2d2d;
  iVar1 = *(int *)(in_ECX + 0x98);
  iVar2 = 0;
  in_EAX[1] = 0;
  if (((iVar1 != 0) && (iVar1 != *(int *)(unaff_EDI + 4))) &&
     (iVar1 = *(int *)(in_ECX + 0x9c), 0 < iVar1)) {
    *in_EAX = *(undefined4 *)(in_ECX + 0x94);
    in_EAX[1] = *(undefined4 *)(in_ECX + 0x98);
    iVar2 = iVar1;
  }
  if (((*(int *)(in_ECX + 0xb4) != 0) && (*(int *)(in_ECX + 0xb4) != *(int *)(unaff_EDI + 4))) &&
     (iVar1 = *(int *)(in_ECX + 0xb8), iVar2 < iVar1)) {
    *in_EAX = *(undefined4 *)(in_ECX + 0xb0);
    in_EAX[1] = *(undefined4 *)(in_ECX + 0xb4);
    iVar2 = iVar1;
  }
  if (((*(int *)(in_ECX + 0xd0) != 0) && (*(int *)(in_ECX + 0xd0) != *(int *)(unaff_EDI + 4))) &&
     (iVar1 = *(int *)(in_ECX + 0xd4), iVar2 < iVar1)) {
    *in_EAX = *(undefined4 *)(in_ECX + 0xcc);
    in_EAX[1] = *(undefined4 *)(in_ECX + 0xd0);
    iVar2 = iVar1;
  }
  iVar1 = *(int *)(in_ECX + 0xec);
  if (((iVar1 != 0) && (iVar1 != *(int *)(unaff_EDI + 4))) && (iVar2 < *(int *)(in_ECX + 0xf0))) {
    *in_EAX = *(undefined4 *)(in_ECX + 0xe8);
    in_EAX[1] = iVar1;
  }
  return;
}

