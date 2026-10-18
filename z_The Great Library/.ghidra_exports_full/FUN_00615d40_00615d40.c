// FUN_00615d40 @ 00615d40 body=[[00615d40, 00615da4] [00615da8, 00615df9]]


/* WARNING: Removing unreachable block (ram,0x00615d9c) */

void FUN_00615d40(void)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3def8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00409350("diplomaticoffer",0xf);
  local_8 = 0;
  FUN_009c7290();
  uVar2 = FUN_009c7870(1);
  local_8 = 0xffffffff;
  piVar3 = (int *)FUN_009c7290();
  cVar1 = (**(code **)(*piVar3 + 0x6c))(uVar2);
  if (cVar1 == '\0') {
    piVar3 = (int *)FUN_009c7290();
    cVar1 = (**(code **)(*piVar3 + 0x68))(uVar2);
    if (cVar1 != '\0') {
      ExceptionList = local_10;
      return;
    }
  }
  piVar3 = (int *)FUN_009c7290();
  (**(code **)(*piVar3 + 0x24))(uVar2);
  ExceptionList = local_10;
  return;
}

