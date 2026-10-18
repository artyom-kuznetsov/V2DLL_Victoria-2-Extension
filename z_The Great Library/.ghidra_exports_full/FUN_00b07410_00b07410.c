// FUN_00b07410 @ 00b07410 body=[[00b07410, 00b07481] [00b07485, 00b074b2]]


void FUN_00b07410(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00b38eb7;
  local_c = ExceptionList;
  uVar1 = DAT_00ef259c ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *in_ECX = &PTR_FUN_00ddfd48;
  local_4 = 1;
  if ((int *)**(int **)(DAT_00f209e0 + 0x3c) != (int *)0x0) {
    (**(code **)(*(int *)**(int **)(DAT_00f209e0 + 0x3c) + 0x14))();
  }
  if (*(char *)((int)in_ECX + 0x41) == '\x01') {
    FUN_00ae3690(in_ECX,0);
  }
  if (in_ECX[4] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[4]);
  }
  local_4 = local_4 & 0xffffff00;
  FUN_00b10590(uVar1);
  local_4 = 0xffffffff;
  FUN_00b13650();
  ExceptionList = local_c;
  return;
}

