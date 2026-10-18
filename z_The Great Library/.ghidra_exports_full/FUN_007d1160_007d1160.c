// FUN_007d1160 @ 007d1160 body=[[007d1160, 007d11d8]]


void FUN_007d1160(void)

{
  int iVar1;
  int iVar2;
  int *in_EAX;
  int *in_ECX;
  int *unaff_ESI;
  
  iVar1 = *in_EAX;
  iVar2 = *unaff_ESI;
  if ((*(int *)(iVar1 + 0x134) <= *(int *)(iVar2 + 0x134)) &&
     ((*(int *)(iVar1 + 0x134) < *(int *)(iVar2 + 0x134) ||
      (*(uint *)(iVar1 + 0x130) < *(uint *)(iVar2 + 0x130))))) {
    *in_EAX = iVar2;
    *unaff_ESI = iVar1;
  }
  iVar1 = *in_ECX;
  iVar2 = *in_EAX;
  if ((*(int *)(iVar1 + 0x134) <= *(int *)(iVar2 + 0x134)) &&
     ((*(int *)(iVar1 + 0x134) < *(int *)(iVar2 + 0x134) ||
      (*(uint *)(iVar1 + 0x130) < *(uint *)(iVar2 + 0x130))))) {
    *in_ECX = iVar2;
    *in_EAX = iVar1;
  }
  iVar1 = *in_EAX;
  iVar2 = *unaff_ESI;
  if ((*(int *)(iVar1 + 0x134) <= *(int *)(iVar2 + 0x134)) &&
     ((*(int *)(iVar1 + 0x134) < *(int *)(iVar2 + 0x134) ||
      (*(uint *)(iVar1 + 0x130) < *(uint *)(iVar2 + 0x130))))) {
    *in_EAX = iVar2;
    *unaff_ESI = iVar1;
  }
  return;
}

