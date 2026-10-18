// FUN_00630930 @ 00630930 body=[[00630930, 0063097b]]


void FUN_00630930(undefined4 param_1)

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
    FUN_006315f0((int)uVar1 >> 2,&local_8,param_1);
  }
  return;
}

