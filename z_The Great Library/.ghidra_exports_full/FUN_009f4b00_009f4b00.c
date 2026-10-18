// FUN_009f4b00 @ 009f4b00 body=[[009f4b00, 009f4b61] [009f4ba3, 009f4bb1]]


void FUN_009f4b00(void)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pvVar3 = ExceptionList;
  puStack_c = &LAB_00b3b9b0;
  local_10 = ExceptionList;
  piVar1 = (int *)*in_ECX;
  iVar2 = *piVar1;
  ExceptionList = &local_10;
  *piVar1 = (int)piVar1;
  *(int *)(*in_ECX + 4) = *in_ECX;
  in_ECX[1] = 0;
  if (iVar2 != *in_ECX) {
    local_8 = 1;
    FUN_009f4b00();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(iVar2 + 0x48));
  }
  ExceptionList = pvVar3;
  return;
}

