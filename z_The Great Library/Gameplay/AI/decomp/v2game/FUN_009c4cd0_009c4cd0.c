// FUN_009c4cd0 @ 009c4cd0 body=[[009c4cd0, 009c4d49] [009c4d4d, 009c4d77] [009c4d7b, 009c4da7]]


void FUN_009c4cd0(void)

{
  int *piVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3e074;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = &PTR_LAB_00e3abe8;
  in_ECX[0x53] = &PTR_FUN_00e3ad58;
  local_8 = 2;
  FUN_004be200();
  piVar1 = (int *)in_ECX[0x6a];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  if (0xf < (uint)in_ECX[0x68]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[99]);
  }
  in_ECX[0x68] = 0xf;
  in_ECX[0x67] = 0;
  *(undefined1 *)(in_ECX + 99) = 0;
  if (0xf < (uint)in_ECX[0x5d]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x58]);
  }
  in_ECX[0x5d] = 0xf;
  in_ECX[0x5c] = 0;
  *(undefined1 *)(in_ECX + 0x58) = 0;
  FUN_00a203f0();
  ExceptionList = local_10;
  return;
}

