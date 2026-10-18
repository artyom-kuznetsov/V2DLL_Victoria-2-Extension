// FUN_00a37b70 @ 00a37b70 body=[[00a37b70, 00a37c17]]


void FUN_00a37b70(int *param_1,undefined4 param_2,int param_3,int *param_4,undefined4 param_5,
                 int param_6,int *param_7,undefined4 param_8,int param_9)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *unaff_ESI;
  
  if ((param_3 != param_6) && (param_6 != param_9)) {
    if ((param_7 == (int *)0x0) ||
       (((int *)*param_7 == (int *)0x0 ||
        (puVar1 = *(undefined4 **)*param_7, puVar1 == (undefined4 *)0x0)))) {
      uVar2 = 0;
    }
    else {
      uVar2 = *puVar1;
    }
    if (((param_4 == (int *)0x0) || ((int *)*param_4 == (int *)0x0)) ||
       (puVar1 = *(undefined4 **)*param_4, puVar1 == (undefined4 *)0x0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = *puVar1;
    }
    if (((param_1 == (int *)0x0) || ((int *)*param_1 == (int *)0x0)) ||
       (puVar1 = *(undefined4 **)*param_1, puVar1 == (undefined4 *)0x0)) {
      uVar4 = 0;
    }
    else {
      uVar4 = *puVar1;
    }
    FUN_00a37d00(uVar4,param_3,uVar3,param_6,uVar2,param_9,param_3);
    param_3 = param_3 + (param_9 - param_6);
  }
  *unaff_ESI = 0;
  unaff_ESI[1] = 0;
  unaff_ESI[2] = param_3;
  if ((param_1 != (int *)0x0) && ((undefined4 *)*param_1 != (undefined4 *)0x0)) {
    *unaff_ESI = *(undefined4 *)*param_1;
  }
  return;
}

