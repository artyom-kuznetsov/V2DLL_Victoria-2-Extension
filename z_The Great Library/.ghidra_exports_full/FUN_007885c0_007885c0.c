// FUN_007885c0 @ 007885c0 body=[[007885c0, 00788645]]


void FUN_007885c0(int *param_1,int *param_2,char param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int *in_EAX;
  
  iVar1 = *param_1;
  iVar2 = *in_EAX;
  iVar3 = *(int *)(iVar2 + 0x5c);
  if (param_3 == '\0') {
    bVar4 = iVar3 < *(int *)(iVar1 + 0x5c);
  }
  else {
    bVar4 = *(int *)(iVar1 + 0x5c) < iVar3;
  }
  if (bVar4) {
    *in_EAX = iVar1;
    *param_1 = iVar2;
  }
  iVar1 = *param_2;
  iVar2 = *in_EAX;
  iVar3 = *(int *)(iVar1 + 0x5c);
  if (param_3 == '\0') {
    bVar4 = iVar3 < *(int *)(iVar2 + 0x5c);
  }
  else {
    bVar4 = *(int *)(iVar2 + 0x5c) < iVar3;
  }
  if (bVar4) {
    *param_2 = iVar2;
    *in_EAX = iVar1;
  }
  iVar1 = *in_EAX;
  iVar2 = *param_1;
  iVar3 = *(int *)(iVar1 + 0x5c);
  if (param_3 == '\0') {
    bVar4 = iVar3 < *(int *)(iVar2 + 0x5c);
  }
  else {
    bVar4 = *(int *)(iVar2 + 0x5c) < iVar3;
  }
  if (bVar4) {
    *in_EAX = iVar2;
    *param_1 = iVar1;
  }
  return;
}

