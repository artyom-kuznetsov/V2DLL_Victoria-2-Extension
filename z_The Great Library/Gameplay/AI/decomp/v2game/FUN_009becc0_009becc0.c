// FUN_009becc0 @ 009becc0 body=[[009becc0, 009bed31]]


void FUN_009becc0(void)

{
  int *piVar1;
  undefined4 *in_ECX;
  int *piVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3e196;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  *in_ECX = &PTR_FUN_00e384c0;
  local_8 = 3;
  for (piVar2 = (int *)in_ECX[1]; ((int *)in_ECX[1] <= piVar2 && (piVar2 < (int *)in_ECX[2]));
      piVar2 = piVar2 + 1) {
    piVar1 = (int *)*piVar2;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
  }
  local_8 = CONCAT31(local_8._1_3_,4);
  FUN_00462440(*(undefined4 *)in_ECX[0xe],(undefined4 *)in_ECX[0xe]);
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(in_ECX[0xe]);
}

