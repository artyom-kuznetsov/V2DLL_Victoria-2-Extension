// FUN_007d1020 @ 007d1020 body=[[007d1020, 007d1098]]


void FUN_007d1020(void)

{
  int iVar1;
  int iVar2;
  int *in_EAX;
  int *in_ECX;
  int *unaff_ESI;
  
  iVar1 = *in_EAX;
  iVar2 = *unaff_ESI;
  if ((*(int *)(iVar1 + 0x184) <= *(int *)(iVar2 + 0x184)) &&
     ((*(int *)(iVar1 + 0x184) < *(int *)(iVar2 + 0x184) ||
      (*(uint *)(iVar1 + 0x180) < *(uint *)(iVar2 + 0x180))))) {
    *in_EAX = iVar2;
    *unaff_ESI = iVar1;
  }
  iVar1 = *in_ECX;
  iVar2 = *in_EAX;
  if ((*(int *)(iVar1 + 0x184) <= *(int *)(iVar2 + 0x184)) &&
     ((*(int *)(iVar1 + 0x184) < *(int *)(iVar2 + 0x184) ||
      (*(uint *)(iVar1 + 0x180) < *(uint *)(iVar2 + 0x180))))) {
    *in_ECX = iVar2;
    *in_EAX = iVar1;
  }
  iVar1 = *in_EAX;
  iVar2 = *unaff_ESI;
  if ((*(int *)(iVar1 + 0x184) <= *(int *)(iVar2 + 0x184)) &&
     ((*(int *)(iVar1 + 0x184) < *(int *)(iVar2 + 0x184) ||
      (*(uint *)(iVar1 + 0x180) < *(uint *)(iVar2 + 0x180))))) {
    *in_EAX = iVar2;
    *unaff_ESI = iVar1;
  }
  return;
}

