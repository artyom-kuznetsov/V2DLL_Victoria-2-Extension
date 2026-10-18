// FUN_00691660 @ 00691660 body=[[00691660, 006916d8]]


void FUN_00691660(void)

{
  int iVar1;
  int iVar2;
  int *in_EAX;
  int *in_ECX;
  int *unaff_ESI;
  
  iVar1 = *in_EAX;
  iVar2 = *unaff_ESI;
  if ((*(int *)(iVar2 + 0x19c) <= *(int *)(iVar1 + 0x19c)) &&
     ((*(int *)(iVar2 + 0x19c) < *(int *)(iVar1 + 0x19c) ||
      (*(uint *)(iVar2 + 0x198) < *(uint *)(iVar1 + 0x198))))) {
    *in_EAX = iVar2;
    *unaff_ESI = iVar1;
  }
  iVar1 = *in_EAX;
  iVar2 = *in_ECX;
  if ((*(int *)(iVar1 + 0x19c) <= *(int *)(iVar2 + 0x19c)) &&
     ((*(int *)(iVar1 + 0x19c) < *(int *)(iVar2 + 0x19c) ||
      (*(uint *)(iVar1 + 0x198) < *(uint *)(iVar2 + 0x198))))) {
    *in_ECX = iVar1;
    *in_EAX = iVar2;
  }
  iVar1 = *unaff_ESI;
  iVar2 = *in_EAX;
  if ((*(int *)(iVar1 + 0x19c) <= *(int *)(iVar2 + 0x19c)) &&
     ((*(int *)(iVar1 + 0x19c) < *(int *)(iVar2 + 0x19c) ||
      (*(uint *)(iVar1 + 0x198) < *(uint *)(iVar2 + 0x198))))) {
    *in_EAX = iVar1;
    *unaff_ESI = iVar2;
  }
  return;
}

