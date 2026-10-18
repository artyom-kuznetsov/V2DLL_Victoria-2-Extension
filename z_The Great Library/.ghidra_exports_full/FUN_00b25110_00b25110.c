// FUN_00b25110 @ 00b25110 body=[[00b25110, 00b25156]]


undefined4 FUN_00b25110(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00b25010(param_2,&param_1);
  if ((param_1 != 0) || (uVar2 = 0, iVar1 != 0)) {
    uVar2 = 1;
  }
  *param_3 = uVar2;
  if (param_1 != 0) {
    return 1;
  }
  FUN_00b1f840("File not found");
  return 0;
}

