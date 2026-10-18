// FUN_0098f1c0 @ 0098f1c0 body=[[0098f1c0, 0098f1d6] [0098f1e0, 0098f243]]


void FUN_0098f1c0(void)

{
  uint in_EAX;
  int iVar1;
  int *unaff_EDI;
  undefined **local_14 [3];
  char *local_8;
  
  if ((int)in_EAX < 0) {
    in_EAX = 0;
  }
  else if (0x3fffffff < in_EAX) {
    local_8 = (char *)0x0;
    std::exception::exception((exception *)local_14,&local_8);
    local_14[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_14,&DAT_00e6fb20);
  }
  iVar1 = 0;
  while ((0 < (int)in_EAX && (iVar1 = FUN_00ab02b9(in_EAX * 4,&DAT_00f1f961), iVar1 == 0))) {
    in_EAX = (int)in_EAX / 2;
  }
  unaff_EDI[1] = in_EAX;
  *unaff_EDI = iVar1;
  return;
}

