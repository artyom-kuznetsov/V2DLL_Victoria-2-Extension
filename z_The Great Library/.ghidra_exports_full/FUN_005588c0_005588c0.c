// FUN_005588c0 @ 005588c0 body=[[005588c0, 0055890d]]


void FUN_005588c0(undefined4 param_1)

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
    FUN_00559cb0((int)uVar1 >> 2,&local_8,param_1);
  }
  return;
}

