// FUN_0060e960 @ 0060e960 body=[[0060e960, 0060e9b3]]


void FUN_0060e960(undefined4 param_1,undefined4 param_2)

{
  int in_EAX;
  uint uVar1;
  undefined4 *unaff_ESI;
  undefined4 local_8;
  
  uVar1 = in_EAX - (int)unaff_ESI;
  while (4 < (int)(uVar1 & 0xfffffffc)) {
    local_8 = *(undefined4 *)((int)unaff_ESI + (uVar1 - 4));
    *(undefined4 *)((int)unaff_ESI + (uVar1 - 4)) = *unaff_ESI;
    uVar1 = uVar1 - 4;
    FUN_006109d0((int)uVar1 >> 2,&local_8,param_1,param_2);
  }
  return;
}

