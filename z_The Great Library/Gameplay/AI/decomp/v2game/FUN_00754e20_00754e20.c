// FUN_00754e20 @ 00754e20 body=[[00754e20, 00754e66] [00754e6a, 00754e99] [00754ea3, 00754f1a] [00754f1e, 00754f5e] [00754f62, 00754f8e]]


void FUN_00754e20(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b44235;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = CFrontEnd::vftable;
  in_ECX[0x22] = CFrontEnd::vftable;
  local_8 = 0;
  if (in_ECX[0x1d3] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x1d3]);
  }
  in_ECX[0x1d3] = 0;
  in_ECX[0x1d4] = 0;
  in_ECX[0x1d5] = 0;
  in_ECX[0x1c6] = CScrollbarObserver::vftable;
  if (in_ECX[0x1bd] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x1bd]);
  }
  in_ECX[0x1bd] = 0;
  in_ECX[0x1be] = 0;
  in_ECX[0x1bf] = 0;
  local_8._0_1_ = 6;
  local_8._1_3_ = 0;
  if ((undefined4 *)in_ECX[0x1a0] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x1a0])(1);
  }
  in_ECX[0xe0] = C3dObject::vftable;
  FUN_009f8f70();
  local_8._0_1_ = 4;
  if ((undefined4 *)in_ECX[0xdd] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0xdd])(1);
  }
  local_8 = CONCAT31(local_8._1_3_,3);
  FUN_0098b4c0();
  if (0xf < (uint)in_ECX[0x75]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x70]);
  }
  in_ECX[0x75] = 0xf;
  in_ECX[0x74] = 0;
  *(undefined1 *)(in_ECX + 0x70) = 0;
  in_ECX[0x58] = CButtonObserver::vftable;
  FUN_00648a60();
  if (0xf < (uint)in_ECX[0x2b]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x26]);
  }
  in_ECX[0x2b] = 0xf;
  in_ECX[0x2a] = 0;
  *(undefined1 *)(in_ECX + 0x26) = 0;
  FUN_00647e40();
  ExceptionList = local_10;
  return;
}

