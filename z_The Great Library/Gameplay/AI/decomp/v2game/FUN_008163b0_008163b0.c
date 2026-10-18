// FUN_008163b0 @ 008163b0 body=[[008163b0, 0081640d]]


void FUN_008163b0(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4,undefined4 param_5
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
    FUN_008164c0(param_6,*puVar1,param_3,uVar2,param_6);
    return;
  }
  FUN_008164c0(param_6,0,param_3,uVar2,param_6);
  return;
}

