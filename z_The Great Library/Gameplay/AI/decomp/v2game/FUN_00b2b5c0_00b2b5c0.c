// FUN_00b2b5c0 @ 00b2b5c0 body=[[00b2b5c0, 00b2b5ef]]


uint FUN_00b2b5c0(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  
  puVar1 = param_3;
  uVar2 = (*(code *)*param_1)(param_1,param_2,param_3,&param_1);
  if (uVar2 == 0) {
    uVar2 = -(uint)(param_1 != puVar1) & 0x80004005;
  }
  return uVar2;
}

