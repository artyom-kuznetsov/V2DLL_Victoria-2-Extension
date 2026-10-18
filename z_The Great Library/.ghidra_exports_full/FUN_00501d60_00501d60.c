// FUN_00501d60 @ 00501d60 body=[[00501d60, 00501e07]]


void FUN_00501d60(int param_1)

{
  int *piVar1;
  int iVar2;
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b5b6e0;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  FUN_00568460();
  FUN_00568c80();
  piVar1 = *(int **)(param_1 + 0x4f8);
  *(undefined1 *)(param_1 + 0x504) = 1;
  while (piVar1 != (int *)0x0) {
    if ((char)piVar1[3] == '\0') {
      iVar2 = *piVar1;
      piVar1 = (int *)piVar1[2];
      FUN_00568dc0(*(undefined4 *)(param_1 + 0xbcc),iVar2 + 0x70);
    }
    else {
      piVar1 = (int *)piVar1[2];
    }
  }
  FUN_005499c0();
  FUN_0050ea30();
  FUN_00508330(param_1);
  ExceptionList = pvStack_18;
  return;
}

