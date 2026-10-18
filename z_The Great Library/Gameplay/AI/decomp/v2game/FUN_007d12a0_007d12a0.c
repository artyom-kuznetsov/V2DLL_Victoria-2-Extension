// FUN_007d12a0 @ 007d12a0 body=[[007d12a0, 007d1318]]


void FUN_007d12a0(void)

{
  int iVar1;
  int iVar2;
  int *in_EAX;
  int *in_ECX;
  int *unaff_ESI;
  
  iVar1 = *in_EAX;
  iVar2 = *unaff_ESI;
  if ((*(int *)(iVar1 + 0x13c) <= *(int *)(iVar2 + 0x13c)) &&
     ((*(int *)(iVar1 + 0x13c) < *(int *)(iVar2 + 0x13c) ||
      (*(uint *)(iVar1 + 0x138) < *(uint *)(iVar2 + 0x138))))) {
    *in_EAX = iVar2;
    *unaff_ESI = iVar1;
  }
  iVar1 = *in_ECX;
  iVar2 = *in_EAX;
  if ((*(int *)(iVar1 + 0x13c) <= *(int *)(iVar2 + 0x13c)) &&
     ((*(int *)(iVar1 + 0x13c) < *(int *)(iVar2 + 0x13c) ||
      (*(uint *)(iVar1 + 0x138) < *(uint *)(iVar2 + 0x138))))) {
    *in_ECX = iVar2;
    *in_EAX = iVar1;
  }
  iVar1 = *in_EAX;
  iVar2 = *unaff_ESI;
  if ((*(int *)(iVar1 + 0x13c) <= *(int *)(iVar2 + 0x13c)) &&
     ((*(int *)(iVar1 + 0x13c) < *(int *)(iVar2 + 0x13c) ||
      (*(uint *)(iVar1 + 0x138) < *(uint *)(iVar2 + 0x138))))) {
    *in_EAX = iVar2;
    *unaff_ESI = iVar1;
  }
  return;
}

