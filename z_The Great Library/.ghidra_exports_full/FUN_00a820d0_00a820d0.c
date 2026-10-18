// FUN_00a820d0 @ 00a820d0 body=[[00a820d0, 00a8213a]]


void FUN_00a820d0(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_ECX;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3d586;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  *in_ECX = &PTR_FUN_00e441f0;
  local_8 = 1;
  piVar1 = (int *)in_ECX[0x50];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    in_ECX[0x50] = 0;
  }
  iVar2 = *(int *)(in_ECX[0x4f] + 300);
  if (iVar2 != 0) {
    *(int *)(in_ECX[0x4f] + 300) = iVar2 + -1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(in_ECX[0x60]);
}

