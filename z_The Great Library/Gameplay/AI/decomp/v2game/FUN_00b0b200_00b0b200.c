// FUN_00b0b200 @ 00b0b200 body=[[00b0b200, 00b0b2e7]]


void FUN_00b0b200(void)

{
  int iVar1;
  uint uVar2;
  int *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00b39326;
  local_c = ExceptionList;
  uVar2 = DAT_00ef259c ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  local_4 = 3;
  if (*(char *)((int)in_ECX + 0x41) == '\x01') {
    FUN_00ae36e0(in_ECX,0);
  }
  FUN_00b0af90(uVar2);
  iVar1 = in_ECX[5];
  while (iVar1 != 0) {
    iVar1 = *(int *)in_ECX[4];
    if (iVar1 != 0) {
      FUN_00b0b200();
      (*(code *)PTR__free_00f01b10)(iVar1);
    }
    iVar1 = in_ECX[5];
  }
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  if (in_ECX[4] != 0) {
    (*(code *)PTR__free_00f01b10)(in_ECX[4]);
    in_ECX[4] = 0;
  }
  local_4._0_1_ = 2;
  FUN_00b13650();
  local_4._0_1_ = 1;
  FUN_00b13650();
  local_4 = (uint)local_4._1_3_ << 8;
  if (in_ECX[4] != 0) {
    (*(code *)PTR__free_00f01b10)(in_ECX[4]);
  }
  local_4 = 0xffffffff;
  if (*in_ECX != 0) {
    (*(code *)PTR__free_00f01b10)(*in_ECX);
  }
  ExceptionList = local_c;
  return;
}

