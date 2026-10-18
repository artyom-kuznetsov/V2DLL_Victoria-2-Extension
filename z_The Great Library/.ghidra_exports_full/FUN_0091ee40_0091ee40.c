// FUN_0091ee40 @ 0091ee40 body=[[0091ee40, 0091eed3] [0091eed7, 0091eee9]]


/* WARNING: Removing unreachable block (ram,0x0091eeca) */

void FUN_0091ee40(undefined4 param_1)

{
  char cVar1;
  char *pcVar2;
  int in_ECX;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00bbc108;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_009112b0(param_1);
  if (*(int *)(in_ECX + 0x2c) != 0) {
    pcVar2 = (char *)(in_ECX + 0x28);
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    FUN_00409350((char *)(in_ECX + 0x28),(int)pcVar2 - (in_ECX + 0x29));
    local_c = 0;
    FUN_009a0940(param_1);
    FUN_0099f770(param_1,0);
  }
  ExceptionList = local_14;
  return;
}

