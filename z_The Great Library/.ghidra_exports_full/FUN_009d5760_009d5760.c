// FUN_009d5760 @ 009d5760 body=[[009d5760, 009d5800]]


undefined4 FUN_009d5760(int *param_1)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  undefined1 local_4c [60];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3dfe8;
  local_10 = ExceptionList;
  piVar1 = *(int **)(in_ECX + 0x30);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  ExceptionList = &local_10;
  iVar2 = FUN_009d6f60(piVar1,local_4c,piVar1[1] - *piVar1);
  local_8 = 0;
  FUN_009d5e10(iVar2);
  FUN_009d5f10(iVar2 + 0x10);
  FUN_00408ed0(iVar2 + 0x20,0,0xffffffff);
  FUN_009d6f00();
  *(int *)(in_ECX + 0x34) = *(int *)(in_ECX + 0x34) + (param_1[1] - *param_1);
  ExceptionList = local_10;
  return 1;
}

