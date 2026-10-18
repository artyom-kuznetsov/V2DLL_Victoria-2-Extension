// FUN_00726d40 @ 00726d40 body=[[00726d40, 00726d8d]]


void FUN_00726d40(undefined4 param_1)

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
    FUN_00728ba0((int)uVar1 >> 2,&local_8,param_1);
  }
  return;
}

