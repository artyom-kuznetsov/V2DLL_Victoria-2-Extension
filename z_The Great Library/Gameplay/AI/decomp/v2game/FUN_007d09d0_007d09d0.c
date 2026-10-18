// FUN_007d09d0 @ 007d09d0 body=[[007d09d0, 007d0a48]]


void FUN_007d09d0(void)

{
  int iVar1;
  int iVar2;
  int *in_EAX;
  int *in_ECX;
  int *unaff_ESI;
  
  iVar1 = *in_EAX;
  iVar2 = *unaff_ESI;
  if ((*(int *)(iVar1 + 0x124) <= *(int *)(iVar2 + 0x124)) &&
     ((*(int *)(iVar1 + 0x124) < *(int *)(iVar2 + 0x124) ||
      (*(uint *)(iVar1 + 0x120) < *(uint *)(iVar2 + 0x120))))) {
    *in_EAX = iVar2;
    *unaff_ESI = iVar1;
  }
  iVar1 = *in_ECX;
  iVar2 = *in_EAX;
  if ((*(int *)(iVar1 + 0x124) <= *(int *)(iVar2 + 0x124)) &&
     ((*(int *)(iVar1 + 0x124) < *(int *)(iVar2 + 0x124) ||
      (*(uint *)(iVar1 + 0x120) < *(uint *)(iVar2 + 0x120))))) {
    *in_ECX = iVar2;
    *in_EAX = iVar1;
  }
  iVar1 = *in_EAX;
  iVar2 = *unaff_ESI;
  if ((*(int *)(iVar1 + 0x124) <= *(int *)(iVar2 + 0x124)) &&
     ((*(int *)(iVar1 + 0x124) < *(int *)(iVar2 + 0x124) ||
      (*(uint *)(iVar1 + 0x120) < *(uint *)(iVar2 + 0x120))))) {
    *in_EAX = iVar2;
    *unaff_ESI = iVar1;
  }
  return;
}

