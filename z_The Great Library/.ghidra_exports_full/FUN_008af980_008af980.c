// FUN_008af980 @ 008af980 body=[[008af980, 008afa6f] [008afa73, 008afa86]]


void FUN_008af980(undefined4 param_1)

{
  undefined4 *unaff_ESI;
  uint in_stack_00000018;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3ce98;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  *unaff_ESI = CMission::vftable;
  unaff_ESI[1] = 0x18d;
  unaff_ESI[7] = 0xf;
  unaff_ESI[6] = 0;
  *(undefined1 *)(unaff_ESI + 2) = 0;
  FUN_00408ed0(&param_1,0,0xffffffff);
  unaff_ESI[9] = 0;
  unaff_ESI[0xb] = 0x18d;
  unaff_ESI[10] = CMeanTimeToHappen::vftable;
  unaff_ESI[0xd] = 0;
  unaff_ESI[0xe] = 0;
  unaff_ESI[0xf] = 0;
  unaff_ESI[0xc] = 1000;
  unaff_ESI[0x12] = 0x18d;
  unaff_ESI[0x13] = 0;
  unaff_ESI[0x14] = 0;
  unaff_ESI[0x15] = 0;
  *(undefined2 *)(unaff_ESI + 0x17) = 0;
  unaff_ESI[0x11] = CAndTrigger::vftable;
  unaff_ESI[0x19] = 0x18d;
  unaff_ESI[0x1a] = 0;
  unaff_ESI[0x1b] = 0;
  unaff_ESI[0x1c] = 0;
  *(undefined2 *)(unaff_ESI + 0x1e) = 0;
  unaff_ESI[0x18] = CAndTrigger::vftable;
  unaff_ESI[0x20] = 0x18d;
  unaff_ESI[0x21] = 0;
  unaff_ESI[0x22] = 0;
  unaff_ESI[0x23] = 0;
  *(undefined2 *)(unaff_ESI + 0x25) = 0;
  unaff_ESI[0x1f] = CAndTrigger::vftable;
  unaff_ESI[0x28] = 0;
  unaff_ESI[0x29] = 0;
  unaff_ESI[0x2a] = 0;
  *(undefined1 *)(unaff_ESI + 0x2b) = 0;
  unaff_ESI[0x27] = 0x18d;
  unaff_ESI[0x26] = CEffect::vftable;
  *(undefined2 *)(unaff_ESI + 0x2d) = 0;
  if (0xf < in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1);
  }
  ExceptionList = local_10;
  return;
}

