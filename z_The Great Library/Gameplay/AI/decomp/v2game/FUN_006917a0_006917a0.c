// FUN_006917a0 @ 006917a0 body=[[006917a0, 00691855]]


void FUN_006917a0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *in_EAX;
  
  iVar1 = *param_1;
  iVar2 = *in_EAX;
  if (*(int *)(*(int *)(iVar1 + 0xbcc) + 0x28c) + *(int *)(iVar1 + 0xea0) <
      *(int *)(*(int *)(iVar2 + 0xbcc) + 0x28c) + *(int *)(iVar2 + 0xea0)) {
    *in_EAX = iVar1;
    *param_1 = iVar2;
  }
  iVar1 = *param_2;
  iVar2 = *in_EAX;
  if (*(int *)(*(int *)(iVar2 + 0xbcc) + 0x28c) + *(int *)(iVar2 + 0xea0) <
      *(int *)(*(int *)(iVar1 + 0xbcc) + 0x28c) + *(int *)(iVar1 + 0xea0)) {
    *param_2 = iVar2;
    *in_EAX = iVar1;
  }
  iVar1 = *in_EAX;
  iVar2 = *param_1;
  if (*(int *)(*(int *)(iVar2 + 0xbcc) + 0x28c) + *(int *)(iVar2 + 0xea0) <
      *(int *)(*(int *)(iVar1 + 0xbcc) + 0x28c) + *(int *)(iVar1 + 0xea0)) {
    *in_EAX = iVar2;
    *param_1 = iVar1;
  }
  return;
}

