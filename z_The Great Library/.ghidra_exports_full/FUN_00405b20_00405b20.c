// FUN_00405b20 @ 00405b20 body=[[00405b20, 00405c32]]


void FUN_00405b20(undefined4 param_1,undefined4 param_2,char param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  int *unaff_ESI;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b48078;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_004063e0();
  (**(code **)(*(int *)unaff_ESI[0x74] + 0x40))();
  piVar1 = (int *)FUN_005c2ad0();
  iVar2 = (**(code **)(*piVar1 + 0x48))();
  (**(code **)(unaff_ESI[0x14] + 0x10))();
  *unaff_ESI = iVar2;
  *(undefined4 *)(iVar2 + 0x158) = param_5;
  FUN_00408b00();
  FUN_00408b00();
  (**(code **)(*(int *)*unaff_ESI + 0xa4))();
  (**(code **)(*(int *)*unaff_ESI + 0x34))();
  (**(code **)(unaff_ESI[0x14] + 0x20))();
  if (param_3 != '\0') {
    local_8 = 0;
    FUN_009beeb0(unaff_ESI + 4);
    local_8 = 0xffffffff;
    FUN_0098d3b0(*unaff_ESI,param_1);
  }
  ExceptionList = local_10;
  return;
}

