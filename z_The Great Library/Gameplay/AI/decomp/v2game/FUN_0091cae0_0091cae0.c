// FUN_0091cae0 @ 0091cae0 body=[[0091cae0, 0091cb6b]]


void FUN_0091cae0(undefined4 param_1)

{
  char cVar1;
  undefined1 *puVar2;
  int in_ECX;
  char local_104 [256];
  
  FUN_009112b0(param_1);
  FUN_009a0940(param_1);
  (**(code **)(*(int *)(in_ECX + 0x28) + 4))(param_1);
  cVar1 = *(char *)(in_ECX + 0x98);
  FUN_009a0940(param_1);
  puVar2 = &DAT_00dfbbd0;
  if (cVar1 == '\0') {
    puVar2 = &DAT_00dfbbd4;
  }
  _sprintf(local_104,"%s",puVar2);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  return;
}

