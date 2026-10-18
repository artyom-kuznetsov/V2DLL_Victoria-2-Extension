// FUN_00558300 @ 00558300 body=[[00558300, 0055834d]]


void FUN_00558300(undefined4 param_1)

{
  uint uVar1;
  int in_EAX;
  undefined4 *unaff_ESI;
  undefined4 local_8;
  
  uVar1 = in_EAX - (int)unaff_ESI;
  while (4 < (int)(uVar1 & 0xfffffffc)) {
    local_8 = *(undefined4 *)((int)unaff_ESI + (uVar1 - 4));
    *(undefined4 *)((int)unaff_ESI + (uVar1 - 4)) = *unaff_ESI;
    FUN_005599a0(0,(int)(uVar1 - 4) >> 2,&local_8,param_1);
    uVar1 = uVar1 - 4;
  }
  return;
}

