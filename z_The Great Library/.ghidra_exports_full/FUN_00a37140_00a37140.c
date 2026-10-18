// FUN_00a37140 @ 00a37140 body=[[00a37140, 00a371e5]]


void FUN_00a37140(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4,undefined4 param_5
                 ,undefined4 param_6,int *param_7,undefined4 param_8,undefined4 param_9)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *unaff_ESI;
  undefined4 uVar3;
  undefined1 local_10 [4];
  undefined4 local_c;
  
  uVar2 = 0;
  if (((param_7 == (int *)0x0) || ((int *)*param_7 == (int *)0x0)) ||
     (puVar1 = *(undefined4 **)*param_7, puVar1 == (undefined4 *)0x0)) {
    local_c = 0;
  }
  else {
    local_c = *puVar1;
  }
  if (((param_4 == (int *)0x0) || ((int *)*param_4 == (int *)0x0)) ||
     (puVar1 = *(undefined4 **)*param_4, puVar1 == (undefined4 *)0x0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
  }
  if (((param_1 != (int *)0x0) && ((int *)*param_1 != (int *)0x0)) &&
     (puVar1 = *(undefined4 **)*param_1, puVar1 != (undefined4 *)0x0)) {
    uVar2 = *puVar1;
  }
  FUN_00a37aa0(local_10,uVar2,param_3,uVar3,param_6,local_c,param_9,param_9);
  unaff_ESI[2] = local_c;
  *unaff_ESI = 0;
  unaff_ESI[1] = 0;
  if ((param_7 != (int *)0x0) && ((undefined4 *)*param_7 != (undefined4 *)0x0)) {
    *unaff_ESI = *(undefined4 *)*param_7;
  }
  return;
}

