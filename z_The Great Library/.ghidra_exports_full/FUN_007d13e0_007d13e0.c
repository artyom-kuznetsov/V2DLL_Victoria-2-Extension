// FUN_007d13e0 @ 007d13e0 body=[[007d13e0, 007d1458]]


void FUN_007d13e0(void)

{
  int iVar1;
  int iVar2;
  int *in_EAX;
  int *in_ECX;
  int *unaff_ESI;
  
  iVar1 = *in_EAX;
  iVar2 = *unaff_ESI;
  if ((*(int *)(iVar1 + 0x144) <= *(int *)(iVar2 + 0x144)) &&
     ((*(int *)(iVar1 + 0x144) < *(int *)(iVar2 + 0x144) ||
      (*(uint *)(iVar1 + 0x140) < *(uint *)(iVar2 + 0x140))))) {
    *in_EAX = iVar2;
    *unaff_ESI = iVar1;
  }
  iVar1 = *in_ECX;
  iVar2 = *in_EAX;
  if ((*(int *)(iVar1 + 0x144) <= *(int *)(iVar2 + 0x144)) &&
     ((*(int *)(iVar1 + 0x144) < *(int *)(iVar2 + 0x144) ||
      (*(uint *)(iVar1 + 0x140) < *(uint *)(iVar2 + 0x140))))) {
    *in_ECX = iVar2;
    *in_EAX = iVar1;
  }
  iVar1 = *in_EAX;
  iVar2 = *unaff_ESI;
  if ((*(int *)(iVar1 + 0x144) <= *(int *)(iVar2 + 0x144)) &&
     ((*(int *)(iVar1 + 0x144) < *(int *)(iVar2 + 0x144) ||
      (*(uint *)(iVar1 + 0x140) < *(uint *)(iVar2 + 0x140))))) {
    *in_EAX = iVar2;
    *unaff_ESI = iVar1;
  }
  return;
}

