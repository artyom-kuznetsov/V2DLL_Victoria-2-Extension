// FUN_00709020 @ 00709020 body=[[00709020, 00709098]]


void FUN_00709020(void)

{
  int iVar1;
  int iVar2;
  int *in_EAX;
  int *in_ECX;
  int *unaff_ESI;
  
  iVar1 = *in_EAX;
  iVar2 = *unaff_ESI;
  if ((*(int *)(iVar1 + 0x22c) <= *(int *)(iVar2 + 0x22c)) &&
     ((*(int *)(iVar1 + 0x22c) < *(int *)(iVar2 + 0x22c) ||
      (*(uint *)(iVar1 + 0x228) < *(uint *)(iVar2 + 0x228))))) {
    *in_EAX = iVar2;
    *unaff_ESI = iVar1;
  }
  iVar1 = *in_ECX;
  iVar2 = *in_EAX;
  if ((*(int *)(iVar1 + 0x22c) <= *(int *)(iVar2 + 0x22c)) &&
     ((*(int *)(iVar1 + 0x22c) < *(int *)(iVar2 + 0x22c) ||
      (*(uint *)(iVar1 + 0x228) < *(uint *)(iVar2 + 0x228))))) {
    *in_ECX = iVar2;
    *in_EAX = iVar1;
  }
  iVar1 = *in_EAX;
  iVar2 = *unaff_ESI;
  if ((*(int *)(iVar1 + 0x22c) <= *(int *)(iVar2 + 0x22c)) &&
     ((*(int *)(iVar1 + 0x22c) < *(int *)(iVar2 + 0x22c) ||
      (*(uint *)(iVar1 + 0x228) < *(uint *)(iVar2 + 0x228))))) {
    *in_EAX = iVar2;
    *unaff_ESI = iVar1;
  }
  return;
}

