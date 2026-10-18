// FUN_0098c3d0 @ 0098c3d0 body=[[0098c3d0, 0098c473]]


void FUN_0098c3d0(undefined4 param_1,undefined4 param_2,uint param_3,int *param_4,undefined4 param_5
                 ,uint param_6,int *param_7,undefined4 param_8,uint param_9)

{
  undefined4 *in_EAX;
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  while (param_3 != param_6) {
    param_6 = param_6 - 1;
    if (param_4 == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *param_4;
    }
    uVar1 = param_6 >> 2;
    if (*(uint *)(iVar3 + 8) <= uVar1) {
      uVar1 = uVar1 - *(uint *)(iVar3 + 8);
    }
    param_9 = param_9 - 1;
    if (param_7 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *param_7;
    }
    uVar2 = param_9 >> 2;
    if (*(uint *)(iVar4 + 8) <= uVar2) {
      uVar2 = uVar2 - *(uint *)(iVar4 + 8);
    }
    *(undefined4 *)(*(int *)(*(int *)(iVar4 + 4) + uVar2 * 4) + (param_9 & 3) * 4) =
         *(undefined4 *)(*(int *)(*(int *)(iVar3 + 4) + uVar1 * 4) + (param_6 & 3) * 4);
  }
  *in_EAX = 0;
  in_EAX[1] = 0;
  if (param_7 != (int *)0x0) {
    if ((undefined4 *)*param_7 == (undefined4 *)0x0) {
      in_EAX[2] = param_9;
      return;
    }
    *in_EAX = *(undefined4 *)*param_7;
  }
  in_EAX[2] = param_9;
  return;
}

