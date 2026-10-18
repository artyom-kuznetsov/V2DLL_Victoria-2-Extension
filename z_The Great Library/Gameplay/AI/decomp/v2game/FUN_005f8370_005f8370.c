// FUN_005f8370 @ 005f8370 body=[[005f8370, 005f841d] [005f8427, 005f8465]]


void FUN_005f8370(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b3f834;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = CBackEndIdler::vftable;
  in_ECX[0x22] = CBackEndIdler::vftable;
  local_8 = 6;
  if ((int *)in_ECX[0x194] != (int *)0x0) {
    (**(code **)(*(int *)in_ECX[0x194] + 4))(1);
  }
  in_ECX[0x180] = CButtonObserver::vftable;
  in_ECX[0x16c] = CButtonObserver::vftable;
  local_8._0_1_ = 7;
  if ((undefined4 *)in_ECX[0x14f] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x14f])(1);
  }
  in_ECX[0x8f] = C3dObject::vftable;
  FUN_009f8f70();
  local_8._0_1_ = 2;
  FUN_0098b4c0();
  if (in_ECX[0x2b] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x2b]);
  }
  in_ECX[0x2b] = 0;
  in_ECX[0x2c] = 0;
  in_ECX[0x2d] = 0;
  local_8 = (uint)local_8._1_3_ << 8;
  if ((undefined4 *)in_ECX[0x29] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x29])(1);
  }
  FUN_00647e40();
  ExceptionList = local_10;
  return;
}

