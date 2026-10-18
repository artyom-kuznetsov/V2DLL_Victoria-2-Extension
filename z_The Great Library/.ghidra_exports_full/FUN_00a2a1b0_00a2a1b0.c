// FUN_00a2a1b0 @ 00a2a1b0 body=[[00a2a1b0, 00a2a284] [00a2a288, 00a2a2a3] [00a2a2a7, 00a2a2d3] [00a2a2d7, 00a2a2f9] [00a2a2fd, 00a2a333]]


void FUN_00a2a1b0(void)

{
  int iVar1;
  undefined4 *in_ECX;
  int *piVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3dbd1;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  *in_ECX = &PTR_FUN_00e3fb30;
  local_8 = 7;
  iVar1 = in_ECX[0x36];
  if (iVar1 != 0) {
    FUN_00ad7d30();
    (*(code *)PTR__free_00f01b10)(iVar1);
  }
  piVar2 = (int *)in_ECX[0x25];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    in_ECX[0x25] = 0;
  }
  piVar2 = (int *)in_ECX[0x26];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    in_ECX[0x26] = 0;
  }
  piVar2 = (int *)in_ECX[0x27];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    in_ECX[0x27] = 0;
  }
  piVar2 = (int *)in_ECX[0x28];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    in_ECX[0x28] = 0;
  }
  for (piVar2 = (int *)in_ECX[0x43];
      ((int *)in_ECX[0x43] <= piVar2 && (piVar2 < (int *)in_ECX[0x44])); piVar2 = piVar2 + 1) {
    iVar1 = *piVar2;
    if (iVar1 != 0) {
      FUN_00a29e60(iVar1);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(iVar1);
    }
  }
  if (0xf < (uint)in_ECX[0x55]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x50]);
  }
  in_ECX[0x55] = 0xf;
  in_ECX[0x54] = 0;
  *(undefined1 *)(in_ECX + 0x50) = 0;
  if (0xf < (uint)in_ECX[0x4e]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x49]);
  }
  in_ECX[0x4e] = 0xf;
  in_ECX[0x4d] = 0;
  *(undefined1 *)(in_ECX + 0x49) = 0;
  if (in_ECX[0x43] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x43]);
  }
  in_ECX[0x43] = 0;
  in_ECX[0x44] = 0;
  in_ECX[0x45] = 0;
  local_8 = CONCAT31(local_8._1_3_,8);
  FUN_00a2ca10(*(undefined4 *)in_ECX[0x40],(undefined4 *)in_ECX[0x40]);
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(in_ECX[0x40]);
}

