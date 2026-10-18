// FUN_00a03dd0 @ 00a03dd0 body=[[00a03dd0, 00a03e5f]]


void FUN_00a03dd0(undefined4 param_1)

{
  char cVar1;
  int *piVar2;
  undefined1 *puVar3;
  int in_ECX;
  char local_104 [256];
  
  FUN_009a2520(param_1);
  piVar2 = *(int **)(in_ECX + 0x84);
  FUN_009a0940(param_1);
  (**(code **)(*piVar2 + 4))(param_1);
  cVar1 = *(char *)(in_ECX + 0x80);
  FUN_009a0940(param_1);
  puVar3 = &DAT_00dfbbd0;
  if (cVar1 == '\0') {
    puVar3 = &DAT_00dfbbd4;
  }
  _sprintf(local_104,"%s",puVar3);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  return;
}

