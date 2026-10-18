// FUN_00a47cf0 @ 00a47cf0 body=[[00a47cf0, 00a47d4d]]


void FUN_00a47cf0(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4,undefined4 param_5
                 ,undefined4 param_6)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (((param_4 == (int *)0x0) || ((int *)*param_4 == (int *)0x0)) ||
     (puVar1 = *(undefined4 **)*param_4, puVar1 == (undefined4 *)0x0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar1;
  }
  if (((param_1 != (int *)0x0) && ((int *)*param_1 != (int *)0x0)) &&
     (puVar1 = *(undefined4 **)*param_1, puVar1 != (undefined4 *)0x0)) {
    FUN_00a47e00(param_6,*puVar1,param_3,uVar2,param_6);
    return;
  }
  FUN_00a47e00(param_6,0,param_3,uVar2,param_6);
  return;
}

