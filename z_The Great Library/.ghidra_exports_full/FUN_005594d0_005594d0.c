// FUN_005594d0 @ 005594d0 body=[[005594d0, 0055959f]]


void FUN_005594d0(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *in_EAX;
  undefined4 *in_EDX;
  
  iVar1 = in_EAX[1];
  if (*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + iVar1 * 4) + 0x1410) <
      *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + param_1[1] * 4) + 0x1410)) {
    uVar2 = *in_EAX;
    *in_EAX = *param_1;
    in_EAX[1] = param_1[1];
    *param_1 = uVar2;
    param_1[1] = iVar1;
  }
  iVar1 = in_EDX[1];
  if (*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + iVar1 * 4) + 0x1410) <
      *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + in_EAX[1] * 4) + 0x1410)) {
    uVar2 = *in_EDX;
    *in_EDX = *in_EAX;
    in_EDX[1] = in_EAX[1];
    *in_EAX = uVar2;
    in_EAX[1] = iVar1;
  }
  if (*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + in_EAX[1] * 4) + 0x1410) <
      *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + param_1[1] * 4) + 0x1410)) {
    uVar2 = *in_EAX;
    uVar3 = in_EAX[1];
    *in_EAX = *param_1;
    in_EAX[1] = param_1[1];
    *param_1 = uVar2;
    param_1[1] = uVar3;
  }
  return;
}

