// FUN_00a89eb0 @ 00a89eb0 body=[[00a89eb0, 00a89f0e]]


undefined4 * FUN_00a89eb0(void *param_1,size_t param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  void *_Dst;
  
  puVar1 = (undefined4 *)(*(code *)PTR__malloc_00f071f8)(0x10);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    _abort();
  }
  _Dst = (void *)(*(code *)PTR__malloc_00f071f8)(param_2);
  if (_Dst == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _abort();
  }
  puVar1[2] = _Dst;
  if (param_1 != (void *)0x0) {
    FID_conflict__memcpy(_Dst,param_1,param_2);
  }
  puVar1[1] = param_3;
  puVar1[3] = param_2;
  *puVar1 = 0;
  return puVar1;
}

