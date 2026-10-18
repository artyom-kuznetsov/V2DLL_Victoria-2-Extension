// FUN_00b08610 @ 00b08610 body=[[00b08610, 00b086e8]]


void FUN_00b08610(void)

{
  uint uVar1;
  int *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00b38ffd;
  local_c = ExceptionList;
  uVar1 = DAT_00ef259c ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  local_4 = 2;
  if ((int *)**(int **)(DAT_00f209e0 + 0x3c) != (int *)0x0) {
    (**(code **)(*(int *)**(int **)(DAT_00f209e0 + 0x3c) + 0x10))();
  }
  (*(code *)PTR__free_00f01b10)(in_ECX[4],uVar1);
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  if (*in_ECX != 0) {
    (*(code *)PTR__free_00f01b10)(*in_ECX);
    *in_ECX = 0;
  }
  in_ECX[0x14] = 0;
  in_ECX[0x15] = 0;
  if (in_ECX[0x13] != 0) {
    (*(code *)PTR__free_00f01b10)(in_ECX[0x13]);
    in_ECX[0x13] = 0;
  }
  local_4._0_1_ = 1;
  FUN_00b08ee0();
  local_4 = (uint)local_4._1_3_ << 8;
  if (in_ECX[0x13] != 0) {
    (*(code *)PTR__free_00f01b10)(in_ECX[0x13]);
  }
  local_4 = 0xffffffff;
  if (*in_ECX != 0) {
    (*(code *)PTR__free_00f01b10)(*in_ECX);
  }
  ExceptionList = local_c;
  return;
}

