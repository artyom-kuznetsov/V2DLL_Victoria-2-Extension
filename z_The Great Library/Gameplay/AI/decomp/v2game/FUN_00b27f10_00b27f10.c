// FUN_00b27f10 @ 00b27f10 body=[[00b27f10, 00b27f67]]


undefined8 FUN_00b27f10(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00b26dc0(param_2,&param_1);
  if ((param_1 != 0) || (uVar2 = 0, iVar1 != 0)) {
    uVar2 = 1;
  }
  *param_3 = uVar2;
  if (param_1 != 0) {
    return 1;
  }
  if (iVar1 == 0) {
    FUN_00b1f840(0);
    return 0xffffffffffffffff;
  }
  return *(undefined8 *)(iVar1 + 0x28);
}

