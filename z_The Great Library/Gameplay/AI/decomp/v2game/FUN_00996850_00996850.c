// FUN_00996850 @ 00996850 body=[[00996850, 00996900]]


int * FUN_00996850(void)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b5856b;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  iVar1 = FUN_00aae9af(0x1138);
  piVar2 = (int *)0x0;
  local_c = 0;
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_009f9340(iVar1,CONCAT22((short)*(undefined4 *)(in_ECX + 0x6b9c0),
                                                (short)*(undefined4 *)(in_ECX + 0x6b9bc)),in_ECX);
  }
  local_c = 0xffffffff;
  FUN_0068f390();
  (**(code **)(*piVar2 + 0x74))(in_ECX + 0x6b9e0);
  ExceptionList = pvStack_18;
  return piVar2;
}

