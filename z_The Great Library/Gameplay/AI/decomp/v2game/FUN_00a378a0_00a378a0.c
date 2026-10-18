// FUN_00a378a0 @ 00a378a0 body=[[00a378a0, 00a37939]]


void FUN_00a378a0(undefined4 param_1,undefined4 param_2,uint param_3,int *param_4,undefined4 param_5
                 ,uint param_6,int *param_7,undefined4 param_8,int param_9)

{
  uint uVar1;
  int iVar2;
  undefined4 *unaff_EDI;
  
  while (param_3 != param_6) {
    param_6 = param_6 - 1;
    iVar2 = 0;
    if (param_4 != (int *)0x0) {
      iVar2 = *param_4;
    }
    uVar1 = param_6;
    if (*(uint *)(iVar2 + 8) <= param_6) {
      uVar1 = param_6 - *(uint *)(iVar2 + 8);
    }
    param_9 = param_9 + -1;
    FUN_00408ed0(*(undefined4 *)(*(int *)(iVar2 + 4) + uVar1 * 4),0,0xffffffff);
  }
  *unaff_EDI = 0;
  unaff_EDI[1] = 0;
  if (param_7 != (int *)0x0) {
    if ((undefined4 *)*param_7 != (undefined4 *)0x0) {
      *unaff_EDI = *(undefined4 *)*param_7;
      unaff_EDI[2] = param_9;
      return;
    }
    unaff_EDI[2] = param_9;
    return;
  }
  unaff_EDI[2] = param_9;
  return;
}

