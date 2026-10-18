// FUN_00b23530 @ 00b23530 body=[[00b23530, 00b23577]]


/* WARNING: Removing unreachable block (ram,0x00b23568) */

void FUN_00b23530(undefined4 *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = (uint)(*(int *)(param_1[1] + 0x18) - param_1[2]) / param_3;
  if (uVar1 < param_4) {
    param_4 = uVar1;
  }
  lVar2 = FUN_00b2a250(*param_1,param_2,param_3,param_4);
  if (0 < lVar2) {
    param_1[2] = param_1[2] + (int)lVar2 * param_3;
  }
  return;
}

