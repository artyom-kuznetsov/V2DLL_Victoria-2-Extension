// FUN_00a20fb0 @ 00a20fb0 body=[[00a20fb0, 00a210b0] [00a210b4, 00a210ce] [00a210d2, 00a210fa] [00a210fe, 00a21117]]


void FUN_00a20fb0(void)

{
  int *piVar1;
  undefined4 *in_ECX;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4137a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = &PTR_FUN_00e3f800;
  in_ECX[10] = &PTR_FUN_00e3f86c;
  local_8 = 4;
  if (-1 < (int)in_ECX[0x127]) {
    FUN_009bcda0();
  }
  FUN_004be200();
  FUN_00a21120();
  local_8 = CONCAT31(local_8._1_3_,3);
  piVar1 = (int *)in_ECX[0x9a3];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)in_ECX[0x9a4];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)in_ECX[0x9a5];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  in_ECX[0x9a5] = 0;
  in_ECX[0x9a3] = 0;
  in_ECX[0x9a4] = 0;
  in_ECX[0x9a6] = 0;
  in_ECX[0x9a7] = 0;
  in_ECX[0x9aa] = 0;
  local_8 = CONCAT31(local_8._1_3_,2);
  _eh_vector_destructor_iterator_(in_ECX + 0x12a,0x20,0x100,FUN_004010c0);
  iVar2 = 0;
  do {
    if (in_ECX[iVar2 + 0x25] != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(in_ECX[iVar2 + 0x25]);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x100);
  if (0xf < (uint)in_ECX[0x23]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x1e]);
  }
  in_ECX[0x23] = 0xf;
  in_ECX[0x22] = 0;
  *(undefined1 *)(in_ECX + 0x1e) = 0;
  *in_ECX = &PTR_FUN_00e3b228;
  if (0xf < (uint)in_ECX[8]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[3]);
  }
  in_ECX[8] = 0xf;
  in_ECX[7] = 0;
  *(undefined1 *)(in_ECX + 3) = 0;
  ExceptionList = local_10;
  return;
}

