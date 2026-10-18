// FUN_008b2740 @ 008b2740 body=[[008b2740, 008b278a] [008b278e, 008b27ae]]


void FUN_008b2740(int param_1)

{
  int *piVar1;
  void *_Dst;
  
  piVar1 = (int *)(param_1 + 0xc);
  FUN_008b3110();
  _Dst = (void *)*piVar1;
  if (_Dst != *(void **)(param_1 + 0x10)) {
    FID_conflict__memcpy(_Dst,*(void **)(param_1 + 0x10),0);
    *(void **)(param_1 + 0x10) = _Dst;
  }
  if (*piVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*piVar1);
  }
  *piVar1 = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  FUN_0057afc0(param_1);
  FUN_00aaea59(*(undefined4 *)(param_1 + 8));
  return;
}

