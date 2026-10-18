// FUN_00728390 @ 00728390 body=[[00728390, 007283dd]]


void FUN_00728390(undefined4 param_1)

{
  uint uVar1;
  int in_EAX;
  undefined4 *unaff_ESI;
  undefined4 local_8;
  
  uVar1 = in_EAX - (int)unaff_ESI;
  while (4 < (int)(uVar1 & 0xfffffffc)) {
    local_8 = *(undefined4 *)((int)unaff_ESI + (uVar1 - 4));
    *(undefined4 *)((int)unaff_ESI + (uVar1 - 4)) = *unaff_ESI;
    FUN_00729020(0,(int)(uVar1 - 4) >> 2,&local_8,param_1);
    uVar1 = uVar1 - 4;
  }
  return;
}

