// FUN_005d62b0 @ 005d62b0 body=[[005d62b0, 005d63da]]


void FUN_005d62b0(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  char local_104 [256];
  
  FUN_005c7440(param_1);
  iVar1 = *(int *)(in_ECX + 0x1a0);
  if (0 < iVar1) {
    FUN_009a0940(param_1);
    _sprintf(local_104,"%d",iVar1);
    FUN_0099ff90(param_1);
    FUN_004013e0(param_1);
  }
  iVar1 = *(int *)(in_ECX + 0x19c);
  if (0 < iVar1) {
    FUN_009a0940(param_1);
    _sprintf(local_104,"%d",iVar1);
    FUN_0099ff90(param_1);
    FUN_004013e0(param_1);
  }
  if (*(char *)(in_ECX + 0x1a4) != '\0') {
    FUN_009a0940(param_1);
    FUN_004013e0(param_1);
    FUN_004013e0(param_1);
  }
  iVar1 = *(int *)(in_ECX + 0x1a8);
  if (0 < iVar1) {
    FUN_009a0940(param_1);
    _sprintf(local_104,"%d",iVar1);
    FUN_0099ff90(param_1);
    FUN_004013e0(param_1);
  }
  return;
}

