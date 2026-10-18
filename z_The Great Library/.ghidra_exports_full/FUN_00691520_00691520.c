// FUN_00691520 @ 00691520 body=[[00691520, 00691598]]


void FUN_00691520(void)

{
  int iVar1;
  int iVar2;
  int *in_EAX;
  int *in_ECX;
  int *unaff_ESI;
  
  iVar1 = *in_EAX;
  iVar2 = *unaff_ESI;
  if ((*(int *)(iVar2 + 0x1a4) <= *(int *)(iVar1 + 0x1a4)) &&
     ((*(int *)(iVar2 + 0x1a4) < *(int *)(iVar1 + 0x1a4) ||
      (*(uint *)(iVar2 + 0x1a0) < *(uint *)(iVar1 + 0x1a0))))) {
    *in_EAX = iVar2;
    *unaff_ESI = iVar1;
  }
  iVar1 = *in_EAX;
  iVar2 = *in_ECX;
  if ((*(int *)(iVar1 + 0x1a4) <= *(int *)(iVar2 + 0x1a4)) &&
     ((*(int *)(iVar1 + 0x1a4) < *(int *)(iVar2 + 0x1a4) ||
      (*(uint *)(iVar1 + 0x1a0) < *(uint *)(iVar2 + 0x1a0))))) {
    *in_ECX = iVar1;
    *in_EAX = iVar2;
  }
  iVar1 = *unaff_ESI;
  iVar2 = *in_EAX;
  if ((*(int *)(iVar1 + 0x1a4) <= *(int *)(iVar2 + 0x1a4)) &&
     ((*(int *)(iVar1 + 0x1a4) < *(int *)(iVar2 + 0x1a4) ||
      (*(uint *)(iVar1 + 0x1a0) < *(uint *)(iVar2 + 0x1a0))))) {
    *in_EAX = iVar1;
    *unaff_ESI = iVar2;
  }
  return;
}

