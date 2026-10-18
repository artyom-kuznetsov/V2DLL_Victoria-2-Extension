// FUN_007d0b10 @ 007d0b10 body=[[007d0b10, 007d0b88]]


void FUN_007d0b10(void)

{
  int iVar1;
  int iVar2;
  int *in_EAX;
  int *in_ECX;
  int *unaff_ESI;
  
  iVar1 = *in_EAX;
  iVar2 = *unaff_ESI;
  if ((*(int *)(iVar1 + 0x11c) <= *(int *)(iVar2 + 0x11c)) &&
     ((*(int *)(iVar1 + 0x11c) < *(int *)(iVar2 + 0x11c) ||
      (*(uint *)(iVar1 + 0x118) < *(uint *)(iVar2 + 0x118))))) {
    *in_EAX = iVar2;
    *unaff_ESI = iVar1;
  }
  iVar1 = *in_ECX;
  iVar2 = *in_EAX;
  if ((*(int *)(iVar1 + 0x11c) <= *(int *)(iVar2 + 0x11c)) &&
     ((*(int *)(iVar1 + 0x11c) < *(int *)(iVar2 + 0x11c) ||
      (*(uint *)(iVar1 + 0x118) < *(uint *)(iVar2 + 0x118))))) {
    *in_ECX = iVar2;
    *in_EAX = iVar1;
  }
  iVar1 = *in_EAX;
  iVar2 = *unaff_ESI;
  if ((*(int *)(iVar1 + 0x11c) <= *(int *)(iVar2 + 0x11c)) &&
     ((*(int *)(iVar1 + 0x11c) < *(int *)(iVar2 + 0x11c) ||
      (*(uint *)(iVar1 + 0x118) < *(uint *)(iVar2 + 0x118))))) {
    *in_EAX = iVar2;
    *unaff_ESI = iVar1;
  }
  return;
}

