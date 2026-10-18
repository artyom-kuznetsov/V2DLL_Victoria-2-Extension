// FUN_009dd2a0 @ 009dd2a0 body=[[009dd2a0, 009dd379] [009dd37d, 009dd38b]]


void FUN_009dd2a0(void)

{
  char cVar1;
  int *in_ECX;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3def8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  cVar1 = (**(code **)(*in_ECX + 0x3c))();
  *(undefined1 *)((int)in_ECX + 0x29) = 1;
  if (((char)in_ECX[0xc2] != '\0') && (cVar1 == '\0')) {
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00408ed0(in_ECX + 0x61,0,0xffffffff);
    local_8 = 0;
    FUN_00409350(&DAT_00ded94d,0);
    (**(code **)(*in_ECX + 0xf0))
              (in_ECX[0x7d],in_ECX + 0x6f,in_ECX + 0x76,local_2c,(short)in_ECX[0x6b],
               *(undefined2 *)((int)in_ECX + 0x1ae),in_ECX[0x6c],in_ECX[0x6d],in_ECX[0x84],
               *(undefined1 *)((int)in_ECX + 0x309));
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
  }
  ExceptionList = local_10;
  return;
}

