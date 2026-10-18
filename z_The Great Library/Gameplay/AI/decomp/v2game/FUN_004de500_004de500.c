// FUN_004de500 @ 004de500 body=[[004de500, 004de579]]


void FUN_004de500(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *in_EAX;
  int in_ECX;
  
  iVar2 = *(int *)(in_ECX + 0x9c);
  cVar1 = *(char *)(param_1 + 0x13d);
  iVar3 = *(int *)(iVar2 + *(int *)(param_1 + 0x134) * 8);
  iVar4 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 300) * 4) + 0xa90);
  *in_EAX = iVar3;
  if (cVar1 != '\0') {
    *in_EAX = iVar3 + *(int *)(iVar4 + 0x268) + *(int *)(iVar2 + 0x268);
    return;
  }
  *in_EAX = iVar3 + *(int *)(iVar4 + 0x270) + *(int *)(iVar2 + 0x270);
  return;
}

