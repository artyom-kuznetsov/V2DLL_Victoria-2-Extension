// FUN_00728b40 @ 00728b40 body=[[00728b40, 00728b94]]


void FUN_00728b40(void)

{
  int iVar1;
  int iVar2;
  int *in_EAX;
  int *in_ECX;
  int *unaff_ESI;
  
  iVar1 = *in_EAX;
  iVar2 = *unaff_ESI;
  if ((*(int *)(iVar2 + 0x34) <= *(int *)(iVar1 + 0x34)) &&
     ((*(int *)(iVar2 + 0x34) < *(int *)(iVar1 + 0x34) ||
      (*(uint *)(iVar2 + 0x30) < *(uint *)(iVar1 + 0x30))))) {
    *in_EAX = iVar2;
    *unaff_ESI = iVar1;
  }
  iVar1 = *in_EAX;
  iVar2 = *in_ECX;
  if ((*(int *)(iVar1 + 0x34) <= *(int *)(iVar2 + 0x34)) &&
     ((*(int *)(iVar1 + 0x34) < *(int *)(iVar2 + 0x34) ||
      (*(uint *)(iVar1 + 0x30) < *(uint *)(iVar2 + 0x30))))) {
    *in_ECX = iVar1;
    *in_EAX = iVar2;
  }
  iVar1 = *unaff_ESI;
  iVar2 = *in_EAX;
  if ((*(int *)(iVar1 + 0x34) <= *(int *)(iVar2 + 0x34)) &&
     ((*(int *)(iVar1 + 0x34) < *(int *)(iVar2 + 0x34) ||
      (*(uint *)(iVar1 + 0x30) < *(uint *)(iVar2 + 0x30))))) {
    *in_EAX = iVar1;
    *unaff_ESI = iVar2;
  }
  return;
}

