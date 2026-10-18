// FUN_00612800 @ 00612800 body=[[00612800, 00612878]]


void FUN_00612800(void)

{
  int iVar1;
  int iVar2;
  int *in_EAX;
  int *in_ECX;
  int *unaff_ESI;
  
  iVar1 = *in_EAX;
  iVar2 = *unaff_ESI;
  if ((*(int *)(iVar2 + 0x25c) <= *(int *)(iVar1 + 0x25c)) &&
     ((*(int *)(iVar2 + 0x25c) < *(int *)(iVar1 + 0x25c) ||
      (*(uint *)(iVar2 + 600) < *(uint *)(iVar1 + 600))))) {
    *in_EAX = iVar2;
    *unaff_ESI = iVar1;
  }
  iVar1 = *in_EAX;
  iVar2 = *in_ECX;
  if ((*(int *)(iVar1 + 0x25c) <= *(int *)(iVar2 + 0x25c)) &&
     ((*(int *)(iVar1 + 0x25c) < *(int *)(iVar2 + 0x25c) ||
      (*(uint *)(iVar1 + 600) < *(uint *)(iVar2 + 600))))) {
    *in_ECX = iVar1;
    *in_EAX = iVar2;
  }
  iVar1 = *unaff_ESI;
  iVar2 = *in_EAX;
  if ((*(int *)(iVar1 + 0x25c) <= *(int *)(iVar2 + 0x25c)) &&
     ((*(int *)(iVar1 + 0x25c) < *(int *)(iVar2 + 0x25c) ||
      (*(uint *)(iVar1 + 600) < *(uint *)(iVar2 + 600))))) {
    *in_EAX = iVar1;
    *unaff_ESI = iVar2;
  }
  return;
}

