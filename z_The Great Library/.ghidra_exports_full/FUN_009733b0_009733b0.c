// FUN_009733b0 @ 009733b0 body=[[009733b0, 0097343d] [00973443, 00973458] [0097345e, 00973473] [00973479, 009734a6]]


void FUN_009733b0(int param_1)

{
  int *piVar1;
  void *_Dst;
  void **ppvVar2;
  int iVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3a9a9;
  local_10 = ExceptionList;
  local_8 = 3;
  piVar4 = *(int **)(param_1 + 0xc);
  iVar3 = *(int *)(param_1 + 0x10) - (int)piVar4 >> 2;
  ppvVar2 = &local_10;
  if (iVar3 != 0) {
    piVar1 = piVar4 + iVar3;
    ExceptionList = &local_10;
    for (; ppvVar2 = ExceptionList, piVar4 != piVar1; piVar4 = piVar4 + 1) {
      if ((undefined4 *)*piVar4 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar4)(1);
      }
    }
  }
  ExceptionList = ppvVar2;
  _Dst = *(void **)(param_1 + 0xc);
  if (_Dst != *(void **)(param_1 + 0x10)) {
    FID_conflict__memcpy(_Dst,*(void **)(param_1 + 0x10),0);
    *(void **)(param_1 + 0x10) = _Dst;
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(param_1 + 0x2c));
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(param_1 + 0x1c));
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(param_1 + 0xc));
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  FUN_0057afc0(param_1);
  FUN_00aaea59(*(undefined4 *)(param_1 + 8));
  ExceptionList = local_10;
  return;
}

