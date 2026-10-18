// FUN_0051b200 @ 0051b200 body=[[0051b200, 0051b2b2]]


undefined4 FUN_0051b200(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  int unaff_ESI;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20;
  undefined **local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3ff68;
  local_10 = ExceptionList;
  if ((*(int *)(param_1 + 0xe8) != 0) && (iVar1 = *(int *)(param_2 + 0xe8), iVar1 != 0)) {
    if (*(int *)(param_1 + 0xe8) != iVar1) {
      local_2c = 0;
      local_28 = 0;
      local_24 = 0;
      local_20 = 0;
      local_8 = 0;
      local_18 = *(undefined4 *)(unaff_ESI + 0x1c);
      local_14 = *(undefined4 *)(unaff_ESI + 0x20);
      local_1c = CAccessAreaCostCallback::vftable;
      ExceptionList = &local_10;
      cVar2 = FUN_0048f6e0(iVar1,&local_1c,&local_2c);
      if (cVar2 == '\0') {
        FUN_009a63f0();
        FUN_009a63f0();
        ExceptionList = local_10;
        return 0;
      }
      FUN_009a63f0();
      FUN_009a63f0();
    }
    ExceptionList = local_10;
    return 1;
  }
  return 0;
}

