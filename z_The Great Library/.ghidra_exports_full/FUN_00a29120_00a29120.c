// FUN_00a29120 @ 00a29120 body=[[00a29120, 00a2917c] [00a29180, 00a29206] [00a2920a, 00a29227] [00a2922b, 00a29242] [00a29246, 00a2925d] [00a29261, 00a2927a]]


void FUN_00a29120(void)

{
  int *piVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4131a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = &PTR_FUN_00e3f910;
  local_8 = 4;
  if (-1 < (int)in_ECX[0x5b]) {
    FUN_009bcda0();
  }
  if (0xf < (uint)in_ECX[100]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x5f]);
  }
  in_ECX[100] = 0xf;
  in_ECX[99] = 0;
  *(undefined1 *)(in_ECX + 0x5f) = 0;
  local_8 = CONCAT31(local_8._1_3_,2);
  piVar1 = (int *)in_ECX[0x3b];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)in_ECX[0x3c];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)in_ECX[0x3d];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  in_ECX[0x3d] = 0;
  in_ECX[0x3b] = 0;
  in_ECX[0x3c] = 0;
  in_ECX[0x3e] = 0;
  in_ECX[0x3f] = 0;
  in_ECX[0x42] = 0;
  if (0xf < (uint)in_ECX[0x23]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x1e]);
  }
  in_ECX[0x23] = 0xf;
  in_ECX[0x22] = 0;
  *(undefined1 *)(in_ECX + 0x1e) = 0;
  if (0xf < (uint)in_ECX[0x1c]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x17]);
  }
  in_ECX[0x1c] = 0xf;
  in_ECX[0x1b] = 0;
  *(undefined1 *)(in_ECX + 0x17) = 0;
  if (0xf < (uint)in_ECX[0xf]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[10]);
  }
  in_ECX[0xf] = 0xf;
  in_ECX[0xe] = 0;
  *(undefined1 *)(in_ECX + 10) = 0;
  if (0xf < (uint)in_ECX[7]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[2]);
  }
  in_ECX[7] = 0xf;
  in_ECX[6] = 0;
  *(undefined1 *)(in_ECX + 2) = 0;
  ExceptionList = local_10;
  return;
}

