// FUN_00522430 @ 00522430 body=[[00522430, 005224ef]]


void FUN_00522430(int param_1,char param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int unaff_EDI;
  char acStack_118 [248];
  undefined4 uStack_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b524bb;
  local_10 = ExceptionList;
  if (param_2 != '\0') {
    uStack_20 = 0x52245e;
    ExceptionList = &local_10;
    iVar1 = FUN_00aae9af();
    iVar3 = 0;
    local_8 = 0;
    if (iVar1 != 0) {
      uStack_20 = 0x522475;
      iVar3 = FUN_005eb150();
    }
    local_8 = 0xffffffff;
    piVar2 = (int *)(param_1 + 0x18);
    if (0xf < *(uint *)(param_1 + 0x2c)) {
      piVar2 = (int *)*piVar2;
    }
    __snprintf(acStack_118,0xff,"%s",piVar2);
    FUN_005eb1c0();
    *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(DAT_012588e8 + 0xb0c);
    uStack_20 = 0x5224d8;
    (**(code **)(*(int *)(unaff_EDI + 0x9b4) + 0x18))();
  }
  *(int *)(unaff_EDI + 0xe64) = param_1;
  ExceptionList = local_10;
  return;
}

