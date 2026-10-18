// FUN_007ccf90 @ 007ccf90 body=[[007ccf90, 007ccfdc]]


void FUN_007ccf90(undefined4 param_1)

{
  int in_EAX;
  uint uVar1;
  undefined4 *unaff_ESI;
  undefined4 local_8;
  
  for (uVar1 = in_EAX - (int)unaff_ESI; 4 < (int)(uVar1 & 0xfffffffc); uVar1 = uVar1 - 4) {
    local_8 = *(undefined4 *)((int)unaff_ESI + (uVar1 - 4));
    *(undefined4 *)((int)unaff_ESI + (uVar1 - 4)) = *unaff_ESI;
    FUN_007d0600(0,&local_8,param_1);
  }
  return;
}

