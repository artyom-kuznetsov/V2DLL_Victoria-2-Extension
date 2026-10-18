// FUN_0044e3d0 @ 0044e3d0 body=[[0044e3d0, 0044e40c] [0044e410, 0044e432] [0044e436, 0044e448]]


void FUN_0044e3d0(byte param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b40738;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_008b32d0();
  if (0xf < *(uint *)(in_ECX + 0x44)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(in_ECX + 0x30));
  }
  *(undefined4 *)(in_ECX + 0x44) = 0xf;
  *(undefined4 *)(in_ECX + 0x40) = 0;
  *(undefined1 *)(in_ECX + 0x30) = 0;
  FUN_0044be00();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return;
}

