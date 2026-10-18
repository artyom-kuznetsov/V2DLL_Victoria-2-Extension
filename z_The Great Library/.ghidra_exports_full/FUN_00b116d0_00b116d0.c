// FUN_00b116d0 @ 00b116d0 body=[[00b116d0, 00b1187a]]


void FUN_00b116d0(void)

{
  int *piVar1;
  uint uVar2;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00b399dc;
  local_c = ExceptionList;
  uVar2 = DAT_00ef259c ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  piVar1 = (int *)in_ECX[1];
  if (piVar1 != (int *)0x0) {
    *(undefined2 *)(piVar1 + 1) = 0;
    local_4 = 0;
    if (*piVar1 != 0) {
      (*(code *)PTR__free_00f01b10)(*piVar1,uVar2);
    }
    *piVar1 = 0;
    if ((undefined4 *)piVar1[2] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)piVar1[2])(1);
    }
    local_4 = 0xffffffff;
    if (*piVar1 != 0) {
      (*(code *)PTR__free_00f01b10)(*piVar1);
    }
    (*(code *)PTR__free_00f01b10)(piVar1);
  }
  piVar1 = (int *)*in_ECX;
  if (piVar1 != (int *)0x0) {
    local_4 = 1;
    *(undefined2 *)(piVar1 + 1) = 0;
    if (*piVar1 != 0) {
      (*(code *)PTR__free_00f01b10)(*piVar1);
    }
    *piVar1 = 0;
    if ((undefined4 *)piVar1[2] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)piVar1[2])(1);
    }
    local_4 = 0xffffffff;
    if (*piVar1 != 0) {
      (*(code *)PTR__free_00f01b10)(*piVar1);
    }
    (*(code *)PTR__free_00f01b10)(piVar1);
  }
  piVar1 = (int *)in_ECX[0x16];
  if (piVar1 != (int *)0x0) {
    local_4 = 2;
    *(undefined2 *)(piVar1 + 1) = 0;
    if (*piVar1 != 0) {
      (*(code *)PTR__free_00f01b10)(*piVar1);
    }
    *piVar1 = 0;
    if ((undefined4 *)piVar1[2] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)piVar1[2])(1);
    }
    local_4 = 0xffffffff;
    if (*piVar1 != 0) {
      (*(code *)PTR__free_00f01b10)(*piVar1);
    }
    (*(code *)PTR__free_00f01b10)(piVar1);
  }
  piVar1 = (int *)in_ECX[0x17];
  if (piVar1 != (int *)0x0) {
    local_4 = 3;
    *(undefined2 *)(piVar1 + 1) = 0;
    if (*piVar1 != 0) {
      (*(code *)PTR__free_00f01b10)(*piVar1);
    }
    *piVar1 = 0;
    if ((undefined4 *)piVar1[2] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)piVar1[2])(1);
    }
    local_4 = 0xffffffff;
    if (*piVar1 != 0) {
      (*(code *)PTR__free_00f01b10)(*piVar1);
    }
    (*(code *)PTR__free_00f01b10)(piVar1);
  }
  ExceptionList = local_c;
  return;
}

