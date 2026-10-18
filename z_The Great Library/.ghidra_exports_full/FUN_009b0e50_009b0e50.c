// FUN_009b0e50 @ 009b0e50 body=[[009b0e50, 009b0ec3]]


void FUN_009b0e50(int param_1)

{
  int *piVar1;
  void *_Dst;
  int iVar2;
  int *piVar3;
  
  (**(code **)(**(int **)(param_1 + 0x38) + 0x3c))();
  piVar3 = *(int **)(param_1 + 0x44);
  iVar2 = *(int *)(param_1 + 0x48) - (int)piVar3 >> 2;
  if (iVar2 != 0) {
    piVar1 = piVar3 + iVar2;
    for (; piVar3 != piVar1; piVar3 = piVar3 + 1) {
      if ((undefined4 *)*piVar3 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar3)(1);
      }
    }
  }
  _Dst = *(void **)(param_1 + 0x44);
  if (_Dst != *(void **)(param_1 + 0x48)) {
    FID_conflict__memcpy(_Dst,*(void **)(param_1 + 0x48),0);
    *(void **)(param_1 + 0x48) = _Dst;
  }
  return;
}

