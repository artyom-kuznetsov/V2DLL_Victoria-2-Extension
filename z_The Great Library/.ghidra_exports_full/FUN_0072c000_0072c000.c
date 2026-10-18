// FUN_0072c000 @ 0072c000 body=[[0072c000, 0072c073] [0072c077, 0072c088]]


/* WARNING: Removing unreachable block (ram,0x0072c06b) */

undefined1 FUN_0072c000(void)

{
  char cVar1;
  int in_ECX;
  undefined1 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b444b9;
  local_10 = ExceptionList;
  uVar2 = 0;
  ExceptionList = &local_10;
  FUN_00409350(&DAT_00ded94d,0);
  local_8 = 0;
  cVar1 = FUN_00416db0();
  if ((cVar1 == '\0') && ((*(char *)(in_ECX + 0x5c) == '\0' || (*(int *)(in_ECX + 0x58) != -1)))) {
    uVar2 = 1;
  }
  ExceptionList = local_10;
  return uVar2;
}

