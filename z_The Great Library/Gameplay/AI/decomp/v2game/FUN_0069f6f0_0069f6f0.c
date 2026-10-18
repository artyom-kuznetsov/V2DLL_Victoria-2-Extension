// FUN_0069f6f0 @ 0069f6f0 body=[[0069f6f0, 0069f725]]


void FUN_0069f6f0(int *param_1)

{
  int iVar1;
  int in_ECX;
  char *pcVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x80))();
  pcVar2 = (char *)(*(int *)(in_ECX + 0x34) * 0x58 + *(int *)(in_ECX + 0x3c));
  if (iVar1 == *(int *)(pcVar2 + 4)) {
    *pcVar2 = *pcVar2 == '\0';
  }
  *(int *)(pcVar2 + 4) = iVar1;
  FUN_0069c520();
  return;
}

