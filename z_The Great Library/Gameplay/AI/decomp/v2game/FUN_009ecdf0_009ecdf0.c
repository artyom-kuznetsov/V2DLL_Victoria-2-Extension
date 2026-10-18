// FUN_009ecdf0 @ 009ecdf0 body=[[009ecdf0, 009ecf9b]]


int * FUN_009ecdf0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int unaff_ESI;
  void *pvStack_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b52706;
  local_14 = ExceptionList;
  if (*(char *)(unaff_ESI + 0x9c) != '\0') {
    ExceptionList = &local_14;
    iVar1 = FUN_00aae9af(0xfc);
    local_c = 1;
    if (iVar1 == 0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)FUN_009c3c70(iVar1,*(undefined4 *)(unaff_ESI + 100),
                                   *(undefined4 *)(unaff_ESI + 0x68),unaff_ESI + 0x6c,param_1,
                                   CONCAT44((float)*(int *)(unaff_ESI + 0x98),
                                            (float)*(int *)(unaff_ESI + 0x94)),0,
                                   *(undefined1 *)(unaff_ESI + 0x9c),
                                   *(undefined4 *)(unaff_ESI + 0xa0),
                                   *(undefined4 *)(unaff_ESI + 0xa4),
                                   *(undefined4 *)(unaff_ESI + 0xac),param_2,param_3);
    }
    local_c = 0xffffffff;
    (**(code **)(*piVar2 + 0x48))(*(undefined4 *)(unaff_ESI + 0xa8));
    ExceptionList = pvStack_18;
    return piVar2;
  }
  ExceptionList = &local_14;
  iVar1 = FUN_00aae9af(0xfc);
  local_c = 0;
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_009c3c70(iVar1,*(undefined4 *)(unaff_ESI + 100),
                                 *(undefined4 *)(unaff_ESI + 0x68),unaff_ESI + 0x6c,param_1,
                                 *(undefined8 *)(unaff_ESI + 0x88),*(undefined4 *)(unaff_ESI + 0x90)
                                 ,*(undefined1 *)(unaff_ESI + 0x9c),
                                 *(undefined4 *)(unaff_ESI + 0xa0),0,
                                 *(undefined4 *)(unaff_ESI + 0xac),param_2,param_3);
    ExceptionList = local_14;
    return piVar2;
  }
  ExceptionList = local_14;
  return (int *)0x0;
}

