// FUN_006e6860 @ 006e6860 body=[[006e6860, 006e6905] [006e6909, 006e6999]]


void FUN_006e6860(undefined4 *param_1)

{
  void *_Dst;
  int iVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3f279;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = CStateFactoryInfoItem::vftable;
  param_1[7] = CStateFactoryInfoItem::vftable;
  param_1[10] = CStateFactoryInfoItem::vftable;
  local_8 = 5;
  iVar1 = 0;
  iVar2 = (int)(param_1[0x472] - param_1[0x471]) >> 2;
  if (0 < iVar2) {
    do {
      (**(code **)(**(int **)(param_1[0x471] + iVar1 * 4) + 0x50))();
      iVar1 = iVar1 + 1;
    } while (iVar1 < iVar2);
  }
  _Dst = (void *)param_1[0x471];
  if (_Dst != (void *)param_1[0x472]) {
    FID_conflict__memcpy(_Dst,(void *)param_1[0x472],0);
    param_1[0x472] = _Dst;
  }
  if (param_1[0x471] == 0) {
    param_1[0x471] = 0;
    param_1[0x472] = 0;
    param_1[0x473] = 0;
    param_1[0x45c] = CButtonObserver::vftable;
    param_1[0x448] = CButtonObserver::vftable;
    local_8 = CONCAT31(local_8._1_3_,1);
    _eh_vector_destructor_iterator_(param_1 + 0xc,0x21c,8,FUN_006e2c90);
    param_1[10] = CButtonObserver::vftable;
    *param_1 = &PTR_FUN_00e392f0;
    param_1[7] = &PTR_FUN_00e39320;
    local_8 = 7;
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
  FUN_00aae91b(param_1[0x471]);
}

