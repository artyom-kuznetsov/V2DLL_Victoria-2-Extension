// FUN_007d1670 @ 007d1670 body=[[007d1670, 007d16e8]]


void FUN_007d1670(void)

{
  int iVar1;
  int iVar2;
  int *in_EAX;
  int *in_ECX;
  int *unaff_ESI;
  
  iVar1 = *in_EAX;
  iVar2 = *unaff_ESI;
  if ((*(int *)(iVar1 + 300) <= *(int *)(iVar2 + 300)) &&
     ((*(int *)(iVar1 + 300) < *(int *)(iVar2 + 300) ||
      (*(uint *)(iVar1 + 0x128) < *(uint *)(iVar2 + 0x128))))) {
    *in_EAX = iVar2;
    *unaff_ESI = iVar1;
  }
  iVar1 = *in_ECX;
  iVar2 = *in_EAX;
  if ((*(int *)(iVar1 + 300) <= *(int *)(iVar2 + 300)) &&
     ((*(int *)(iVar1 + 300) < *(int *)(iVar2 + 300) ||
      (*(uint *)(iVar1 + 0x128) < *(uint *)(iVar2 + 0x128))))) {
    *in_ECX = iVar2;
    *in_EAX = iVar1;
  }
  iVar1 = *in_EAX;
  iVar2 = *unaff_ESI;
  if ((*(int *)(iVar1 + 300) <= *(int *)(iVar2 + 300)) &&
     ((*(int *)(iVar1 + 300) < *(int *)(iVar2 + 300) ||
      (*(uint *)(iVar1 + 0x128) < *(uint *)(iVar2 + 0x128))))) {
    *in_EAX = iVar2;
    *unaff_ESI = iVar1;
  }
  return;
}

