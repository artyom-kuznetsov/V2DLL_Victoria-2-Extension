// FUN_0058e7c0 @ 0058e7c0 body=[[0058e7c0, 0058e861] [0058e865, 0058e8ca]]


/* WARNING: Removing unreachable block (ram,0x0058e858) */

void FUN_0058e7c0(undefined4 param_1)

{
  undefined4 uVar1;
  char cVar2;
  char *pcVar3;
  int in_ECX;
  char acStack_118 [260];
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b619bb;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  FUN_009a2520(param_1);
  pcVar3 = (char *)(in_ECX + 0x3c);
  do {
    cVar2 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar2 != '\0');
  FUN_00409350((char *)(in_ECX + 0x3c),(int)pcVar3 - (in_ECX + 0x3d));
  local_c = 0;
  FUN_009a0940(param_1);
  FUN_0099f770(param_1,0);
  local_c = 0xffffffff;
  cVar2 = (**(code **)(**(int **)(in_ECX + 0x44) + 0x20))();
  if (cVar2 != '\0') {
    uVar1 = *(undefined4 *)(*(int *)(in_ECX + 0x44) + 0xc);
    FUN_009a0940(param_1);
    _sprintf(acStack_118,"%u",uVar1);
    FUN_0099ff90(param_1);
    FUN_004013e0(param_1);
  }
  ExceptionList = pvStack_14;
  return;
}

