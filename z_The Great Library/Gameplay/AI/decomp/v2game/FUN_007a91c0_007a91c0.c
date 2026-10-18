// FUN_007a91c0 @ 007a91c0 body=[[007a91c0, 007a925a] [007a9260, 007a9275] [007a927b, 007a9296]]


void FUN_007a91c0(int *param_1)

{
  void *_Dst;
  int iVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3a856;
  local_10 = ExceptionList;
  local_8 = 1;
  ExceptionList = &local_10;
  if ((int *)*param_1 != (int *)0x0) {
    ExceptionList = &local_10;
    (**(code **)(*(int *)*param_1 + 0x50))();
    *param_1 = 0;
  }
  iVar1 = param_1[2] - param_1[1] >> 2;
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      (**(code **)(**(int **)(param_1[1] + iVar2 * 4) + 0x50))();
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  _Dst = (void *)param_1[1];
  if (_Dst != (void *)param_1[2]) {
    FID_conflict__memcpy(_Dst,(void *)param_1[2],0);
    param_1[2] = (int)_Dst;
  }
  if (param_1[5] == 0) {
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    if (param_1[1] == 0) {
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      ExceptionList = local_10;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[1]);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(param_1[5]);
}

