// FUN_00b18bf0 @ 00b18bf0 body=[[00b18bf0, 00b18c24]]


void FUN_00b18bf0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int in_ECX;
  
  if (*(char *)(in_ECX + 0x8c) == '\0') {
    uVar1 = param_1[*(int *)(in_ECX + 0x84)];
    uVar2 = param_1[*(int *)(in_ECX + 0x88)];
    *param_1 = param_1[*(int *)(in_ECX + 0x80)];
    param_1[1] = uVar1;
    param_1[2] = uVar2;
  }
  return;
}

