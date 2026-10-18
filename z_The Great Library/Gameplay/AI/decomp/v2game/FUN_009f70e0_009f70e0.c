// FUN_009f70e0 @ 009f70e0 body=[[009f70e0, 009f7165] [009f7169, 009f7185] [009f7189, 009f7198]]


void FUN_009f70e0(void)

{
  undefined4 uVar1;
  undefined1 *unaff_EDI;
  uint in_stack_ffffffb4;
  uint local_38;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b64fc8;
  local_10 = ExceptionList;
  local_14 = 0;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_00448860(1,10);
  local_8 = 1;
  uVar1 = FUN_00988f20(local_30);
  local_8 = CONCAT31(local_8._1_3_,2);
  *(undefined4 *)(unaff_EDI + 0x14) = 0xf;
  *(undefined4 *)(unaff_EDI + 0x10) = 0;
  *unaff_EDI = 0;
  FUN_00408ed0(uVar1,0,0xffffffff);
  unaff_EDI[0x1c] = 1;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_stack_ffffffb4);
  }
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0],in_stack_ffffffb4 & 0xffffff00);
  }
  ExceptionList = local_10;
  return;
}

