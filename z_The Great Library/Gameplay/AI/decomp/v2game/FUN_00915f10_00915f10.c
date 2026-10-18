// FUN_00915f10 @ 00915f10 body=[[00915f10, 00915fbf]]


void FUN_00915f10(undefined4 param_1)

{
  char cVar1;
  undefined1 *puVar2;
  int in_ECX;
  char local_104 [256];
  
  FUN_009112b0(param_1);
  if (*(int *)(in_ECX + 0x34) != 0) {
    cVar1 = (**(code **)(**(int **)(in_ECX + 0x34) + 0x1c))();
    if (cVar1 != '\0') {
      FUN_009a0940(param_1);
      (**(code **)(*(int *)(in_ECX + 0x28) + 4))(param_1);
    }
  }
  cVar1 = *(char *)(in_ECX + 0x68);
  FUN_009a0940(param_1);
  puVar2 = &DAT_00dfbbd0;
  if (cVar1 == '\0') {
    puVar2 = &DAT_00dfbbd4;
  }
  _sprintf(local_104,"%s",puVar2);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  if (*(char *)(in_ECX + 0x69) != '\0') {
    FUN_0099f470(*(char *)(in_ECX + 0x69));
  }
  return;
}

