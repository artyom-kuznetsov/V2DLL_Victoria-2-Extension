// FUN_009c1e60 @ 009c1e60 body=[[009c1e60, 009c1ebe] [009c1ec2, 009c1ed4]]


void FUN_009c1e60(undefined4 param_1,undefined4 param_2)

{
  undefined4 *unaff_ESI;
  uint in_stack_0000001c;
  undefined1 in_stack_00000024;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3a868;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  *unaff_ESI = param_1;
  unaff_ESI[6] = 0xf;
  unaff_ESI[5] = 0;
  *(undefined1 *)(unaff_ESI + 1) = 0;
  FUN_00408ed0(&param_2,0,0xffffffff);
  *(undefined1 *)(unaff_ESI + 8) = in_stack_00000024;
  *(undefined1 *)((int)unaff_ESI + 0x21) = 0;
  unaff_ESI[9] = 0;
  unaff_ESI[10] = 0;
  unaff_ESI[0xb] = 0;
  if (0xf < in_stack_0000001c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_2);
  }
  ExceptionList = local_10;
  return;
}

