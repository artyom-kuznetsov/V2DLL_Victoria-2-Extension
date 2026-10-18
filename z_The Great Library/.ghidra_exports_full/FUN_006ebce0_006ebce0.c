// FUN_006ebce0 @ 006ebce0 body=[[006ebce0, 006ebd72] [006ebd78, 006ebd8d] [006ebd93, 006ebdeb]]


void FUN_006ebce0(undefined4 *param_1)

{
  void *_Dst;
  int iVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3f1bc;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = CProjectInfoItem::vftable;
  param_1[7] = CProjectInfoItem::vftable;
  local_8 = 3;
  iVar2 = 0;
  iVar1 = (int)(param_1[0x10] - param_1[0xf]) >> 2;
  if (0 < iVar1) {
    do {
      (**(code **)(**(int **)(param_1[0xf] + iVar2 * 4) + 0x50))();
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  _Dst = (void *)param_1[0xf];
  if (_Dst != (void *)param_1[0x10]) {
    FID_conflict__memcpy(_Dst,(void *)param_1[0x10],0);
    param_1[0x10] = _Dst;
  }
  param_1[0x18] = CButtonObserver::vftable;
  if (param_1[0x13] == 0) {
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    if (param_1[0xf] == 0) {
      param_1[0xf] = 0;
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      *param_1 = &PTR_FUN_00e392f0;
      param_1[7] = &PTR_FUN_00e39320;
      local_8 = 5;
      if ((int *)param_1[8] != (int *)0x0) {
        (**(code **)(*(int *)param_1[8] + 0x50))();
      }
      local_8 = 0xffffffff;
      param_1[7] = &PTR_FUN_00e39158;
      *param_1 = &PTR_FUN_00e38708;
      FUN_009a62b0();
      ExceptionList = local_10;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0xf]);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(param_1[0x13]);
}

