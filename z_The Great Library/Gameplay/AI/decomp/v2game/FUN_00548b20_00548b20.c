// FUN_00548b20 @ 00548b20 body=[[00548b20, 00548c10]]


int FUN_00548b20(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int unaff_ESI;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3b058;
  local_10 = ExceptionList;
  if (*(int *)(unaff_ESI + 0x54) == 0) {
    ExceptionList = &local_10;
    iVar2 = FUN_00aadb12();
    if (iVar2 != 0) {
      *(undefined1 *)(unaff_ESI + 0x50) = 1;
      *(undefined1 *)(unaff_ESI + 0x49) = 0;
      FUN_00549030();
      *(int *)(unaff_ESI + 0x10) = iVar2 + 8;
      *(int *)(unaff_ESI + 0x14) = iVar2 + 8;
      *(int *)(unaff_ESI + 0x20) = iVar2;
      *(int *)(unaff_ESI + 0x24) = iVar2;
      *(int *)(unaff_ESI + 0x54) = iVar2;
      *(int *)(unaff_ESI + 0x30) = iVar2 + 4;
      *(int *)(unaff_ESI + 0x34) = iVar2 + 4;
      *(undefined4 *)(unaff_ESI + 0x4c) = DAT_013f0824;
      *(undefined4 *)(unaff_ESI + 0x44) = 0;
      uVar3 = FUN_00548ff0();
      local_8 = 0;
      piVar4 = (int *)FUN_0054a690(uVar3);
      cVar1 = (**(code **)(*piVar4 + 4))();
      if (cVar1 != '\0') {
        *(undefined4 *)(unaff_ESI + 0x44) = 0;
        FUN_00445fc0();
        ExceptionList = local_10;
        return unaff_ESI;
      }
      *(int **)(unaff_ESI + 0x44) = piVar4;
      FUN_00549030();
      FUN_00445fc0();
      ExceptionList = local_10;
      return unaff_ESI;
    }
  }
  ExceptionList = local_10;
  return 0;
}

