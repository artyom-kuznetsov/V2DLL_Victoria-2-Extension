// FUN_00988fa0 @ 00988fa0  (requested 00988FA0, first bytes: 55 8B EC 6A FF 68 08 C1)


/* WARNING: Removing unreachable block (ram,0x00988fff) */

void FUN_00988fa0(undefined4 param_1)

{
  char cVar1;
  char *pcVar2;
  char *in_EDX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00bbc108;
  local_10 = ExceptionList;
  pcVar2 = in_EDX;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_10;
  FUN_00409350(in_EDX,(int)pcVar2 - (int)(in_EDX + 1));
  local_8 = 0;
  FUN_00988f20(param_1);
  ExceptionList = local_10;
  return;
}

