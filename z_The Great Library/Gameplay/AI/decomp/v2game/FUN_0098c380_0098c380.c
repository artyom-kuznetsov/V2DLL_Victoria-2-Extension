// FUN_0098c380 @ 0098c380 body=[[0098c380, 0098c3c6]]


void FUN_0098c380(int *param_1,int param_2,uint param_3,undefined4 param_4,uint param_5)

{
  int *in_EAX;
  uint uVar1;
  
  if (param_3 != param_5) {
    do {
      uVar1 = param_3 >> 2;
      if (*(uint *)(param_2 + 8) <= uVar1) {
        uVar1 = uVar1 - *(uint *)(param_2 + 8);
      }
    } while ((*(int *)(*(int *)(*(int *)(param_2 + 4) + uVar1 * 4) + (param_3 & 3) * 4) != *in_EAX)
            && (param_3 = param_3 + 1, param_3 != param_5));
  }
  param_1[1] = param_3;
  *param_1 = param_2;
  return;
}

