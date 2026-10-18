// FUN_00ad41c0 @ 00ad41c0 body=[[00ad41c0, 00ad42f1]]


void FUN_00ad41c0(void)

{
  int iVar1;
  void **ppvVar2;
  uint uVar3;
  int *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00b36eb8;
  uVar3 = DAT_00ef259c ^ (uint)&stack0xffffffe4;
  local_4 = 2;
  iVar1 = in_ECX[1];
  ppvVar2 = &local_c;
  local_c = ExceptionList;
  while (ExceptionList = ppvVar2, iVar1 != 0) {
    iVar1 = *(int *)*in_ECX;
    if (iVar1 != 0) {
      FUN_00ad0e50(uVar3);
      (*(code *)PTR__free_00f01b10)(iVar1);
    }
    ppvVar2 = ExceptionList;
    iVar1 = in_ECX[1];
  }
  iVar1 = in_ECX[5];
  while (iVar1 != 0) {
    iVar1 = **(int **)in_ECX[4];
    if (iVar1 != 0) {
      FUN_00ad7d30();
      (*(code *)PTR__free_00f01b10)(iVar1);
    }
    iVar1 = in_ECX[5];
  }
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  if (*in_ECX != 0) {
    (*(code *)PTR__free_00f01b10)(*in_ECX);
    *in_ECX = 0;
  }
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  if (in_ECX[8] != 0) {
    (*(code *)PTR__free_00f01b10)(in_ECX[8]);
    in_ECX[8] = 0;
  }
  (**(code **)(*(int *)in_ECX[0xd] + 0x10))();
  FUN_00ad4100();
  if ((undefined4 *)in_ECX[0xc] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0xc])(1);
  }
  if ((undefined4 *)in_ECX[0xd] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0xd])(1);
  }
  local_4._0_1_ = 1;
  if (in_ECX[8] != 0) {
    (*(code *)PTR__free_00f01b10)(in_ECX[8]);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00ad44f0();
  local_4 = 0xffffffff;
  if (*in_ECX != 0) {
    (*(code *)PTR__free_00f01b10)(*in_ECX);
  }
  ExceptionList = local_c;
  return;
}

